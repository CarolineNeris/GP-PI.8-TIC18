#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); 
    
    string str1 = "", str2 = "";

    for(int i = 0; i < 10; i++) {
        str1 += 'a' + rand() % ('z' - 'a');
        str2 += 'a' + rand() % ('z' - 'a');
    }
    
    str1[0] = toupper(str1[0]);
    str2[0] = toupper(str2[0]);

    if (str1 < str2) {
        cout << str1 << endl << str2 << endl;
    } else {
        cout << str2 << endl << str1 << endl;
    }

    return 0;
}
