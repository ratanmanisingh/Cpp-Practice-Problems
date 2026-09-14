#include <iostream>
using namespace std;

// class pointer{
//     int s;
//     int *p=&s;
//     public:
//         void get_data(){
//             cin>>s;
//         }
//         void display(){
//             cout<<s<<endl;
//             cout<<&s<<endl;
//             cout<<p;
//         }
// };
// int main(){
//     pointer p;
//     p.get_data();
//     p.display();
// }

// Method 2:

class array{
    int s;
    public:
        void getdata(){
            cout<<"Enter value of s= ";
            cin>>s;
        }
        void add(){
            cout<<"s value= "<<s;
            cout<<"\nAddress of s= "<<&s;
        }
};

int main(){
    array a;
    array *p=&a;
    // p->getdata();
    // p->add();
    (*p).getdata();
    (*p).add();
    return 0;
}