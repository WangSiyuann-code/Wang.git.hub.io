#Start of skeleton code
#Q1 Answer: 651
#Q2 Answer: 15
#Q3 Answer: 1999-05-16


from datetime import datetime, timezone

# Open the binary input file
input_file = open("binaryFileC_102.bin", "rb")
output_file = open("14239904.csv", "w")

buffer = []
frame_count = 0
corrupt_count = 0
valid_count = 0
first_timestamp = None
FRAME_LENGTH = 26

# Temperature decode
temp_lookup = {}
base = 0xA0
temp = 30.0
for i in range(64):
    temp_lookup[base + i] = round(temp, 1)
    temp += 0.1

#Read the first byte and loop as long as
#there is always another byte available
byte = input_file.read(1)

while byte:
    print("Byte value is (hexidecimal): " + str(byte))
    print("Byte value is (decimal): " + str(int.from_bytes(byte)))
    val = int.from_bytes(byte, byteorder="big")
    buffer.append(val)

    # Detect frame header and check
    if len(buffer) >= FRAME_LENGTH:
        if buffer[0] == 0x7E and buffer[1] == 0x7E:
        
            frame = buffer[-26:]
            frame_count += 1
            is_corrupt = False

            if frame[7] != ord('P') or frame[16] != ord('T'):
                is_corrupt = True    

            # Decode
            sys_id = frame[2]
            dest_id = frame[3]
            comp_id = frame[4]
            seq = frame[5]
            msg_type = frame[6]

            rpm = int.from_bytes(frame[8:10], byteorder="big", signed=False)
            vlt = int.from_bytes(frame[10:12], byteorder="big", signed=False)
            crt = int.from_bytes(frame[12:14], byteorder="little", signed=True)

            mos_raw = frame[14]
            cap_raw = frame[15]

            mos_temp = temp_lookup.get(mos_raw, 0.0)
            cap_temp = temp_lookup.get(cap_raw, 0.0)

            timestamp = int.from_bytes(frame[17:25], byteorder="big", signed=False)


            # Checksum
            checksum_rx = frame[25]
            checksum_calc = 255 - (sum(frame[:25]) % 256)
            if checksum_calc != checksum_rx:
                is_corrupt = True
            else:
                valid_count += 1 

            if is_corrupt:
                corrupt_count += 1

            # timestamp（first）
            if first_timestamp is None:
                first_timestamp = timestamp

            # Write output CSV file
            output_file.write(
                f"~~,{sys_id},{dest_id},{comp_id},{seq},{msg_type},"
                f"P,{rpm},{vlt},{crt},{mos_temp},{cap_temp},"
                f"T,{timestamp},{checksum_rx}\n"
            )

            # Clear buffer to avoid false frame
            buffer = buffer[26:]
        else:
            buffer.pop(0)
   
    #Get the next byte from the file and repeat
    byte = input_file.read(1)

#Must be end of the file so close the file
print("End of file reached")
input_file.close()
output_file.close()

# Answer output
print("Complete frames:", frame_count)
print("Corrupt frames:", corrupt_count)
print("valid frames:", valid_count)

if first_timestamp:
    dt = datetime.fromtimestamp(first_timestamp / 1_000_000, tz=timezone.utc)
    print("Message date (UTC):", dt.date())
