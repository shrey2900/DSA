#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a =10;
    int *p;
    p=&a;

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;

    int A[5]= {2,3,5,6,7};
    int *y;
    y=A;

    for(int i : A){
        cout<<i<<endl;
    }

    for(int j=0; j<5; j++){
        cout<<y[j]<<endl;
    }


    //Pointer to access heap memory

    int *m;
    m= new int[5];
    m[0]=2;m[1]=4;m[2]=6;m[3]=8;m[4]=10;

    for(int z=0; z<5; z++){
        cout<<m[z]<<endl;
    }
return 0;
}