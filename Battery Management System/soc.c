
#include "soc.h"

unsigned int Calculate_SOC(unsigned int ADC_Value) {
    // Implement your SOC calculation logic here
    // For simplicity, assuming a linear mapping for demonstration
    // Adjust according to your specific requirements
		unsigned int adc_value=ADC_Value;
		//unsigned int max_vol=5;
    unsigned int soc = ((adc_value * 100) / 255); // Assuming 8-bit ADC
		//soc=(soc/max_vol)*100;
    return soc;
}
