#include<iostream>
using namespace std;

class a{
    public:
    void show(){
        cout<<"Class A"<<endl;
    }
};

class B: public a{
    public:
    void show(){
        cout<<"Class B"<<endl;
    }
};

class C: public B{
    public:
    void show(){
        cout<<"Class C"<<endl;
    }
};

int main(){
    C obj;
    obj.show();
    obj.show();
    obj.show();

    return 0;
}