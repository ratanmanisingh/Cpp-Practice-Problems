#include <iostream>
using namespace std;

class pointer{
    int s;
    int *p=&s;
    public:
        void get_data(){
            cin>>s;
        }
        void display(){
            cout<<s<<endl;
            cout<<&s<<endl;
            cout<<p;
        }
};
int main(){
    pointer p;
    p.get_data();
    p.display();
}