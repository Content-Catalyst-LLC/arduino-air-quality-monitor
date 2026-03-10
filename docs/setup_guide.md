# Setup Guide

## Purpose

This guide explains how to assemble and test the Arduino Air Quality Monitor prototype.

## Wiring Overview

Exact wiring depends on the particulate matter sensor used.

Typical setup:

- Sensor VCC → Arduino 5V or sensor-rated supply
- Sensor GND → Arduino GND
- Sensor TX → Arduino RX or software serial input
- Sensor RX → Arduino TX if required by the sensor

## Build Steps

1. Connect the particulate matter sensor to the Arduino
2. Verify sensor power requirements before powering the system
3. Upload `air_quality_monitor.ino`
4. Open the Serial Monitor at `9600` baud
5. Observe particulate readings and confirm data is updating

## Validation

Before relying on the prototype, verify:

- the sensor powers on consistently
- readings change in response to environmental conditions
- serial output is stable
- warm-up time is respected
