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
        tail->next=newNode;
        tail=newNode;
    }
    cin>>data;

    }
    return head;

}
int middle_element(Node *head){
    Node *temp=head;
    Node* slow=temp;
    Node *fast=temp->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow->data;
}



int main(){

    Node *head= takeInput();
  cout<< middle_element(head);


}
