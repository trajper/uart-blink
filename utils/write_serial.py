import serial

with serial.Serial('/dev/ttyUSB0', 115200, timeout=0, parity=serial.PARITY_NONE) as s:
    s.write(b'1')
