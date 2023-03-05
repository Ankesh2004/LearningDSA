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

void insert(Node* head,int i,int data){
    int count=0;
    Node *temp=head;
    Node *newNode= new Node(data);
    while(count<i-1){
        count++;
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
    /* Alternative to this  ------>
    Node *a=temp->next;
    temp->next=newNode;
    newNode->next= a;
    */
    
}
void deleteNode (Node* head,int i){
    int count=0;
    Node *temp=head;
  
    while(count<i-1){
        count++;
        temp=temp->next;
    }
    Node *a=temp->next;
    temp->next=a->next;
    delete a;
}

int main(){

    Node *head= takeInput();
    print(head);
    insert(head,2,99); //inserting node with data=99, at 2nd position
    print(head);
    
    print(head);
    deleteNode(head,2); //Deleting node at 2nd position
    print(head);
    

}
