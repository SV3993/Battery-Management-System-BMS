# Battery Management System (BMS) with ADC0804 and 8051 Microcontroller

This project features a Battery Management System (BMS) using the ADC0804 Analog-to-Digital Converter and the AT89S52 (8051) microcontroller. It monitors battery parameters, calculates State of Charge (SOC), State of Health (SOH), and Safe Operating Envelope (SOE), and displays them on an LCD.

![image](https://github.com/user-attachments/assets/7104db1a-6291-4848-9509-e7919c6d7f16)


## Features

- Continuous ADC reading using ADC0804
- Real-time SOC, SOH, and SOE display on a 16x2 LCD
- Embedded C programming for 8051 microcontroller using Keil uVision

## Project Structure

```
.
├── src
│   ├── main.c         # Main program file
│   ├── lcd.c          # LCD driver implementation
│   ├── adc.c          # ADC driver implementation
│   ├── soc.c          # SOC, SOH, SOE calculation implementation
│   └── include
│       ├── lcd.h      # LCD driver header
│       ├── adc.h      # ADC driver header
│       └── soc.h      # SOC, SOH, SOE calculation header
├── README.md          # Project description and setup instructions
└── LICENSE            # Project license
```

## Requirements

- **Keil uVision**: For compiling and debugging the code.
- **Proteus**: For circuit simulation.
- **AT89S52**: 8051 Microcontroller.
- **ADC0804**: Analog-to-Digital Converter.
- **16x2 LCD**: Display module.

## Setup Instructions

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/yourusername/BMS-8051.git
   cd BMS-8051
   ```

2. **Open the Project in Keil uVision:**
   - Open `main.c` in Keil uVision.
   - Ensure all necessary files are included in the project.

3. **Simulate the Circuit in Proteus:**
   - Open Proteus and create a new project.
   - Add components: AT89S52, ADC0804, 16x2 LCD, and necessary connections.
   - Load the compiled HEX file from Keil into the 8051 microcontroller in Proteus.
   - Run the simulation to see the real-time SOC, SOH, and SOE display on the LCD.

## Usage

1. **Initialize the System:**
   - Call `LCD_Init()` to initialize the LCD.
   - Call `ADC_Init()` to initialize the ADC.

2. **Main Loop:**
   - Continuously read the ADC value using `ADC_Read()`.
   - Calculate the SOC, SOH, and SOE using `Calculate_SOC(adc_value)`, `Calculate_SOH(adc_value)`, and `Calculate_SOE(adc_value)`.
   - Display the values on the LCD using `LCD_DisplaySOC(soc_value)`, `LCD_DisplaySOH(soh_value)`, and `LCD_DisplaySOE(soe_value)`.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request or open an Issue to improve the project.

## Contact

For any questions or suggestions, please contact ts14102002@gmail.com
```
