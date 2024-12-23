#include <bt06_elec4u_co_il.h>

/* Program to configure the HC-06 Bluetooth module with a new:
   NAME  (Up to 20 characters)
   PIN   (4-digit numeric code)
   BPS   (Baud rate)

   Library created by: Shoham Cohen and Isaac Cohen
   Source: http://www.elec4u.co.il

   CONNECTIONS:
   ARDUINO   BLUETOOTH
   5V        VCC
   GND       GND
   PIN 2     TX
   PIN 3     RX
*/

BT06_ELEC4U_CO_IL bt06(2, 3);

void setup()
{
  bt06.begin();

  // New name (up to 20 characters)
  // Baud rate: 1=1200, 2=2400, 3=4800, 4=9600, 5=19200, 6=38400, 7=57600, 8=115200
  // New PIN code (4-digit numeric)
  
  bt06.newName("elec4u.co.il", '4', "1234");
}

void loop()
{
}
