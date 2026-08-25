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
// int multiply(int a, int b)
// {
//     return a * b;
// }
// double multiply(double a, double b)
// {
//     return a * b ;
// }
// int main()
// {
//     cout << multiply(10, 20) << endl;
//     cout << multiply(10.3,5.6) << endl;
// }

// 3. Overloading with Both count and Types

int multiply(int a, double b)
{
    return a * (double)b;
}
double multiply(double a, int b,int c)
{
    return a * b* (double)c;
}
double multiply(int a, double b, double c)
{
    return a * (double)b * (double)c;
}
int main()
{
    cout << multiply(10, 2.5) << endl;
    cout << multiply(5.5, 6,12) << endl;
    cout << multiply(5, 7.7,8.9) << endl;
}
