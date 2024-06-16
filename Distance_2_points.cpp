#include <iostream>
#include<cmath>
using namespace std;
class point{
int a;
int b;
public:
    friend double distance(point c1, point c2);
    point(int x, int y){
        a = x;
        b = y;
    }
};
double distance(point p1, point p2){
    return sqrt(pow(p2.a -p1.a, 2) + pow(p2.b -p1.b, 2));
}
int main() {
    point p1(2,4);
    point p2(4, 3);
    cout<< "The distance between two point is: "<< distance(p1,p2);
    return 0;
}
