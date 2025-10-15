#include <iostream>
#include <string>
using namespace std;

void removeDuplicate(string str, string ans, int i, int map[26]){

    if(i == str.size()){
        cout << "ans : " << ans << endl;
        return;
    }
    
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx] == true) { // duplicate
        removeDuplicate(str,ans,i+1,map);
    }else{ // Not duplicate
        map[mapIdx] = true;
        removeDuplicate(str, ans+str[i], i+1, map);
    }
}

int main() {

    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false};

    removeDuplicate(str,ans,0,map);
    
    return 0;
}