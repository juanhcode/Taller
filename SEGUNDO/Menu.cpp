#include "Menu.h"
#include <iostream>
using namespace std;
Menu::Menu()
{
    puntos = 0;
    opcion = 0;
    Punto p();
    area = 0, perimetro = 0, altura = 0;
    Triangulo triangulito(p1, p2, p3);
    triangulito = e1;
}

Menu::~Menu(){


}
void Menu::seleccionarOpcion()
{

    cout << endl;
    cout << " TRIANGULO  " << endl;
    cout << "1 - Crear Triangulo " << endl;
    cout << "2 - Calcular Perimetro" << endl;
    cout << "3 - Calcular Area" << endl;
    cout << "4 - Calcular Altura" << endl;
    cout << "5 - salir" << endl;
    do
    {
        cout << "Introduza Opcion: ";
        cin >> opcion;
        visualizar();
    } while (!((opcion >= 1) && (opcion <= 5)));
}

void Menu::visualizar()
{

    switch (opcion)
    {
    case 1:
        opcionAuxiliar();
        break;

    case 2:
        perimetro = e1.calcularPerimetro();
        break;

    case 3:
        area = e1.calcularArea();
        break;

    case 4:
        altura = e1.calcularAltura();
        break;

    case 5:
        break;
    }
    system("cls");
}

void Menu::opcionAuxiliar()
{
    int x1,x2;
    int y1,y2;
    switch (opcion)
    {
    case 1:
        mostrarLado1();
        cout << "Introducir Puntos de la primera coordenada" << endl;
        cout<<"1. Valor x2"<<endl;
        cout<<"2. Valor x1"<<endl;
        cout<<"3. Valor y2"<<endl;
        cout<<"4. Valor y1"<<endl;
        cout<<"5. Calcular Lado 1"<<endl;
        cout<<"Introduzca una opcion"<<endl;
        cin>>opcion;
        cout << endl;
        switch (opcion)
        {
        case 1:
            cout<<"Digite el valor de x2"<<endl;
            cin>>x2;
        case 2:
            cout<<"Digite el valor de x1"<<endl;
            cin>>x1;
        case 3:
            cout<<"Digite el valor de y2"<<endl;
            cin>>y2;
        case 4:
            cout<<"Digite el valor de y1"<<endl;
            cin>>y1;
        case 5:
            e1.calcularLado1();
        default:
            cout<<"Opcion invalida"<<endl;
        }
        break;

    case 2:
        cout << "Introducir Puntos de la Segunda coordenada" << endl;
        cout << endl;
        cout << "Digite el valor"<<endl;
        cin >> puntos;

        break;

    case 3:
        cout << "Introducir Puntos de la tercera coordenada" << endl;
        cin >> puntos;
        break;

    case 4:
        break;
    }
}

void Menu::mostrarLado1(){

    cout<<"Lado 1"<< e1.mostrarLado1() <<endl;
    
}