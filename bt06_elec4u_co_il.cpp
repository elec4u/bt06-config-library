#include "bt06_elec4u_co_il.h"

BT06_ELEC4U_CO_IL::BT06_ELEC4U_CO_IL(int rxPin, int txPin) : blue(rxPin, txPin) {}

void BT06_ELEC4U_CO_IL::begin() {
  blue.begin(9600);
}

void BT06_ELEC4U_CO_IL::newName(const char* name, char bps, const char* pin) {
  blue.print("AT");
  delay(1000);

  blue.print("AT+NAME");
  blue.print(name);
  delay(1000);

  blue.print("AT+BAUD");
  blue.print(bps);
  delay(1000);

  blue.print("AT+PIN");
  blue.print(pin);
  delay(1000);
}
