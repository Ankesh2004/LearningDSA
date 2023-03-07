#include<iostream>
using namespace std;
//--------------------------------
//template with single data type 
//--------------------------------
template <typename T> 
class Pair1{
    T x;
    T y;

    public:

    void setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }

    void setY(T y){
        this->y=y;
    }
    T getY(){
        return y;
    }

};

//--------------------------------
//template with double data type 
//--------------------------------

template <typename T,typename V>
class Pair2{
     T x;
    V y;

    public:

    void setX(T x){
        this->x=x;
    }
    T getX(){
        return x;
    }

    void setY(V y){
        this->y=y;
    }
    V getY(){
        return y;
    }

};

int main() {
    Pair1<int> p1;
    p1.setX(10);p1.setY(20);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;

    Pair2<Pair2<int,int>,int>p2; //Creating a triplet using a doublet template
    p2.setY(100);
    Pair2<int,int>p3;
    p3.setX(80);
    p3.setY(90);
    p2.setX(p3);

    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;


    return 0;
}
