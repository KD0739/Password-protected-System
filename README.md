# Password-protected-System
# Password Protected System using 8051 Microcontroller

##  Overview

This project implements a **password-protected embedded system** using the 8051 microcontroller, designed to control access based on user authentication. The system validates user-entered credentials and grants or denies access accordingly, demonstrating core embedded system design principles.

## ⚙️ System Description

The system interfaces input devices (e.g., keypad or switches) with the 8051 to capture a user-defined password. The entered sequence is compared against a predefined password stored in memory. Based on the comparison result, appropriate output actions (such as display messages or triggering actuators) are executed.


##  Key Technical Concepts

###  Timing and Delay Management

* Utilized **8051 timers** to generate precise delays for:

  * Input debouncing
  * Display timing
  * Controlled system response intervals

###  Interrupt Handling

* Implemented **interrupt-driven design** to improve responsiveness
* External or timer interrupts used for:

  * Real-time input detection
  * Efficient event handling without continuous polling

###  Embedded Control Logic

* Sequential password validation logic
* State-based operation (Idle → Input → Verification → Response)
* Error handling for incorrect attempts

##  Hardware Interfacing

* Interfaced input modules (keypad/switches) for password entry
* Output interfacing (LCD/LED/Buzzer) for system feedback
* Ensured proper signal timing and synchronization

##  Features

* Secure password validation
* Real-time response using interrupts
* Efficient timing control using hardware timers
* Reliable operation through embedded C / assembly programming

##  Applications

* Electronic door lock systems
* Secure access control systems
* Embedded authentication modules

##  Key Learnings

* Practical implementation of **8051 timers and interrupts**
* Real-time embedded system design
* Hardware-software integration
* Debugging and testing of microcontroller-based systems
