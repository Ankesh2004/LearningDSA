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
Node *merge(Node *head1, Node *head2)
{ // merging via creating a third linked list
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *temp1 = head1, *temp2 = head2;
    Node *mergedList = NULL, *tail = NULL;
    if (temp1->data <= temp2->data)
    {
        mergedList = temp1;
        tail = temp1;
        temp1 = temp1->next;
    }
    else
    {
        mergedList = temp2;
        tail = temp2;
        temp2 = temp2->next;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data <= temp2->data)
        {
            tail->next = temp1;
            tail = temp1;
            temp1 = temp1->next;
        }
        else
        {
            tail->next = temp2;
            tail = temp2;
            temp2 = temp2->next;
        }
    }
    if (temp1 != NULL)
    {
        tail->next = temp1;
    }
    else
    {
        tail->next = temp2;
    }
    return mergedList;
}

Node *mergeList(Node *head1, Node *head2)
{ // merging without a 3rd LL
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data < head2->data)
    {
        head1->next = mergeList(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = mergeList(head1, head2->next);
        return head2;
    }
}




int main(){

  Node *head1= takeInput();
    Node *head2= takeInput();
    Node* mergedList=merge(head1,head2);

    print(mergedList);


}
