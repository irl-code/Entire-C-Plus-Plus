#include <iostream>
// class Entity{
// public:
// virtual void Star_Entity() = 0;
// };
// class Player : public Entity{
// public:
// void Star_Entity() override{
//   std::cout<<"Hello player";
// }
// };
// class Enemy : public Entity{
// public:
// void Star_Entity() override{}
// };
class Real;
class Complex{
private:
int complex;
friend void Complex_number(Real, Complex); 
};
class Real{
private:
int real;
friend void Complex_number(Real, Complex); 
};
void Complex_number(Real r, Complex c){
  r.real = 20;
  c.complex = 10;
  std::cout<<r.real<<" + "<<c.complex<<"i"<<std::endl;
}
// Real R1;

// R1.add_real(r1.c + r1.d);
int main(){
  Real r1;
  Complex c1;
  Complex_number(r1, c1);
  // Player *p1 = new Player;
  // p1->Star_Entity();
}



