#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
class TrafficLight {
public:
    enum Lights{Red, Yellow, Green};
    // Lights ligh;
    void Signal(int l) {
         if(l == 0) {
             cout<<"Red"<<endl;
         }
        else if(l == 1) {
            cout<<"Yellow"<<endl;
        }
        else {
            cout<<"Green"<<endl;
        }
    }
};
int main() {
   TrafficLight signal;

    for(int i = TrafficLight::Red; i <= TrafficLight::Green; i++) {
        signal.Signal(i);
        this_thread::sleep_for(chrono::seconds(5));
    }
    // sig.detach();
    return 0;
}
