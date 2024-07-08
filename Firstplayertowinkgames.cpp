#include <iostream>
int melon(int w) {
      if( w % 2 == 0){
          return "Yes";
      }
      else{
        return "No";
      }
}
int main() {
    int w;
    std::cout << "Enter the weight of the watermelon: ";
    std::cin >> w;
  std::cout<<melon(w);
}
