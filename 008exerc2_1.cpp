#include<iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int main(){
    double vecRand[250]={0};
    int vecFreq[20]={0};
    double maior,menor,aux,soma,media;
    int i=0;

    
    srand(time(NULL));
    maior=0;
    menor=1 + 30.0*(rand()%100)/3000.0;;

    for(i=0;i<250;i++){
        aux=1 + 30.0*(rand()%100)/3000.0;
        //vecFreq[(
            vecRand[i]=aux;
            //)-1]++;
        cout<<aux<<endl;
        if(aux>maior){maior=aux;}
        if(aux<menor){menor=aux;}
        soma=soma+aux;
    }
    media=soma/i;
    cout<<menor<<endl;
    cout<<maior<<endl;
    cout<<soma<<endl;
    cout<<media<<endl;

    cout<<"------------"<<endl;
    for(i=0;i<250;i++){
        if(vecRand[i]>media){
            vecRand[i]=vecRand[i]+1;
        }else{if(vecRand[i]<media){
                    vecRand[i]=vecRand[i]-2;
              }
        }
    }
    
    soma=0;
    for(i=0;i<250;i++){
        cout<<vecRand[i]<<endl;
        soma=soma+vecRand[i];
    }
    
    media=soma/i;
    cout<<soma<<endl;
    cout<<media<<endl;

    return 0;
}