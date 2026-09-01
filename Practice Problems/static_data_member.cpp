#include <iostream>
using namespace std;

class student{
    public: 
            char name[50];
            int rollno;
            double fees;
            static char uniname[50];
        }s2;
char student::uniname[50]="LPU";
int main(){
    student s1;
    cout<<"Enter details of first student: "<<endl;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter roll no: ";
    cin>>s1.rollno;
    cout<<"Enter fees: ";
    cin>>s1.fees;
    cout<<"Enter details for second student: "<<endl;
    cout << "Enter name: " ;
    cin >> s2.name;
    cout << "Enter roll no: ";
    cin >> s2.rollno;
    cout << "Enter fees: ";
    cin >> s2.fees;
    cout<<"First student name: "<<s1.name<<" Roll no is: "<<s1.rollno<<" fees: "<<s1.fees<<" university name: "<<s1.uniname<<endl;
    cout<<"First student name: "<<s2.name<<" Roll no is: "<<s2.rollno<<" fees: "<<s2.fees<<endl;
}
