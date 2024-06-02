#include<iostream>
using namespace std;
class Student{
string name;
public:
    Student() {
        cout<<name;
    }
    Student(string n) {
        name = n;
        cout<<name;
    }

};
int main(){
    Student ob;
    Student ob1 = Student("Hamza");
}
class Rectangle {
    int length;
    int breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int b, int h) {
        breadth = b;
        length = h;
    }
    Rectangle(int x) {
        breadth = x;
        length = x;
    }
    void print(void) {
        cout<<"The height is "<<breadth<<"The length is: "<<length<<endl;
    }
};