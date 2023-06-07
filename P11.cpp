// P11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    int juego = 0;
    bool resp = 0;


    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Buenas tardes. En este programa adivinara que tipo de fruta del diablo es. \nPiensa en un tipo y responde (1.Sí 0.No): \n";
    std::cout << "¿El tipo de fruta es de algun tipo de elemento?\n";
    std::cin >> resp;

    


        
    if (resp == 1)
    {

        }
        if (resp == 1)
        {
            resp = 0;
            std::cout << "¿el haki le hace counter'?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Logia'.\n";

            }
            else
            {
                std::cout << "Estás pensando en el tipo 'Paramecia'.\n";
            }

        }
        else
        {
            resp = 0;
            std::cout << "¿Se puede transformar en un animal?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Zoan'. ¡De mis favoritos! :D\n";
            }
            else
            {
                resp = 0;
                std::cout << "¿Entonces creo que te refieres a una paramecia?\n";
                std::cin >> resp;
                
                if (resp == 1)
                {
                    std::cout << "Una paramecia? excelente ve a patearles las pompis a los villanos \n";
                }





            }
        }
    
}
