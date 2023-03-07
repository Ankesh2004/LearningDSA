#include<iostream>
#include<climits>
using namespace std;

class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(int totalSize){
        data= new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
            cout<<"Stack is full\n";
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return INT_MIN;
        }
        return data[nextIndex-1];
    }

};

int main() {

    return 0;
}
