#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1;

    r1.length = 10;
    r1.breadth = 20;
    int x = r1.breadth*r1.length;
    cout<<x;
    return 0;
}