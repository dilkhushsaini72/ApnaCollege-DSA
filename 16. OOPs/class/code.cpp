#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    string color;

    public: 
    Car(string carName, string colorName) {
        cout << "Constructor being called \n";
        name = carName;
        color = colorName;

    }
    
    void start() {
        cout << "Car has started \n";
    }

    void stop() {
        cout << "Car has stop";
    }

    // Getter
    string getName() {
        return name;
    }
};

int main() {

    Car c1("Maruti", "blue"); 
    
    cout << "Car Name: " << c1.getName() ;
    
    return 0;
}