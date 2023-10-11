#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
#include<time.h>
#include<cctype>


using namespace std;

int main(){

    string str1,str2;
    vector<string> vecstr;
    srand(time(nullptr));

    for(int i=0;i<10;i++){
       str1+='a' + rand()%('z' - 'a'); 
    }
    str1.at(0)=toupper(str1.at(0));
    cout<<str1<<endl;
    vecstr.push_back(str1);

    for(int i=0;i<10;i++){
       str2+='a' + rand()%('z' - 'a'); 
    }
    str2.at(0)=toupper(str2.at(0));
    cout<<str2<<endl;
    vecstr.push_back(str2);
    sort(vecstr.begin(), vecstr.end());

    for(auto &i:vecstr){
        cout<<"\t"<<i<<endl;
    }

    return 0;

}