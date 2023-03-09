#include<iostream>
using namespace std;

template<typename T>
class Node{
public:
    T data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
template<typename T>
class QueueLL{
    Node<T>*head;
    Node<T>*tail;
    int size;

    public:
    QueueLL(){
        head=NULL;
        tail=NULL;
        size=0;

    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return (getSize()==0);
    }
    void enqueue(T element){
        Node<T>* newNode= new Node<T>(element);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        size++;

    }
    T front(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
    T dequeue(){
        if(isEmpty()){
            return 0;
        }
        T ans=head->data;
        Node<T>* temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    

};

int main() {

    QueueLL<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.dequeue()<<endl;
    cout<<q.getSize();
    return 0;
}
