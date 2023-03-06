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

bool isPalindrome(Node* head) {
    // Find the length of the linked list
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    // Reverse the first half of the linked list
    temp = head;
    Node* prev = nullptr;
    for (int i = 0; i < length / 2; i++) {
        Node* next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    // If the length of the linked list is odd, skip the middle element
    if (length % 2 == 1) {
        temp = temp->next;
    }

    // Compare the first half of the linked list (in reverse) with the second half
    while (temp != nullptr) {
        if (temp->data != prev->data) {
            return false;
        }
        temp = temp->next;
        prev = prev->next;
    }
    return true;
}


int main(){

    Node *head= takeInput();
    isPalindrome(head)?cout<<"YES": cout<<"NO";


}
