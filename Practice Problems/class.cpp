#include <iostream>
using namespace std;

class students{
    public: 
        char name[50];
        int rollno;
        double fees;
};

int main(){
    students s1,s2;
    cout<<"Enter details of Student 1: "<<endl;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter roll no: ";
    cin>>s1.rollno;
    cout<<"Enter fees: ";
    cin>>s1.fees;
    cout << "Enter details of Student 2: "<<endl;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter roll no: ";
    cin >> s2.rollno;
    cout << "Enter fees: ";
    cin >> s2.fees;
    cout<<"Name of first students: "<<s1.name<<"roll number is: "<<s1.rollno<<"Fees is: "<<s1.fees<<endl;
    cout<<"Name of first students: "<<s2.name<<"roll number is: "<<s2.rollno<<"Fees is: "<<s2.fees;
}