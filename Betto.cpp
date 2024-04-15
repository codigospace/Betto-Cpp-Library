#include "Betto.h"
#include <Otto.h>

//---------------------------------------------------------------------------------------
// Funciones para Entradas Analogicas
// It is funcionally correct
Betto::Betto (){
}
void Betto::init(){
  Otto::init(2, 3, 4, 5, true, 12);
}
void Betto::home(){
  Otto::home();
}
void Betto::walk(float steps=4, int T=1000, int dir = FORWARD){
  Otto::walk(steps, T, dir);
}



