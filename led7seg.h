#ifndef __KG68IOT_LED7SEG_H_
#define __KG68IOT_LED7SEG_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define KG68IOT_DIGIT_E0	(0xcc)
#define KG68IOT_DIGIT_E1	(0xcb)
#define KG68IOT_DIGIT_E2	(0xcb)

#define KG68IOT_ICON_WIFI_FAST_BLINK	(0x01)
#define KG68IOT_ICON_WIFI_SOLID			(0x02)
#define KG68IOT_ICON_WIFI_BLINK			(0x03)

int kg68iot_led7_pdu(uint8_t *buf, int length, uint8_t digit, uint8_t icon);

#ifdef __cplusplus
}
#endif

#endif /* __KG68IOT_LED7SEG_H_ */
