#include "menu.h"
#include <iostream> 
using namespace std;
Menu::Menu()
{
  puntos = 0;
}
 
void Menu::mostrarMenu(){

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


void Menu::visualizar(){
  
    switch (opcion)
    {
    case 1:
      opcionAuxiliar();
      break;
    
    case 2:
      break;
    
    case 3:
      break;
    
    case 4:
      break;
    

    default:
      break;
    }
  
}


void Menu::opcionAuxiliar(){
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

//comentario
  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        