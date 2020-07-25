/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: juan.manuel.hoyos@correounivalle.edu.co
  emanuel.benjumea@correounivalle.edu.co
  cifuentes.sebastian@correounivalle.edu.co
  Lui.alegria@correounivalle.edu.co
  vargas.steven@correounivalle.edu.co
*/
/*
   Clase: CDT
   Responsabilidad:
    dar el interes Mensual y valor invertido
   Colaboracion: ninguna
*/
#ifndef __CLASSCDT
#define __CLASSCDT
class CDT
{
private:
    int valorinvertido;
    double interesMensual;
public:
    CDT();
    ~CDT();
    int darValorIn();
    double darInteresMensual();
};

#endif // __CLASCDT