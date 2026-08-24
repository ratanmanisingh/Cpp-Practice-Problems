#include <iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}
int multiply(int a, int b,int c)
{
    return a * b *c;
}
int main(){
    cout << multiply(10,20)<<endl;
    cout << multiply(10,20,3)<<endl;
}