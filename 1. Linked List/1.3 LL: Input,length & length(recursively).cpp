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
int findLength(Node *head){ //finding length of LL
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
int lengthRecur(Node *head){  //Finding length recursively

    static int count=0;
    if(head==NULL){
        return count;
    }
    count++;

    return lengthRecur(head->next);

    

}
Node *takeInput(){  //Taking input till -1 is entered
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
    Node *newNode= new Node(data);
    if(head==NULL){
        head =newNode; //For storing address of 1st node in head 
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

int main(){

    Node *head= takeInput();
    print(head);

}
