#pragma once
#include <iostream>

template <typename T>


class Node
{

private:
    
    T value;
    Node* son = nullptr;
   

public:

    Node(){}//Constructor
    ~Node(){}//Destructor


    //Constructor 
    Node(const T& newValue)
    {
        value = newValue;
    }


    //Metodo insertarvalor
    void addValue(const T& newValue)
    {
        if (son == nullptr)
        {
            son = new Node<T>(newValue);
        }
        else 
        {
            son->addValue(newValue);
        }

    }
    //Puntero siguiente
    Node* next() 
    {
        return this->son;
    }

    //Metodo colocar valor
    void setValue(const T& newValue) { value = newValue;}
    T& getValue() 
    {
        return value;
    }

};













/*

//Se crea el nuevo nodo
Node* createNode(int p)
{
    Node* newNode = new Node();
    newNode->note = p;
    return newNode;
}


//Se crea la funcio add para integrar el valor a la estructura de datos y despues darle un valor al nodo
void add(Node*& source, int value)
{
    //Aqui se obtiene el valor de la estructura para despues realizarla
    if (source == NULL)
    {
        Node* newNode = createNode(value);
        source = newNode;
        std::cout << "\t\t\nSe realiza la estructura de datos " << value << std::endl;
    }
    else
    {

        int newSource = source->note;
        //Aqui se ve que se añade el valor por la izquierda o derecha
        if (value < newSource)
        {
            add(source->left, value);
            std::cout << "\t\t\nSe integra " << value << " el valor por parte de la izquierda " << std::endl;
        }
        else
        {
            add(source->right, value);
            std::cout << "\t\t\nSe integra " << value << " el valor por parte de la derecha " << std::endl;
        }

    }
}



    */


/*

  int note = 0;


//Constructor
template <typename T>
Node<T>::Node()
{
    son = new int[MAX];
    cont = 0;
    tam = MAX;

}

//Destructor
template <typename T>
Node<T>::~Node()
{
    delete[] arreglo;

}

*/


/*
 Node* right = nullptr;
 Node* left = nullptr;
 */

 //typedef Node* ptrPila;

 /*

 size_t tam;
 size_t cont;

 const static size_t MAX = 5;

 void expandir();

 */


/*

    template <typename T>
    void Node<T>::InsertarFinal(const T& newValue)
    {
        if (cont == tam)
        {
            expandir();
        }
        son[cont] = newValue;
        cont++;
    }


    template <typename T>
    void Node<T>::InsertarInicio(const T& newValue)
    {
        if (cont == tam)
        {
            expandir();
        }
        for (size_t i = cont; i > 0; i--)
        {
            son[i] = son[i - 1];
        }
        son[0] = newValue;
        cont++;
    }

    template <typename T>
    size_t Node<T>::size()
    {
        if (cont == tam)
        {
            expandir();
        }
        for (size_t i = cont; i > 0; i--)
        {
            son[i] = son[i - 1];
        }
        son[0] = newValue;
        cont++;
    }

    */





