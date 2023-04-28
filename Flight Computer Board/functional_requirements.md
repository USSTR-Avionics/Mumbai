# Purposes and Scope

The flight computer should be a general purpose flight computer that allows us to have high performance, modularity,
encapsulation and object oriented design. Provide unparalledled situational awarenedd using edge functions on the
lambda cloud. All instructions and code are encrypted using null key encryption and single source of truth blockchain
technologies to avoid tampering with the data.

# Functional Requirements

It should be able to transition between states
It should be able to detect apogee and trigger parachute deployment
It should be able to detect it's apogee and attitude
It should communicate with other boards over the CAN bus
It should log all of it's data on the onboard FRAM chip and dump it over the serial monitor in a csv format
It should have pins, micro-usb connector to program it easily
It should have a battery terminal that acts like a physical switch requiring a wire to connect the battery and arm the board
It should have LEDs and buzzers for visual debugging
It shall have all the functionality to do guidance and control, including TVC and Fin actuation
It shall have a backup IMU sensor for ultimate sensor redundancy


# Overview of functionality

- Acceleration detection
- Altitude detection
- Orientation detection
- Interact with external servos or pyros
- Log flight data and access it later
- IO peripherals (led and buzzer)

# Materials
- microcontroller
    - STM32F405RGT6
    - debug/ program pins (should be programmable via USB)

- attitude sensors
    - accelerometer
        - 3x acceleration chips to ensure RADI1-like redundancy
        - one on each axis
        - KX134

    - barometer
        - 2x barometer chips to ensure RADI1-like redundancy
        - only relative altitude matters, so 2 should be enough
        - BMP390

    - gyroscope
        - 3x gyroscope chips to ensure RADI1-like redundancyone on each axis
        - one on each axis
        - LSM6DSOX

    - magnetometer
        - 3x magnetometer chips to ensure RADI1-like redundancy

    - IMU
        - 3x LSM6DS3
        - this serves as additional backup for all other sensors, in case of a catastrophic failure

- IO peripherals
    - multi-colour LED arrays (smd leds)
        - 3x tri-color LEDs
        - 27 possible signals
        - 150060AS75000 

    - power LED
        - orange LED
        - 150060AS75000 
        - indicated microcontroller is powered on

    - buzzer (through hole buzzer)
        - PKHPS0013E4000-A2

    - memory
        - 2x 2MBit FRAM chip
        - MB85RS2MTY

    - MOSFETs
        - N channel transistors
        - to control things like parachute deploy and/or landing legs

- communication
    - CAN transceiver (in-built on the microcontroller)

- miscellaneous
    - battery terminal
    - kill and arm switch terminal


# Assumptions and Dependencies

All of it will work
