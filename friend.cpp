#include<iostream>
using namespace std;
class Complex{
private:
    int a;
    int b;
   friend void ret_comp(Complex ob, Complex ob1);
public:
    void get_no(int c1, int c2)  {
        a = c1;
        b = c2;
    }
    void setComplex() const {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};


void ret_comp(Complex ob, Complex ob1){
    Complex ob3;
    ob3.get_no((ob.a + ob1.a), (ob.b + ob1.b));
    return ob3.setComplex();
}
int main(){
    Complex c1, c2, com;
    c1.get_no(2,3);
    c1.setComplex();
    c2.get_no(4,5);
    c1.setComplex();
    ret_comp(c1, c2);

}