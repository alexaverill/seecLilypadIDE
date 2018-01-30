# SEEC Lilypad IDE
![Lilypad IDE](https://raw.githubusercontent.com/alexaverill/seecLilypadIDE/master/LilypadUpdated.png)
THe Lilypad IDE is a code editor that uses a custom language to help students starting out program a [Lilypad Arduino Development board](https://www.sparkfun.com/products/11262). It uses a english like language to control each section of the Lilypad Board. It is paired with an instructional guide that walks 

# Prerequisites
In addition to the file here it is also nessisary to download a copy of Arduino 1.6.13, as well as installing arduino-mk. 

Arduino-mk: [Arduino Mk](https://github.com/sudar/Arduino-Makefile)

Found here: [Arduino 1.6.13](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous)

Software Packages:

pyqt

qtCreator

```
sudo apt-get install pyqt5 pyqt5-dev-tools qtcreator
```
# Language Features
The Lilypad Language was designed to be an easy to use and quick to understand introductory language.  More examples can be found in the Lilypad IDE itself under the help dialog. 
## Examples:
Light LED and play an A on the buzzer when button pressed
```
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
```

# Future Work
There are still things that need to be finished, these are recorded in the github issues, feel free to jump in and work on submiting a pull request to solve any open issues! 
