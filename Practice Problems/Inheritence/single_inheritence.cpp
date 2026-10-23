#include <iostream>
using namespace std;

class a{
    public:
    int add_a(int a, int b)
    {
        return a + b;
    }
};
class b:public a{
    public:
    int add_b(int a,int b){
        return a+b;
    }
};

int main(){
    a aobj;
    b bobj;
    cout<<aobj.add_a(4,5)<<endl;
    cout<<bobj.add_b(9,5)<<endl;
    cout<<bobj.add_b(1,5);
}