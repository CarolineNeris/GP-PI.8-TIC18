#include<iostream>
#include<string>

using namespace std;

int main(){
    string date;
    string dia={0},mes={0},ano={0};
    int flagd=0,flagm=0,flaga=0;    

    cout<<"Digite uma data formato dd/mm/aaaa: ";
    getline(cin,date);
    
    for(int i=0;i<date.length();i++){
        if(date.at(i)!='/'){
            dia+=date.at(i);
        }else{date.erase(0,i+1);break;}
    }
    for(int i=0;i<date.length();i++){
        if(date.at(i)!='/'){
            mes+=date.at(i);
        }else{date.erase(0,i+1);break;}
    }
    for(int i=0;i<date.length();i++){
            ano+=date.at(i);
    }
    cout<<dia<<endl;
    cout<<mes<<endl;
    cout<<ano<<endl;

    return 0;
}
