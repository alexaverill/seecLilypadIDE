#SEEC Lilypad IDE
This is a basic IDE and code translator for the Lilypad Development board by Adafruit. 
It allows for a simple language that can be used to help teach programming using the Lilypad Wearable Electronics board. 

#Prerequisites
In addition to the file here it is also nessisary to download a copy of Arduino 1.6.13
Found here: https://www.arduino.cc/en/Main/OldSoftwareReleases#previous


#Language Features
#Examples:
Light LED and play an A on the buzzer when button pressed
USE BUTTON
USE LED1
USE BUZZER
IF(BUTTON == 0){
        LED1 ON
        BUZZER A
        WAIT 150
}ELSE{
        LED1 OFF
        BUZZER OFF
        WAIT 150
}
