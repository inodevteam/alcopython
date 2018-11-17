#include "ets_sys.h"
#include "osapi.h"
#include "gpio.h"
#include "os_type.h"

#include "uart.h"

void
user_init () {
   gpio_init();
   uart_init(74880, 74880);
   uart0_sendStr("Hello world!");
}
