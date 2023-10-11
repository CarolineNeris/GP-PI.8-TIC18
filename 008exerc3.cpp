#include<iostream>
#include<string>


using namespace std;

int main(){
    string date;
    string dia={},mes={},ano={""};
    int idia,imes,iano;
    bool flag;    

    do{
        flag=false;
        date={};
        dia={};
        mes={};
        ano={};
        
        cout<<"Digite uma data formato dd/mm/aaaa: ";
        getline(cin >> ws,date);
        
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
        idia=stoi(dia);
        imes=stoi(mes);
        iano=stoi(ano);
        switch(imes){
            case 2:{
                if( (iano % 400 == 0) || ( (iano % 4 == 0) && (iano % 100 != 0) ) ){
                    if(idia<1||idia >29){flag=true;}
                }else{
                    if(idia<1||idia >28){flag=true;}
                }
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:{
                if(idia<1||idia>30){flag=true;}
                break;
            }
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:{
                    if(idia<1||idia>31){
                        flag=1;}
                    break;
            }
            default:{flag=true;}
        }
    }while(flag);
    cout<<idia;
    //cout<<mes<<endl;
    //cout<<ano<<endl;
    switch(imes){
            case 1:{
                cout<<" de janeiro de ";
                break;
            }
            case 2:{
                cout<<" de fevereiro de ";
                break;
            }
            case 3:{
                cout<<" de março de ";
                break;
            }
            case 4:{
                cout<<" de abril de ";
                break;
            }
            case 5:{
                cout<<" de maio de ";
                break;
            }
            case 6:{
                cout<<" de junho de ";
                break;
            }
            case 7:{
                cout<<" de julho de ";
                break;
            }
            case 8:{
                cout<<" de agosto de ";
                break;
            }
            case 9:{
                cout<<" de setembro de ";
                break;
            }
            case 10:{
                cout<<" de outubro de ";
                break;
            }
            case 11:{
                cout<<" de novembro de ";
                break;
            }
            case 12:{
                cout<<" de dezembro de ";
                break;
            }
            //default:{}
        }
        cout<<iano<<"."<<endl<<endl;
    return 0;
}
