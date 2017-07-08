#update UI
pyuic5 -x newmainwindow.ui -o mainWindow.py
#create executable
/home/aaverill/.local/bin/pyinstaller -F main.py

