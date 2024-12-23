#ifndef BT06_ELEC4U_CO_IL_H
#define BT06_ELEC4U_CO_IL_H

#include <Arduino.h>
#include <SoftwareSerial.h>

class BT06_ELEC4U_CO_IL {
  public:
    BT06_ELEC4U_CO_IL(int rxPin, int txPin);
    void begin();
    void newName(const char* name, char bps, const char* pin);
  private:
    SoftwareSerial blue;
};

#endif
