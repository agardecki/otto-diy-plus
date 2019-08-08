# Otto remix by Hobby-Store.pl

Orginal codes and all information you can find here:

-https://www.ottodiy.com/

-https://wikifactory.com/+OttoDIY/otto-diy

-https://github.com/OttoDIY


This is soft required for remixed Otto robot to function. 


After putting Otto together it's time to turn it on. You can program it by mBlock or arduino IDE. For start install chosen programming environment and let's set it up.


# Install Arduino Board:


-Connect Arduino to your computer

-Arduino should be automatically detected and installed. If not you have to install Arduino Nano drivers manually


# Arduino IDE set up:


-Open "Tool" menu from Toolbar

-Select Arduino Nano from "Boards"

-Choose from "Processor" ATmega328P (Old Bootloader)

-From "Port" select COM3

-Download Libraries.zip and unpack it with 7zip

-Copy content to C:\Users\[user name]\Documents\Arduino\libraries or similar folder if you decided to install Arduino IDE elsewhere.

Now Arduino IDE is fully set.


# mBlock set up:


-Open "Extensions" and choose Manage Extensions

-Search for OttoDIY and install it

-From "Connect" choose COM3  in "Serial Port"

-Change mode in "Edit" to Arduino


# While uploading program to Arduino be sure that BT module is not pluged! 

You can plug it in after transfer is complited
