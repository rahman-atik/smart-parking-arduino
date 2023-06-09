# smart-parking-arduino

Ultrasonic Parking Sensor:
Create a parking sensor that can detect the distance between your car and an obstacle, helping you park safely without any collisions. The project will use an Arduino Uno, a sonar sensor (ultrasonic sensor), and some LEDs or a buzzer for feedback.

Here's a step-by-step guide to get you started:

Gather the components: Arduino Uno, ultrasonic sensor (HC-SR04), breadboard, jumper wires, LEDs or a buzzer.

Connect the ultrasonic sensor to the Arduino:

Connect the VCC pin of the sensor to the 5V pin on the Arduino.
Connect the GND pin of the sensor to the GND pin on the Arduino.
Connect the Trig pin of the sensor to digital pin 2 on the Arduino.
Connect the Echo pin of the sensor to digital pin 3 on the Arduino.
Connect the LEDs or buzzer to the Arduino:

Connect the positive leg (longer leg) of the LED or the positive pin of the buzzer to a current-limiting resistor (220-470 ohms).
Connect the other end of the resistor to a digital pin on the Arduino.
Connect the negative leg (shorter leg) of the LED or the negative pin of the buzzer to the GND pin on the Arduino.
Upload the code:

Open the Arduino IDE on your computer.
Write the code to measure the distance using the sonar sensor and provide appropriate feedback through the LEDs or buzzer.

Verify and upload the code to the Arduino Uno.

Connect the Arduino to a power source (computer or battery).

Place the ultrasonic sensor facing forward, and your parking sensor is ready!

Now, when an obstacle comes within 10 cm of the sensor, the LED or buzzer will be activated, indicating that you are too close to the object. You can adjust the threshold distance and customize the feedback according to your preferences.

Remember to double-check the connections, and make sure you have installed the necessary libraries if any are required.
