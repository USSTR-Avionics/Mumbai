# Purposes and Scope

The flight computer should be a general purpose flight computer that allows us to have high performance, modularity,
encapsulation and object oriented design. Provide unparalledled situational awarenedd using edge functions on the
lambda cloud. All instructions and code are encrypted using null key encryption and single source of truth blockchain
technologies to avoid tampering with the data.

# Functional Requirements

It shall do transition between states
It shall be able to trigger a recovery system
It shall communicate with other boards
It shall log data
It shall be programmable
It shall have things for easily debugging
It shall have sensor redundancy


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
