#include <iostream>
#include <string>
using namespace std;

class User {
    private: 
    string id;
    string password;

    public:
    string username;

    User(int id) {
        this->id = id;
    }
    
    // getter
    string getPass() {
        return password;
    }    

    void setPass(string password) {
        this->password = password;
    }
    
};

int main() {

    User u1(101);

    u1.username = "krishna";
    u1.setPass("*****");

    cout << "username: " << u1.username << endl;
    cout << "password: " << u1.getPass() << endl;
        
    return 0;
}