#ifndef act1_H_INCLUDED
#define act1_H_INCLUDED

#define LED_PORT (PORTB)
#define IN_PIN1 (PORTB6)
#define IN_PIN2 (PORTB7)
#define OUT_PIN (PORTB5)
void init_port();
int detectUser();

#endif // act1_H_INCLUDED
