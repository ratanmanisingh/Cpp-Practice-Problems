#include <iostream>
using namespace std;

int main(){
    int a=5;
    char b='A';
    int *pa=&a;
    char *pb=&b;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<pa<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<pb;
}