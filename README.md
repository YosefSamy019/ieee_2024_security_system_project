# 🔐 Bank Security System – Embedded Systems Project

An **Embedded Systems** task completed at **IEEE BUB SB**, under the supervision of **Eng. Adnan Adel** and instruction of **Eng. Mostafa Ayman**.

## 📌 Project Overview

This project is a **bank security system** designed using basic embedded hardware components. The system authenticates a user through a keypad and provides feedback using an LCD, buzzer, LEDs, and 7-segment display.

## 🛠️ Hardware Components

* LCD (4-bit mode)
* Keypad (4x4 or 4x3)
* Buzzer
* LEDs (Red & Green)
* 7-Segment Display

## 🚦 System Workflow

1. **Welcome Screen**

   * On startup, the LCD displays a **welcome message**.
   * Then prompts the user to **enter the password**.

2. **Password Entry**

   * User enters password via **keypad**.
   * Each keypress is masked and shown as `*` on the LCD.

3. **Password Validation**

   * ✅ **Correct Password**:

     * Displays a success message on LCD.
     * **Green LED** turns on.
   * ❌ **Incorrect Password**:

     * You have **3 attempts**.
     * After each failed attempt, a warning is shown.

4. **Security Breach (After 3 Failed Attempts)**

   * The **7-segment display** counts down from **9 to 0**.
   * Then, the **buzzer sounds** and the **red LED blinks**.
   * (💣 Just a simulation! No real explosion 😄)

## 🧪 Features

* Secure password masking using `*` on LCD
* Visual and audible feedback for system state
* Countdown alert using 7-segment before alarm
* Simple, effective user interaction via keypad

## 🧑‍💻 Developers

* Developed under the guidance of:

  * **Supervisor**: Eng. Adnan Adel
  * **Instructor**: Eng. Mostafa Ayman
