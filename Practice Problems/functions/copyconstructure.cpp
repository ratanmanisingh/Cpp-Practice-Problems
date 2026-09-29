#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    void display() {
        cout<<roll<<"\t"<<name<<endl;
    }

};
int main() {


Student s;
s.roll=10;
s.name = "ratan";
s.display();
Student s1=s;
s1.display();
}
