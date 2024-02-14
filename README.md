# IETP
Our IETP project Arduino code.

Sure! I have added the portfolio link to the README file. Here's an updated version:

# Stepper Motor Control

This project demonstrates the control of a stepper motor using an Arduino board. The stepper motor is controlled using a custom circuit connected to the Arduino board's digital pins.

## Hardware Requirements

- Arduino board
- Stepper motor
- Stepper motor driver circuit (consisting of Step, Direction, and Enable pins)
- Jumper wires

## Circuit Connections

Connect the components as follows:

- Connect the Step pin of the stepper motor driver circuit to pin 12 (STEPPIN) on the Arduino board.
- Connect the Direction pin of the stepper motor driver circuit to pin 11 (DIRPIN) on the Arduino board.
- Connect the Enable pin of the stepper motor driver circuit to pin 10 (ENAPIN) on the Arduino board.
- Connect the stepper motor's power supply to the appropriate power source.

## Software Setup

1. Install the Arduino IDE on your computer if you haven't already.
2. Connect your Arduino board to your computer via USB.
3. Open the Arduino IDE and create a new sketch.
4. Copy and paste the provided code into the sketch.

## Code Explanation

The code provided demonstrates the control of a stepper motor to move in a forward and reverse direction. The motor is rotated a specified number of steps in each direction.

- The `STEPPIN`, `DIRPIN`, and `ENAPIN` constants are defined to specify the Arduino pin connections for Step, Direction, and Enable pins, respectively.
- The `STEPTIME` constant determines the delay between steps, controlling the motor's speed. Increase this value for slower speed.
- The `setup()` function configures the Arduino pins as outputs.
- The `loop()` function contains the main code that controls the motor.
- The `forward()` function is used to rotate the motor in the forward direction for a specified number of steps.
- The `reverse()` function is used to rotate the motor in the reverse direction for a specified number of steps.

## Usage

1. Connect the Arduino board to the stepper motor driver circuit and power supply as described in the "Circuit Connections" section.
2. Upload the code to the Arduino board using the Arduino IDE.
3. The motor will rotate forward and then reverse, repeating the specified number of times.

## Portfolio

You can find more information about our project in our portfolio website. Visit [Group 32 Portfolio](https://sites.google.com/view/group-32-portoflio/home) to explore our journey, weekly progress, project gallery, reflections, and more.

## Contributing

Contributions to this project are welcome. If you have any suggestions or improvements, please feel free to open an issue or pull request.


