#include<iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int main(){
    double vecRand1[15]={0};
    double vecRand2[15]={0};
    double vecMedia[15]={0};
    double aux;
    int i=0;

    
    srand(time(NULL));
    
    for(i=0;i<15;i++){
        aux=((float)rand()/RAND_MAX)*10;
        vecRand1[i]=aux;
        cout<<aux<<endl;
        
    }
    for(i=0;i<15;i++){
        aux=((float)rand()/RAND_MAX)*10;
        vecRand2[i]=aux;
        cout<<aux<<endl;
        
    }
    for(i=0;i<15;i++){
        if(vecRand2[i]>vecRand1[i]){
            cout<<"Melhorou!"<<endl;
        }else{  if(vecRand2[i]<vecRand1[i]){
                    cout<<"Piorou!"<<endl;
                }else{
                    cout<<"Manteve a nota!"<<endl;
                }
        
        }
    }
    for(i=0;i<15;i++){
        vecMedia[i]=(vecRand1[i]+vecRand2[i])/2;
        cout<<vecMedia[i]<<endl;
    }
    
    return 0;
}