// ** Boiler plate code **//

// #include <iostream>
// using namespace std;

// int main () {
//     cout << "hello world!";
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main () {
//     int a = 3;
//     int b = 6;

//     cout << a << endl;
//     cout << b << endl;
// }

// Rules for naming convention in c++

/*
  1. The name should start with an "_" or a letter.
  2. The name can only contain uppercase & lowercase letters, digits from 0 - 9 and underscore "_",
  3. Space is not allowed mid of the veriable name
  4. It must not be a Keyword (reserved words). // Keywords have a special meaning for the compiler.

  eg: 
     _name
     last_name
     student2, Student4
*/

// )))))))))________- Sum of two veriable ------------

#include <iostream>
using namespace std;

int main () {
  int a ,b ;
  cout << "Enter the value of a : ";
  cin >> a;
  cout << "enter the vlaue of b : ";
  cin >> b;

  cout << "Sum of a and b is " << a+b;
  
  return 0;
}