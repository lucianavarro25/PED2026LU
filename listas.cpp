#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void Insert(Node*& head, int data){
    Node* new_node = new Node{data,head};
    head = new_node;
}
void InsertAtEnd(Node*& head, int data){
    Node* new_node = new Node{data,nullptr};
    //si esto ocurre es porque la lista esta vacía
    if(head = nullptr){
        head = new_node;
        return;
    }
    //pero esto pasa si acaso no esta vacia
    Node* current = head;
    while (current->next != nullptr){
    current = current->next;
    }   
}

int main(){
    return 0;
}