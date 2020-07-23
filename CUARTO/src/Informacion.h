
/*
Nombre de archivo: Informacion
Version: 0.1
Fecha de creacion: 18/7/2020
Fecha de ultima modificacion: 18/7/2020
Autor: emanuel benjumea - 201958950-2711
E-mail:
*/
#ifndef __CLASSINFORMACION
#define __CLASSINFORMACION
class Informacion
{
private:
    int fechaConsolidado;
public:
    Informacion();
    ~Informacion();
    int llamadasRealizadas(int registarLlamadas);
    int costoLlamadas(int costoTresLineas);

};

#endif //CLASINFORMACION