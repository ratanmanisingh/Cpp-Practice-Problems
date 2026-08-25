#include <iostream>
using namespace std;

// Type 1. Function without arguments and without return type

void sum();
int main(){
    sum();
}
void sum(){
    int a,b;
    cin >> a >> b;
    cout<< "Sum:" << a+b; 
}

// Type 2. Function witn arguments and without return type

// void sum(int a,int b);
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     sum(a,b);
// }
// void sum(int a, int b)
// {
//     cout << "Sum:" << a + b;
// }

// Type 3. Function without arguments and with return type

// int sum();
// int main()
// {
//     sum();
// }
// int sum()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << "Sum:" << a + b;
// }

// Type 4. Function with arguments and with return type

int sum(int a, int b);
int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
}
int sum(int a, int b)
{
    cout << "Sum:" << a + b;
}