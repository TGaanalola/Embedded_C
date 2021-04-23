#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations 
 **/

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
/**
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
        change_led_state(LED_ON);
		delay_ms(LED_ON_TIME);
		
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);	
	}
	return 0;
}
