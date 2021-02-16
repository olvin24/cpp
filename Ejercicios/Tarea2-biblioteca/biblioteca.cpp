#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros() {
    // Arreglo con categoria, descripcion y autor. 
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[2][0] = "Gines Garcia Mateo";
    libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[2][1] = "Luis Joyanes Aguilar";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "Sebastien Putir";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[2][3] = "Yolanda Blanco Fernandez";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[2][4] = "Gines Garcia Mateo";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[2][5] = "Juan Carlos Moreno";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[2][6] = "Mark Allen Weis";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[2][7] = "Francisco Cruz Teruel";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[2][8] = "David Kolling Barnes";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[2][9] = "Elizabeth George";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos"; libros[2][10] = "Mario Macias Lloret";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes"; libros[2][11] = "Fatos Xhafa";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion"; libros[2][12] = "Robert C. Martin";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software"; libros[2][13] = "Francisco Blasco";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD"; libros[2][14] = "Francisco Grande";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion"; libros[2][15] = "Michael Gernaey";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)"; libros[2][16] = "Virginia Andersen";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras";libros[2][17] = "Miguel Angel Acera Garcia";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber"; libros[2][18] = "Olvin Romero";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker"; libros[2][19] = "Olvin Romero";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador"; libros[2][20] = "Tomas Dominguez";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker"; libros[2][21] = "Bruce Eckel";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL"; libros[2][22] = "David Stuar";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural"; libros[2][23] = "Danny Goodman";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos"; libros[2][24] = "Yolanda Blanca Fernandez";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP"; libros[2][25] = "Bruce Eckel";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial"; libros[2][26] = "Hans Berger";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva"; libros[2][27] = "Scot Hillier";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial"; libros[2][28] = "Tom Fischer";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)"; libros[2][29] = "Helen Feddeman";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python"; libros[2][30] = "John Barnes";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python"; libros[2][31] = "Arturo Montejo Raez";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3"; libros[32][2] = "Alberto Cuevas Alvarez";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python"; libros[21][33] = "Paul Dubois";
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python"; libros[2][34] = "Rod Stephens";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)"; libros[2][35] = "Thierry Boulanger";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria"; libros[2][36] = "Octavio Hernandez Leal";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes"; libros[2][37] = "Alberto Cuevas Alvarez";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos";libros[2][38] = "Arturo Montejo Raez";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro o Autor que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            string libro = libros[i][1];
            string autor = libros[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos || autorEnminuscula.find(buscar) != string::npos)  {
                cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro o autor que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}