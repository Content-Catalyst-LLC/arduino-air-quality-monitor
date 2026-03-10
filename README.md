# Arduino Air Quality Monitor

An Arduino-based air quality monitoring station for particulate matter sensing, environmental data logging, and reproducible environmental monitoring prototypes.

This project is designed as a reproducible prototype for engineers, students, and researchers interested in embedded sensing, environmental monitoring, and sustainability-oriented air quality systems.

## Overview

The system measures airborne particulate matter using a low-cost sensor and reports readings through Arduino-based monitoring logic.

At a systems level, the architecture can be summarized as:

Air Sensor → Arduino → Data Processing → Serial Output / Logging

## Features

- particulate matter sensing
- Arduino-based monitoring firmware
- environmental data reporting
- calibration and deployment notes
- extensible for logging, displays, or telemetry

## Repository Structure

- `firmware/` — Arduino monitoring firmware
- `docs/` — setup, calibration, and deployment documentation
- `data/` — example particulate readings
- `hardware/` — wiring diagrams and schematics
- `BOM.csv` — bill of materials

## Notes

This is a prototype reference design, not a regulatory air-quality instrument. Engineers adapting it for longer-term deployment should validate sensor warm-up time, enclosure design, airflow conditions, and response consistency.

## License

This project is released under the MIT License.

See `LICENSE` for details.
