#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void print(Node *head){
    Node *temp = head;
    

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node *takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
    Node *newNode= new Node(data);
    if(head==NULL){
        head =newNode;
        tail =newNode;
    }
    else{
        Node *temp=head;
        // while(temp->next!=NULL){
        //     temp=temp->next;
        // }
        tail->next=newNode;
        tail=newNode;
    }
    cin>>data;

    }
    return head;

}

    

void delete_Consecutive_Duplicate(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        Node *a=temp->next;
        if(a != NULL && temp->data==a->data){
            
            temp->next=a->next;
            delete a;
            
        }
        else{
            temp=temp->next;
        }

    }

}

int main(){

    Node *head= takeInput();
    delete_Consecutive_Duplicate(head);
    print(head);



}
