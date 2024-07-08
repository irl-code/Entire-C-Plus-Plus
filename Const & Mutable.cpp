#include<iostream>
using namespace std;
class Entity
{
private:
    int a = 2;
    int* max = &a;
public:
    int* Get_X() const
    {
       return max;
    }


};
int main(){
    int age = 42;
    // Typing const before the datatype and after the datatype will make the pointer immutable.
    int const* c = new int;
    // *c = age;
    const int* y = new int;
    y = &age;
 // Typing const before the variable will make the variable immutable.
    int* const q = new int;
}
