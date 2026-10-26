#include <iostream>
using namespace std;    

int element(int n) {
    if (n <= 1) {
        return 1; 
    }
    cout<<n<<" ";
    element(n - 1);

}

int main() {
    element(5);
}