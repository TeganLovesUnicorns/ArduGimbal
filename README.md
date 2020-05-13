# ArduGimbal

## Abstract

This project will interface with a project I am also working on called PyGimbal. The RaspberryPi 3 B+ will be the main processing and brains for the gimbal. The gimbal as a whole will be user programable to travel and follow points in space that the user choses with a web-based application.

## Required Features

- API Communication with Arduino via GPIO pins on RaspberryPi
- upon start of software, PyGimbal must perform a hardware reset so that the device is in a known and consistant "Home" position.
- Must be able to control multiple motors via Arduino interface and follow user's programming for motor vectors.
- Mobile based interface for user control and camera path programming.
  - Web-based control interface. Website will be served up by connecting to Raspberry Pi directly via Wi-Fi.

## Planned Features

- Camera outputs live preview to user interface while programming camera path.
