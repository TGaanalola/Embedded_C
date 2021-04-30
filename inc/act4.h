#ifndef act4_H_INCLUDED
#define act4_H_INCLUDED
/** \brief initialize USART
 *
 * \param ubrr_value
 *
 */

void USARTInit(uint16_t ubrr_value);

void USARTWrite(char temp_value);

char temp_disp();
#endif // act4_H_INCLUDED
