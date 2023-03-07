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

}

Node *reverseLLrecur(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *smallAns=reverseLLrecur(head->next);
    Node *temp=smallAns;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;

    return smallAns;
}

int main(){

    Node *head= takeInput();
    Node *revHead =reverseLLrecur(head);
    print(revHead);


}
