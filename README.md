# F35 RC Build

## Overview
This project is a scale remote-controlled (RC) jet modeled after the F‑35 Lightning II, powered by two 90 mm electric ducted fan (EDF) units. It combines high-performance aerodynamics with modern electronics to deliver a realistic flying experience and agile maneuverability.

## Features
- **Twin 90 mm EDF propulsion** for jet-like thrust and acceleration
- **3BSM CAD files** for 3D‑printing custom airframe components (fuselage, wings, ducts, landing gear)
- **Arduino-based control** for lighting, telemetry, and auxiliary functions
- **Modular design**: prints snap together and accept standard servos and control rods
- **Full RC control**: ailerons, elevator, rudder, throttle, with optional flaps

## Technical Specifications
| Parameter            | Specification                                    |
|----------------------|--------------------------------------------------|
| **Wingspan**         | ~1200 mm                                         |
| **Length**           | ~1100 mm                                         |
| **Empty Weight**     | ~1.8 kg (airframe only)                          |
| **Propulsion**       | 2× 90 mm EDF units, 12‑blade impellers           |
| **Motors**           | 2× BLDC outrunners (10 kV)                       |
| **Battery**          | 12S LiPo (2× 6S in series), 5000 mAh             |
| **Electronics**      | Arduino Nano (lighting, telemetry), RC receiver, servos (9 g/12 g) |
| **Control Surfaces** | Ailerons, Elevator, Rudder (Flaps optional)      |
| **Max Thrust**       | ~2× 1.5 kgf                                      |
| **Flight Time**      | 6–8 minutes (varies with throttle profile)       |

## Bill of Materials (BOM)
- 2× 90 mm EDF units with 12‑blade impellers
- 2× 10 kV BLDC outrunner motors
- 2× 6S LiPo batteries (5000 mAh each)
- 8× micro servos (9 g or 12 g)
- Arduino Nano (or equivalent microcontroller)
- RC transmitter and receiver (6+ channels)
- 3D printer (build volume ≥ 300×300 mm)
- Standard hardware (screws, rods, connectors)
- MPU 6050 Gyro
- Motor Drivers

## License
This project is released under the MIT License. See [LICENSE](LICENSE) for details.
