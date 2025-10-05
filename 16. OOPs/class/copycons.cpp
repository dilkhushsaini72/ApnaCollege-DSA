#include <iostream>
using namespace std;

class Car {
    public:
    string name;
    string color;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main() {

    Car c1("maruti 800", "black");
    Car c2(c1);     // copy constructor::
    
    cout << c2.name << "\n" << c2.color;
    return 0;
}