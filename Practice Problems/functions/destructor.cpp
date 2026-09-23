#include <iostream>
using namespace std;

class sample{
    private:
    int x;
    public:
    sample(int n){
        x=n;
        cout<<"\n Constructor Called for Object with value: "<<x;
    }
    ~sample(){
        cout << "\n Constructor Called for Object with value: " << x;
    }
};

int main(){
    sample s1(1);
    sample s2(2);
    sample s3(3);
    return 0;
}