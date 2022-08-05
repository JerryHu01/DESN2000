#include "lpc24xx.h"
#include "delay.h"
#include "lcd/lcd_hw.h"
#include "lcd/lcd_grph.h"
#include "lcd/lcd_cfg.h"
#include "lcd/sdram.h"
#include "light_gen.h"
#include "wless_transmit.h"
#include "clock.h"
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void) {
	// Setup external SDRAM
	sdramInit();	
	
	// Setup LPC2478 LCD Controller for LCD
	lcdInit(&lcd_config); 

	// Turning LCD on
	lcdTurnOn();
	
	while (1) {
		char str[SIZE];
		int light = light_generate(light);
		char ctime[SIZE];
		clock_time(ctime);
		sprintf(str, "light reading: %d", light);
		lcd_putString(70, 160, str);
		lcd_putString(10, 230, ctime);
	}
}
