#include "menu.h"
#include <iostream>
#include <math.h>
#include "Triangulo.h"
#include "Punto.h"  
using namespace std;
Menu::Menu()
{
  puntos = 0;
  Triangulo Triangulito(Punto dPunto1, Punto dPunto2, Punto dPunto3);
  //e1 = Triangulito;
}

Menu::~Menu(){
  //Destructor
}
void Menu::mostrarMenu(){

  cout << endl;
  cout << "                         TRIANGULO                   " << endl;
  cout << "1 - Crear Triangulo " << endl;
  cout << "2 - Salir" << endl;
  do
  {
    cout << "Introduza Opcion: ";
    cin >> opcion;
  } while (!((opcion >= 1) && (opcion <= 2)));
}


void Menu::visualizar(){
  do
  {
    switch (opcion)
    {
      case 1:
      cout<<"Introducir Puntos de la primera coordenada"<<endl;
      cin>>puntos;
      break;

      case 2:
      cout<<"Introducir Puntos de la Segunda coordenada"<<endl;
      cin>>puntos;
      break;

      case 3:
      cout<<"Introducir Puntos de la tercera coordenada"<<endl;
      cin>>puntos;
      break;
      
      case 4:
      break;
    }
  }
  while(opcion!=2);
}
  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        