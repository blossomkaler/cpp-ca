#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str= "abc";
    int sum=0;
    int len= str.length();

    for(int i=0; i<len; i++){
        sum+= int(str[i]);
    }

    cout<<"Sum of ASCII values : "<<sum;


    return 0;
}