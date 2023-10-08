#include <iostream>
#include <cstdlib>
#include<ctime>
#include<vector>
#include <algorithm>


using namespace std;

int main(){

int vecRand[100]={0};
int vecFreq[20]={0};

    srand(time(NULL));
    //vecFreq[0]=0;
    for(int aux,i=0;i<100;i++){

        aux=1+rand()%20;
        //vecRand[i]=aux;
        //vecFreq[aux-1]++;
        vecFreq[(vecRand[i]=aux)-1]++;
        cout<<vecRand[i]<<endl;
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
        //vecFreq1.push_back();
    }
    cout<<vecRand1.at(0);

    int freq, cont=0;
    for(int i=0;i<20;i++){
    //for(auto &i:vecRand1){
      cout<<"freq:"<<i+1<<": "<<(std::count(vecRand1.begin(), vecRand1.end(), i+1))<<endl;
        cont=cont+(std::count(vecRand1.begin(), vecRand1.end(), i+1));
    }
    cout<<"cont"<<cont<<endl;
    //for(auto &i:vecFreq1){
      //  cout<<">>"<<i<<endl;
    //}
   // int freq[20]={0};
   // for (int const &i: vecRand1) {
   //     freq[i]++;
   // }
    return 0;
}