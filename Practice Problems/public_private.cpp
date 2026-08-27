#include <iostream>
using namespace std;

class student {
    char name[20];
    int rollno;
    double fees;
        public:
            void details(){
                cin>>name>>rollno>>fees;
            };
            void getdetails(){
                cout<<"name: "<<name<<", rollno: "<<rollno<<", fees: "<<fees;
            }
};

int main(){
    student s1,s2;
    cout<<"Enter details of Student 1: ";
    s1.details();
    cout << "Enter details of Student 2: ";
    s2.details();
    cout<<"Name of first students: ";
    s1.getdetails();
    cout<<endl;
    cout<<"Name of second students: ";
    s2.getdetails();
}
