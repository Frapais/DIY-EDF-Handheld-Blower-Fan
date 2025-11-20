# 3D Printed EDF Handheld Blower

A powerful, cordless handheld blower designed for workshop and DIY cleaning applications. This project utilizes a 50mm Electric Ducted Fan (EDF) powered by Parkside 20V X20V Power tool batteries, with variable speed control via an ATtiny85 microcontroller.

![Blower Assembly](images/blower-assembly.jpg)

## 📁 Project Contents

- **`/firmware`** - Complete PlatformIO project for ATtiny85
- **`/3d_models`** - STL files for 3D printing (main housing prints without supports)
- **`/docs`** - Bill of Materials (BOM), wiring diagrams, and assembly guide
- **`/images`** - Project photos and reference images

## 🛠️ Key Features

- **Powerful Airflow**: 50mm EDF produces significant airflow for its size
- **Variable Speed Control**: ATtiny85 provides PWM control via trigger
- **Battery Compatibility**: Works with affordable Parkside 20V battery ecosystem
- **3D Printable**: Main housing prints in one piece without supports
- **Open Source**: Fully customizable design and firmware

## 📋 Bill of Materials

| Component | Quantity | Notes |
|-----------|----------|-------|
| 50mm EDF Unit | 1 | Brushless DC motor with fan |
| 30A BLDC ESC | 1 | Electronic Speed Controller |
| ATtiny85 | 1 | Microcontroller |
| LM7805 Voltage Regulator | 1 | 5V regulation |
| XT60 Connector | 1 | Battery connection |
| Momentary Switch | 1 | Trigger |

## 🔧 Assembly

1. **3D Print** the main housing (no supports required)
2. **Install EDF** using silicone sealant or hot glue
3. **Solder electronics** according to wiring diagram
4. **Upload firmware** using Arduino as ISP programmer
5. **Assemble** all components into the housing

## ⚡ Firmware

The ATtiny85 firmware provides:
- PWM speed control via trigger input
- Smooth startup sequence
- ESC control signal generation

### Programming Requirements:
- PlatformIO (recommended) or Arduino IDE
- Arduino Uno (as ISP programmer)
- ATtiny85 core support

## 🖨️ 3D Printing

- **Filament**: PET-G or ASA recommended
- **Layer Height**: 0.2mm
- **Infill**: 20%
- **Supports**: None required
- **Orientation**: Print as-is

## 🔗 Related Links

- [Instructables Build Guide](https://www.instructables.com/3D-Printable-EDF-Blower-Fan/)
- [Thingiverse 3D Model]([Your Thingiverse Link Here])
- [Project Website](https://sprig-labs.com/)

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

## ⚠️ Safety Note

This device uses high-current batteries and produces significant airflow. Always ensure proper wiring insulation and battery safety. The creator is not responsible for any damage or injury resulting from the use of this project.

---

*Part of the Sprig-Labs open-source hardware ecosystem.*
