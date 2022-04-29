// Proyecto2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>
#include "Node.h"



/*
template <typename T1>
const T1&  getMax(const T1& param1, const T1& param2)
{
    if(param1 > param2)
        return param1;
    return param2;
}

int  getMaxEnteros(int  param1, int param2)
{
    if(param1 > param2)
        return param1;
    return param2;

}
*/




int main() {

    int option = 0;
    int opc = 0;
    int valor;
    float value;
    std::string write;
    bool x;

   
    std::cout << "Binvenido a una Lista" << std::endl;
    std::cout << "Hector Mauricio Rodriguez Salazar 21310416" << std::endl;
    std::cout << "Este es un programa que se inserta y se elimina" << std::endl;
    /*
    std::cout << "Ingrese el valor para la estructura de datos" << std::endl;
    std::cin >> value;*/


    while (option != 2)
    {
        std::cout << "Usted debera escoger una de las opciones" << std::endl;
        std::cout << "1.Agregar algun elemento al nodo" << std::endl;
        std::cout << "2.Salir" << std::endl;
        std::cin >> option;

        switch (option)
        {
            case 1:

                std::cout << "\t\t\nDe que tipo desea realizarlo?" << std::endl;
                std::cout << "\t\t\n1.De tipo entero" << std::endl;
                std::cout << "\t\t\n2.De tipo float" << std::endl;
                std::cout << "\t\t\n3.De tipo string" << std::endl;
                std::cout << "\t\t\n4.De tipo Booleano" << std::endl;
                std::cin >> opc;
            

            switch (opc)
            {
                case 1:
                    if (opc == 1) 
                    {
                        std::cout << "\t\t\n tipo entero" << std::endl;
                        std::cin >> valor;
                        Node<int> a(valor);
                        a.addValue(valor);
                        std::cout << "\n" << std::endl;
                        std::cout << " Valor " << valor << " Agregado\n\n" << std::endl;
                        break;
                    }

                case 2:
                    if (opc == 2)
                    {
                        std::cout << "\t\t\n tipo flotante" << std::endl;
                        std::cin >> value;
                        Node<float> b(value);
                        b.addValue(value);
                        std::cout << "\n" << std::endl;
                        std::cout << " Valor " << value << " Agregado\n\n" << std::endl;
                    }
                    break;
                case 3:
                    if (opc == 3)
                    {
                        std::cout << "\t\t\n tipo string (que no tenga espacios)" << std::endl;
                        std::cin >> write;
                        Node<std::string> c(write);
                        c.addValue(write);
                        std::cout << "\n" << std::endl;
                        std::cout << " Escrito " << write << " Agregado\n\n" << std::endl;
                    }
                    break;
                case 4:
                    if (opc == 4)
                    {
                        std::cout << "\t\t\n tipo Booleano (1 o 0)" << std::endl;
                        std::cin >> x;
                        Node<bool> d(x);
                        d.addValue(x);
                        std::cout << "\n" << std::endl;
                        std::cout << " Booleano " << x << " Agregado\n\n" << std::endl;
                    }
                    break;
            }
            

            break;

            case 2:

                std::cout << "\t\t\nVuelva pronto:)" << std::endl;
                break;

            default:std::cout << "\t\t\nEscribio un numero incorrecto al del menu\n\n" << std::endl;
        }
         
    }
    




    /*
    std::cin >> valor;
    b.addValue(valor);
    b.addValue(5);
    b.addValue(6);
    

    std::cout << b.getValue() << std::endl;
    
    
    std::cin >> write;
    Node<std::string> a(write);
    a.addValue("Que onda");
    a.addValue("Quiuvoles");

    std::cout << a.getValue() << std::endl;
    

        
    std::cout<< getMax(1,2)<<std::endl;
    double a = 3;
    double b = 3.14156;
    std::cout<< getMax(a,b)<<std::endl;
    std::cout<< getMaxEnteros(a,b)<<std::endl;

    
    vector <int> a;
    a.push_back(7);
    a.push_back(2);
    a.push_back(3);

    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << endl;
    }
    
    
    Node<int>* dummy = nullptr;
    dummy = &b;
    
    while (dummy->next() != nullptr)
    {

        cout << dummy->getValue() << endl;
        dummy = dummy->next();
    }
    
   */



    system("pause");
    return 1;
}







//punteros 
/*
 Node* p = nullptr;
 Node* source = nullptr;
 */


 /*Creacion del nodo y uso del metodo add
 source->createNode(value);
 p->add(source,value);
 */


 //Creacion del nodo y uso del metodo add
 /*
 source->createNode(value);
 p->add(source, value);
 */



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
