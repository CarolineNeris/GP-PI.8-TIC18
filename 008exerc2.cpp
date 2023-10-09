#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

    int vecRand[100]={0};
    int vecFreq[20]={0};

    srand(time(NULL));

    for(int aux,i=0;i<100;i++){
        aux=1+rand()%20;
        vecFreq[(vecRand[i]=aux)-1]++;
    }
    cout<<"------------"<<endl;
    int acum=0;
    for(int i=0;i<20;i++){
        cout<<i+1<<" :"<<vecFreq[i]<<endl;
        acum=acum+vecFreq[i];
    }
    cout<<acum<<endl;

    vector<int> vecRand1;
    vector<int> vecFreq1;
    int aux1;
    srand(time(NULL));
    for(int i=0;i<100;i++){
        aux1=1+rand()%20;
        vecRand1.push_back(aux1);
    }

    int freq, cont=0, maior=0;
    vector<int>vec;
    for(int i=0;i<20;i++){
        freq=(std::count(vecRand1.begin(), vecRand1.end(), i+1));
        cout<<"freq:"<<i+1<<": "<<freq<<endl;
        cont=cont+freq;
        if(freq>=maior){
            maior=freq;
        }
    }
    cout<<"cont"<<cont<<endl;
    for(int i=0;i<20;i++){
        if(maior == (std::count(vecRand1.begin(), vecRand1.end(), i+1))){
            cout<<"idx: "<<i+1<<endl;
        }
    }
    
    return 0;
}