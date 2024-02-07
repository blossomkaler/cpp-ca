#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str= "Wint@r$*";
    int len = str.length();
    int count =0;

    for(int i =0; i<len; i++){
        if((int(str[i])>=33 && int(str[i])<=42) || int(str[i]) ==64  ) count ++;
    }
    cout<<"Total special symbols : "<<count;

    return 0;
}