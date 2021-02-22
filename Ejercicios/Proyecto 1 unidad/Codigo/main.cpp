#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

void menu()
{
    bool salir = false;

    while(salir == false)
    {
        int opcion = 0;

        cout <<"*******************"<< endl;
        cout <<"  Menu de Juegos   "<< endl;
        cout <<"*******************"<< endl;
        cout << endl;
        cout <<"Seleccione un juego."<< endl;

        cout << endl;
        cout << endl;

         cout <<" 1 - StarShip."<< endl;
         cout <<" 2 - Snake."<< endl;


         cout << endl;
         cout << endl;


         cout <<"Ingrese un numero del menu para seleccionar un juego: ";
         cin >> opcion;

         switch (opcion)
         {
         case 1: 
             system("cls");   
             starShip();
             system("pause");
             break;
         case 2: 
             system("cls");               
             snake();
             system("pause");
             break;
         
         default:
            if (opcion < 1 || opcion > 2 )
            {
                cout << endl <<"Este numero no es valido . . ."<<endl;
                system("pause");
                system("cls");
            }
            
            
            system("cls");
            break;

         system("cls");
         }
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    menu();

    
    

    return 0;
}
