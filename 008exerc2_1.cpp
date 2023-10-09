#include<iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;

int main(){
    double vecRand[250]={0};
    int vecFreq[20]={0};
    double maior,menor,aux,soma;
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
    cout<<menor<<endl;
    cout<<maior<<endl;
    cout<<soma<<endl;
    cout<<soma/i<<endl;

    cout<<"------------"<<endl;
    int acum=0;
    for(int i=0;i<20;i++){
        cout<<i+1<<" :"<<vecFreq[i]<<endl;
        acum=acum+vecFreq[i];
    }
    cout<<acum<<endl;

    return 0;
}