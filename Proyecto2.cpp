// Proyecto2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

 #include <iostream>
#include <vector>
#include "Node.h"

/*template <typename T1>
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

}*/


int main() {

    int option = 0;
    int value = 0;
    //punteros 
    Node* p = nullptr;
    Node* source = nullptr;
    
    
    std::cout << "Binvenido a una Lista" << std::endl;
    std::cout << "Hector Mauricio Rodriguez Salazar 21310416" << std::endl;
    std::cout << "Este es un programa que se inserta y se elimina" << std::endl;
    std::cout << "Ingrese el valor para la estructura de datos" << std::endl;
    std::cin >> value;
    //Creacion del nodo y uso del metodo add
    source->createNode(value);
    p->add(source,value);

    while (option != 2)
    {
        std::cout << "Usted debera escoger una de las opciones" << std::endl;
        std::cout << "1.Agregar algun elemento al nodo" << std::endl;
        std::cout << "2.Salir" << std::endl;
        std::cin>>option;

        switch (option)
        {
        case 1:
            std::cout << "\t\t\nIngrese el valor del node" << std::endl;
            std::cin >> value; 
            //Creacion del nodo y uso del metodo add
            source->createNode(value);
            p->add(source, value);

            break;
        case 2:
            std::cout << "\t\t\nVuelva pronto:)" << std::endl;

            default:std::cout << "\t\t\nEscribio incorrecto el numero del menu" << std::endl;
        }

    }
    


    /*std::cout<< getMax(1,2)<<std::endl;
    double a = 3;
    double b = 3.14156;
    std::cout<< getMax(a,b)<<std::endl;
    std::cout<< getMaxEnteros(a,b)<<std::endl;*/

    /*
    vector <int> a;
    a.push_back(7);
    a.push_back(2);
    a.push_back(3);

    for (auto i = a.begin(); i != a.end(); i++) 
    {
        cout << *i << endl;
    }
    

    
    Node<int> b(1);

    b.addValue(5);
    b.addValue(6);

    

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
