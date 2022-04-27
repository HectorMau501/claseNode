#pragma once
#include <iostream>

//template <typename T>

/*
-------------- Profe quise hacerlo con templates, pero no pude porque me marcaba error en algunos puntos
lo hice de esta manera, deje una forma con comentarios como lo quise hacer con los templates
pero como le digo me salian algunos errores-----------------------------


   --- Lo hice de otra forma ---
*/


class Node
{

private:
    /*
    T value = 0;
    Node* son = nullptr;
    */

    int note = 0;
    Node* right = nullptr;
    Node* left = nullptr;
    
    //typedef Node* ptrPila;

    /*
    
    size_t tam;
    size_t cont;

    const static size_t MAX = 5;

    void expandir();

    */

public:


    /*

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


    Node(){}//Constructor
    ~Node(){}//Destructor

    //Se crea el nuevo nodo
    Node *createNode(int p)
    {
        Node* newNode = new Node();
        newNode->note = p;
        return newNode;
    }


    //Se crea la funcio add para integrar el valor a la estructura de datos y despues darle un valor al nodo
    void add(Node*&source, int value)
    {
        //Aqui se obtiene el valor de la estructura para despues realizarla
        if (source == NULL)
        {
            Node* newNode = createNode(value);
            source = newNode;
            std::cout << "\t\t\nSe realiza la estructura de datos " <<  value << std:: endl;
        }
        else
        {
           
            int newSource = source->note;
            //Aqui se ve que se añade el valor por la izquierda o derecha
            if(value < newSource)
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






    

    /*
    void InsertarFinal(const T& newValue);
    void InsertarInicio(const T& newValue);
    
    size_t size();
    
    int operator[](size_t p)
    {
        return son[p];
    }
    */


    /*
    //Insertar elemento en la pila
    void Insertar(const T& newValue)
    {
        ptrPila aux;
        aux = new (class Node); //Apuntando al  nuevo nodo
        aux->value = newValue;
        aux->son = T;
        T = aux;
    }

    //Borrar elemento en la pila

    Node* Borrar(ptrPila T&)
    {
        T value = 0;
        ptrPila aux;

        aux = T;
        son = aux->value;

        T = aux->son;
        delete(aux);

        return value;
    }

    void Listar_pila(ptrPila T)
    {
        ptrPila aux;
        aux = T;

        while(aux != NULL)
        {
            std::cout << "\t" << aux->value << endl;
            aux = aux->son;
        }

    }

    Node(const T& newValue)
    {
        value = newValue;
    }

    void addValue(const T& newValue)
    {
        if (son == nullptr)
        {
            son = new Node<int>(newValue);
        }
        else 
        {
            son->addValue(newValue);
        }

    }

    Node* next() 
    {
        return this->son;
    }

    void setValue(const T& newValue) { value = newValue; }
    T& getValue() 
    {
        return value;
    }
   */

};




