import time
import serial

with serial.Serial('/dev/ttyUSB0', 115200, parity=serial.PARITY_NONE, timeout=1) as s:
    while True:
        line = s.readline()
        print(line)
        time.sleep(1)
