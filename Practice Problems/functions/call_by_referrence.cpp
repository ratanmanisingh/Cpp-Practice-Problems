#include <iostream>
using namespace std;

void update(int &x, int &y)
{
    x = x + 5;
    y = y + 15;
    cout << x << " " << y << endl;
}
int main()
{
    int a = 20, b = 15;
    cout << a << " " << b << endl;
    update(a, b);
    cout << a << " " << b;
}