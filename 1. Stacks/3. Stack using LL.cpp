#include<iostream>
using namespace std;

template <typename T>
class Node{
    public:
    Node *next;
    T data;

    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class Stack{
    Node<T> *head;
    int size;

    public:

    Stack(){
        head=NULL;
        size=0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return head==NULL;
    }
    void push(int data){
        if(head==NULL){
            Node<T>*newNode= new Node<T>(data);  
            head=newNode;
        }
        else{
            Node<T> *newNode= new Node<T>(data);  
            newNode->next=head;
            head=newNode;
        }
        size++;
    }
    T pop(){
        if(head==NULL){
            cout<<"Stack is empty\n";
            return 0;
        }
        else{
            T a=head->data;
            head=head->next;
            return a;
        }
        size--;
    }

    T top(){
        if(head==NULL){
            cout<<"Stack is empty\n";
            return 0;
        }
        else{
            return head->data;
        }
    }

};


int main() {

    Stack <int>s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop();

    return 0;
}
