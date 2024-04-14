#!/usr/bin/env python3
import time
import serial
 
ser = serial.Serial(
	port = '/dev/ttyACM0',
	baudrate = 9600,
	timeout = 1
)
time.sleep(3)
print("Raspberry's sending : ")
 
try:
     while True:
        time.sleep(1)
        print("Send message to Arduino")
        ser.write("Hello from Ras".encode('utf-8'))
        while ser.in_waiting <= 0:
            time.sleep(0.01)
        response=ser.readline().decode('utf-8').rstrip()
        print(response)    
except KeyboardInterrupt:
    print("End")
    ser.close()
