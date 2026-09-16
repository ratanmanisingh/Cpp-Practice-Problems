#include <iostream>
using namespace std;

class array{
    int s;
    public:
    void getdata(){
        cout<<"Enter value of s= ";
        cin>>s;
    }
    void display(){
        cout<<"s value = "<<s;
        cout<<"\nAddress of s = "<<&s;
    }
};
int main(){
    array a;
    array *p=&a;

    (*p).getdata();        //By using dot(.) function.
    (*p).display();
    // p->getdata();       //By using arrow function.
    // p->display();
}