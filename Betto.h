#ifndef Betto_h
#define Betto_h

#include "Arduino.h"
#include <Otto.h>

//------------------------------------------------------
// Funciones para Entradas Analogicas
class Betto: public Otto{
  public:
    Betto ();
    void  init();
    void  home();
    void  walk(float steps=4, int T=1000, int dir = FORWARD);
  private:
    byte  idBetto;
};

#endif