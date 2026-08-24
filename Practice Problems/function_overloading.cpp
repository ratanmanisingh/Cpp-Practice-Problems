#include <iostream>
using namespace std;

// 1. Overloading by changing the count of parameters;
// int multiply(int a, int b){
//     return a*b;
// }
// int multiply(int a, int b,int c)
// {
//     return a * b *c;
// }
// int main(){
//     cout << multiply(10,20)<<endl;
//     cout << multiply(10,20,3)<<endl;
// }

// 2. Overloading by changing parameter Types
int multiply(int a, int b)
{
    return a * b;
}
double multiply(double a, double b)
{
    return a * b ;
}
int main()
{
    cout << multiply(10, 20) << endl;
    cout << multiply(10.3,5.6) << endl;
}