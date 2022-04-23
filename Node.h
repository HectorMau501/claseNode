#pragma once

template <typename T>


class Node
{
private:
    T value = 0;
    Node* son = nullptr;
public:
    Node(const T& newValue) {
        value = newValue;
    }

    void addValue(const T& newValue) {
        if (son == nullptr) {
            son = new Node<int>(newValue);
        }
        else {
            son->addValue(newValue);
        }

    }

    Node* next() {
        return this->son;
    }

    void setValue(const T& newValue) { value = newValue; }
    T& getValue() {
        return value;
    }
};