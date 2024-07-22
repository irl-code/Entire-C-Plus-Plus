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

// More on friend function

class ComplexNumber1;
class ComplexNumber{
private:
    int r1 = 2, c1 = 5;
    // Reference of friend Class and friend function
    friend class MakingAComplexNumberFrombothClasses;
    friend void MakingAComplexNumberFunctionFrombothClasses();

public:

    // method to get the values of real and complex number from the user
    void getComplex(int M1, int M2)
    {
        r1 = M1;
        c1 = M2;
    }
};
class ComplexNumber1
{
private:
    int r2 = 2, c2 = 7;
    friend class MakingAComplexNumberFrombothClasses;
    friend void MakingAComplexNumberFunctionFrombothClasses();
public:
    // method to get the values of real and complex number from the user
    void getComplex(int M1, int M2)
    {
        r2 = M1;
        c2 = M2;
    }
};

// friend function to get the Complex Number from the both classes
void MakingAComplexNumberFunctionFrombothClasses()
{
    ComplexNumber Z1;
    ComplexNumber1 Z2;
    std::cout<<Z1.r1 + Z2.r2<<" + "<<Z1.c1 + Z2.c2<<"i"<<std::endl;
}

// frined class to get Complex Number from Both Clasees
class MakingAComplexNumberFrombothClasses
{
private:
    // ComplexNumber M;
    // ComplexNumber1 M1;
public:
    void addingComplexNumbersOfBothClasses(ComplexNumber M, ComplexNumber1 M1)
    {
        // int R1, int R2, int C1,int C2,
        // M.r1 = R1;
        // M1.r2 = R2;
        // M.c1 = C1;
        // M1.c2 = C2;
        // these are the methods of two different classes they are accessed by a friend class
        // M.getComplex(99, 100);
        // M1.getComplex(1, -1);
        std::cout<< M.r1 + M1.r2<< " + " <<M.c1 + M1.c2<<"i"<<std::endl;
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
    // More on friend function

    ComplexNumber k;
    k.getComplex(4, 10);
    ComplexNumber1 l;
    l.getComplex(12, 1);

    MakingAComplexNumberFunctionFrombothClasses();

    MakingAComplexNumberFrombothClasses C;
    C.addingComplexNumbersOfBothClasses(k, l);
}

