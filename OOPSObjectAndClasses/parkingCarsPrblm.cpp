#include <iostream>
using namespace std;
class Parking {
    private:
         static int totalCars;
         static int capacity;
         
    public:
         void parkCar(){
             if(totalCars < capacity){
                 totalCars++;
                 cout << "Car Parked. Total" << totalCars << endl;
             }else{
                 cout << "Parking Full " << endl;
             }
         }
};
int Parking::totalCars = 0;
int Parking::capacity = 3;
int main()
{
    Parking p1;
    p1.parkCar();
    p1.parkCar();
    p1.parkCar();
    p1.parkCar();
    return 0;
}