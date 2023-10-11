#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<iomanip>

#define ROW 480
#define COL 640

using namespace std;

int main(){

    const int MAX=480*640;
    int aux;
    
    srand(time(nullptr));
    
    vector<int> image;
    vector<int> freq;
    for (int i = 0; i < MAX; i++) { 
        image.push_back(rand()%256); 
    }
    for (int i = 0; i < 256; i++) { 
        freq.push_back(count(image.begin(), image.end(), i));
    } 
       
    for (int i = 0; i < image.size(); i++) { 
        cout << image[i] << " "; 
    } 
    cout<<endl;
    for (int i = 0; i < freq.size(); i++) { 
        cout<<setw(3)<<i<<" : "<<freq[i]<<"|";
        aux=freq[i]/20;
        for(int j=0;j<aux;j++){
            cout<<"-";
        }
        cout<<endl;
    }

    return 0; 
} 
  