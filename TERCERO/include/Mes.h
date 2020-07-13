#ifndef __MES
#define __MES
class Mes
{
private:
    int mes;
public:
    Mes(int);
    void darMes();
    int calcularDiferenciaMeses(Mes);
    void avanzarMes();
    ~Mes();
};

Mes::Mes(int)
{
}

Mes::~Mes()
{
}

#endif // __CLASMES