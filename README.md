# 🌡️ Digital Thermometer using Arduino

## 📌 Project Overview

The Digital Thermometer is an Arduino-based embedded systems project that measures ambient temperature using a TMP36 temperature sensor and displays the measured temperature on a 16×2 LCD display.

The project demonstrates real-time temperature monitoring by converting the analog voltage output from the temperature sensor into Celsius values using Arduino programming. The circuit was designed and simulated using Tinkercad.

---

# 🎯 Objectives

- Measure ambient temperature in real time.
- Display temperature readings on an LCD screen.
- Learn analog sensor interfacing with Arduino.
- Understand temperature measurement using embedded systems.
- Gain practical experience with Arduino programming.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| TMP36 Temperature Sensor | 1 |
| 16×2 LCD Display | 1 |
| 10kΩ Potentiometer | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable (Simulation) | 1 |

---

# ⚙ Working Principle

The TMP36 temperature sensor continuously senses the surrounding temperature and outputs a voltage proportional to the measured temperature.

The Arduino Uno reads this analog voltage through one of its analog input pins and converts it into a temperature value in degrees Celsius using the appropriate conversion formula.

The calculated temperature is then displayed on the 16×2 LCD display in real time. The potentiometer is used to adjust the LCD contrast for better visibility.

This setup provides a simple and effective digital temperature monitoring system suitable for educational and embedded systems applications.

---

# ✨ Features

- Real-time temperature monitoring
- TMP36 analog temperature sensor
- 16×2 LCD display output
- Adjustable LCD contrast using potentiometer
- Arduino Uno based implementation
- Easy-to-understand embedded systems project
- Tinkercad simulation

---


# ▶ How to Run

1. Open the circuit in Tinkercad.
2. Connect all components according to the circuit diagram.
3. Upload the Arduino code.
4. Start the simulation.
5. Adjust the temperature sensor using the simulator.
6. Observe the temperature displayed on the LCD.

---

# 📊 System Workflow

Temperature Detection
⬇
TMP36 Sensor Generates Analog Voltage
⬇
Arduino Reads Analog Input
⬇
Convert Voltage to Temperature (°C)
⬇
Display Temperature on LCD

---

# 🌍 Applications

- Digital Temperature Monitoring
- Weather Monitoring Systems
- Smart Home Automation
- Industrial Temperature Measurement
- Environmental Monitoring
- Educational Arduino Projects
- Embedded Systems Learning

---

# 🚀 Future Improvements

- Display both Celsius and Fahrenheit
- Add high-temperature warning using a buzzer
- Store temperature data on an SD card
- IoT-based cloud monitoring using ESP8266
- Mobile app integration
- Wireless temperature monitoring

---

# 👩‍💻 Author

**Name:** Kalpana Devi A

**Intern ID:** CITS2602

---

# 📄 License

This project is developed for educational and internship purposes.
