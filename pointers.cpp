#include<iostream>
#include<cstring>
using namespace std;
enum print{x};
#define print(x) (cout<<x<<endl);
// #define Inp(y) (cin>>y);

// void print(int c){
//     cout<<c<<endl;
// }

//  TODO: This is pass by value method:
void passbyvalue(int &valv){
    valv++;
}
//  TODO: This is pass by reference method:
void passbyreference(int *valv){
    valv++;
}
int main(){
    print n;
    string name = "Hamza";
    print(name);
    if(n==0){
    cout<<n<<endl;
    }
    int p = 10;
// FIXME: Above code is about the pass by value working
    passbyvalue(p);
    print(p);
// FIXME: Above code is about the pass by reference working
    passbyreference(&p);
    print(p);

    // cout<<"Hello world";
    // int value = 8;
    // int* ptr = &value;
    // char var = 9;
    // char* pX = new char[8];
    // cout<<memset(pX,10, 8);
    int a = 3;
    int b = 1;
    int c = 18;
    int &alias = a;
    alias = b;
    cout<<a<<endl<<b<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    *ptr = 10;
    ptr = &b;
    cout<<ptr<<endl;
    cout<<&b<<endl;
    *ptr = 9;
    ptr = &a;
    *ptr = 92;
    cout<<&a<<endl<<&b<<endl<<&c;
    // Log(*pX);
    // cout<<*ptr;
    // Log(*ptr)


return 0;
}