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


int search(Node *head,int n){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==n){
            return count;
        }
        temp=temp->next;
        count++;
        

    }
    return -1;
}

int main(){

    Node *head= takeInput();
    int n; // n is element to search for
    cin>>n;
    cout<<search(head,n);
   

}
