/*
 * sct.h
 *
 * SCT LIBRARY HEADER FILE
 * ALEXANDER BEKEC - xbekec00 - 221096
 *
 *  Created on: Oct 12, 2023
 *      Author: xbekec00
 */

#ifndef INC_SCT_H_
#define INC_SCT_H_

// FUNCTION PROTOTYPES
void sct_init(void);
void sct_led(uint32_t value);
void sct_value(uint16_t value, uint8_t leds, uint8_t point);

#endif /* INC_SCT_H_ */
