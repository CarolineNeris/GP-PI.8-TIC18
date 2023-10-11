#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
#include<time.h>
#include<cctype>


using namespace std;

int main(){

    string str1;
    vector<string> vecstr;
    srand(time(nullptr));

    for(int p=0;p<10;p++){
        str1={};
        for(int i=0;i<10;i++){
            str1+='a' + rand()%('z' - 'a'); 
        }
        vecstr.push_back(str1);
    }
    for(int idx=0;idx<vecstr.size();idx++){
        vecstr.at(idx)[0]=toupper(vecstr.at(idx)[0]);
        cout<<vecstr.at(idx)<<endl;
        
    }
    return 0;

}