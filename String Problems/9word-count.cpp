#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str= "My name is Shinchan";
    int len = str.length();
    int spaceCount =0;
    for(int i =0; i<len; i++){
        if(int(str[i]) == 32) spaceCount++;
    }
    cout<<"Total words : "<<spaceCount+1;

    return 0;
}