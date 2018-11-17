#include "ets_sys.h"
#include "osapi.h"
#include "gpio.h"
#include "os_type.h"
#include "uart.h"

//volatile bool _exit_reason = 0;


void
user_init () {
   gpio_init();
   uart_init(74880, 74880);
   uart0_sendStr("Hello world!");
  // setup();
  // while(true) {
   //   if(_exit_reason) break;
   //   loop(); 
   //   os_delay_us(10);
  // }
}
