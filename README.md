Keyboard Injector using Arduino
This project demonstrates how to use an Arduino with native USB capabilities (such as Arduino Leonardo or Micro) to inject keyboard inputs into a connected computer autonomously. The Arduino emulates a USB keyboard and sends predefined keystrokes to automate tasks without human intervention.

Features
Automatically opens Windows Run dialog and launches Command Prompt.

Copies a specified file from one drive to another.

Opens File Explorer and sends keyboard navigation commands.

Fully autonomous key injection with controlled timing and delays.

Hardware Requirements
Arduino Leonardo, Micro, or any Arduino with native USB HID support.

USB cable to connect Arduino to the target computer.

Software Requirements
Arduino IDE with the Keyboard library included (default in Leonardo/Micro).

Target computer running Windows OS (tested on Windows 10/11).

How It Works
The Arduino acts as a USB keyboard.

On startup, it sends Windows + R to open Run dialog.

Types and executes cmd to open Command Prompt.

Runs a file copy command (copy f:\dev.exe d:\).

Closes Command Prompt and launches File Explorer.

Sends a series of navigation keystrokes with delays.
