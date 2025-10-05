#include <iostream>
using namespace std;

class animals {
    public: 

    void breath() {
        cout << "they can breath\n";
    }

    void sleep() {
        cout << "sleep\n";
    }
};

class mammals : public animals {
    public: 
    string blood;
    mammals() {
        blood = "warm blooded";
    }
};

int main() {

    mammals obj1;

    obj1.breath();
    obj1.sleep();

    cout << obj1.blood << endl;
    
    return 0;
}