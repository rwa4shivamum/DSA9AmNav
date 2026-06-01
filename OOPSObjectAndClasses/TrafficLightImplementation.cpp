// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class TrafficSignal{
    public:
        enum class Light {RED, YELLOW, GREEN};
    
    private:
        Light current;
    
    public:
          TrafficSignal() {
              current = Light::RED;
          };
          
          int getDuration() {
              switch (current) {
                  case Light::RED: return 30;
                  case Light::YELLOW: return 5;
                  case Light::GREEN: return 25;
              };
              return 0;
          };
          
          void next() {
              switch (current){
                  case Light::RED: current = Light::GREEN; break;
                  case Light::GREEN: current = Light::YELLOW; break;
                  case Light::YELLOW: current = Light::RED; break;
              };
          };
          
          void display() {
              string name;
              
              switch (current) {
                  case Light::RED: name = "RED"; break;
                  case Light::YELLOW: name = "YELLOW"; break;
                  case Light::GREEN: name = "GREEN"; break;
              }
              
              cout << name << "( " << getDuration() << "s)" << endl;
          };
};

int main() {
    // Write C++ code here
    TrafficSignal signal;
    for(int i = 0; i < 9; i++){
        signal.display();
        signal.next();
    }
    return 0;
}