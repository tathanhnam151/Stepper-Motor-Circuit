# Stepper Motor Circuit
This project involves designing a circuit for controlling and monitoring a stepper motor using an A4988 driver and an LCD display. The circuit allows users to adjust the motor's speed and monitor its current speed on the display.

# Stepper Motor Controller 

This project is part of my Microprocessor course that I participated this semester. The main purpose of this project is to give everyone a better understanding of the STM32 chip architecture and to enhance both hardware and firmware skills. This project brings varios potential applications such as robotics, automation, and CNC machines. 
It consists of a STM32F1 microcontroller, A4988 driver, buttons for mode selection, and an LCD to display the current speed of the motor.

## Hardware
The hardware design was created using Altium Designer software. The circuit board contains the power supply block, microcontroller block, A4988 driver, button block, and display block. The power block consists of a 12V voltage source for the motor and a 5V voltage source for the A4988 driver, LCD, and microcontroller. The microcontroller block contains the STM32F1 microcontroller, which communicates with the A4988 driver to control the motor. The button block allows the user to select the motor's operating mode, and the display block displays the motor's current speed.

## Firmware
The firmware was developed using the Arduino IDE and STM32duino libraries. It includes code to control the A4988 driver to operate the motor and code to interface with the LCD to display the motor's current speed. The firmware also handles button presses to change the motor's operating mode.

## Usage
To use the stepper motor controller, connect a stepper motor to the A4988 driver, power the circuit board using a 12V power source, and select the desired mode using the buttons. The current speed of the motor will be displayed on the LCD.
