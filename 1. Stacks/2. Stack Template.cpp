#include<iostream>
#include<climits>
using namespace std;
template<typename T> 
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray(int totalSize){
        data= new T[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(T element){
        if(nextIndex==capacity){
            cout<<"Stack is full";
            return ;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    T pop(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<<"Stack is empty\n";
            return 0;
        }
        return data[nextIndex-1];
    }

};

int main() {

    StackUsingArray<int> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop();

    return 0;
}
