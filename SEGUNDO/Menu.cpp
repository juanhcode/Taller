#include "Menu.h"
#include <iostream>
#include "Triangulo.h"
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

Menu::~Menu()
{
 
}
void Menu::seleccionarOpcion()
{

    cout << endl;
    cout << " TRIANGULO  " << endl;
    cout << "1 - Calcular Lados " << endl;
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
    
}

void Menu::opcionAuxiliar()
{
    double x1,x2;
    double y1,y2;
    double distancia = 0;
    switch (opcion)
    {
    case 1:
       // mostrarLado1();     
        cout << "Introducir Puntos de la primera coordenada para calcular lado AB" << endl;
        cout<<"1. Valor x2"<<endl;
        cin>>x2;
        cout<<"2. Valor x1"<<endl;
        cin>>x1;
        cout<<"3. Valor y2"<<endl;
        cin>>y2;
        cout<<"4. Valor y1"<<endl;
        cin>>y1;
        distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<"La distancia de AB es= "<<distancia<<endl;
    
        
        

    
        cout<<"Introducir Puntos de la primera coordenada para calcular lado BC" <<endl;
        cout << endl;
        {
       cout<<"1. Valor x2"<<endl;
        cin>>x2;
        cout<<"2. Valor x1"<<endl;
        cin>>x1;
        cout<<"3. Valor y2"<<endl;
        cin>>y2;
        cout<<"4. Valor y1"<<endl;
        cin>>y1;
        distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<"La distancia de BC es= "<<distancia<<endl;
        
        

    
        cout<<"Introducir Puntos de la primera coordenada para calcular lado CA" <<endl;
        cout << endl;
        cout<<"1. Valor x2"<<endl;
        cin>>x2;
        cout<<"2. Valor x1"<<endl;
        cin>>x1;
        cout<<"3. Valor y2"<<endl;
        cin>>y2;
        cout<<"4. Valor y1"<<endl;
        cin>>y1;
        distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        cout<<"La distancia de CA es= "<<distancia<<endl;
        
      
        break;
     
       }

    }    

}



