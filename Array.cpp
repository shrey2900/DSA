#include <iostream>
using namespace std;

int main(){
    std::cout<<"Hello World\n";
    int A[5] = {2,4,6,8,10};
    for (int i : A){
        cout<<i<<"\n";
    }
    return 0;
}
