import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/student48/assessments/coursework2/install/gamma_system_controller_pkg'
