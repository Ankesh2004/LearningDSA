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

// void print_reverseLL(Node *head,int n){ //O(n)=n^2
//     for (int i = n-1; i >=0; i--)
//     {
//        print_ith_node(head,i);
//     }
    
    
// }
void print_reverseLL(Node *head){ //O(n)=n
    if(head==NULL){
        
        return ;
    } 
     print_reverseLL(head->next);
    cout<<head->data<<" ";
   
}

int main(){

    Node *head= takeInput();
    print_reverseLL(head);



}
