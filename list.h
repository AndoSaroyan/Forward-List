#ifndef LIST_H
#define LIST_H

template <typename T>
class List
{
public:
    List ();
    ~List();
public:    
    int GetSize(){return size;}
    void clear();
    void push_back (T data);
    void pop_front();
    void push_front(T data);
    void insert (T value,int index);
    void removeAt (int index);
    void pop_back ();
    void print_elements();
    //T& operator[](const int index); // impelemntation is in list.hpp (not recommended)
private:
    template<typename A>
    class Node
    {
    public:    
        Node* next;
        A data; 

        Node(A data= A(),Node* next = nullptr)
        {
            this->data= data;
            this->next=next;
        }
    };
    int size;
    Node<T> *head;
};

#include "list.hpp"
#endif 