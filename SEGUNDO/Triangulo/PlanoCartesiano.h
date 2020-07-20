#ifndef __CLASSPlanoCartesiano
#define __CLASSPlanoCartesiano
#include "Punto.h"





class PlanoCartesiano
{

private:
   int cuadrante1;
   int cuadrante2;
   int cuadrante3;
   int cuadrante4; 
  
public:
	//PlanoCartesiano(cuadrante1,cuadrante2,cuadrante3,cuadrante4);
  int coordenadas(int x, int y);
 
};
#endif