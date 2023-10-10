#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); 

    const int NUM_STRINGS = 10;
    const int STRING_LENGTH = 10;
    vector<string> stringsList(NUM_STRINGS); 

    for(int s = 0; s < NUM_STRINGS; s++) {
        string randomStr = "";
        for(int i = 0; i < STRING_LENGTH; i++) {
            randomStr += 'a' + rand() % ('z' - 'a');
        }
        stringsList[s] = randomStr;
    }

    for(int s = 0; s < NUM_STRINGS; s++) {
        stringsList[s][0] = toupper(stringsList[s][0]);
        cout << stringsList[s] << endl;
    }

    return 0;
}
