#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void displayBase()
    {
        cout << "This is the base class." << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << "This is the derived class." << endl;
    }
};

int main()
{
    Derived object;

    object.displayBase();    // Function inherited from Base
    object.displayDerived(); // Function of Derived

    return 0;
}