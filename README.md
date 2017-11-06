# SEEC Lilypad IDE

THe Lilypad IDE is a code editor that uses a custom language to help students starting out program a [Lilypad Arduino Development board](https://www.sparkfun.com/products/11262). It uses a english like language to control each section of the Lilypad Board. It is paired with an instructional guide that walks 

# Prerequisites
In addition to the file here it is also nessisary to download a copy of Arduino 1.6.13
Found here: [Arduino 1.6.13](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous)
Software Packages:
pyqt
qtCreator
```
sudo apt-get install pyqt5 pyqt5-dev-tools qtcreator
```
# Language Features
# Examples:
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
