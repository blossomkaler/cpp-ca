#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str ="CODING";
    int len = str.length();
    for(int i =0; i<len;i++){
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u'||str[i]== 'A'||str[i]== 'E'||str[i]== 'I'||str[i]== 'O'||str[i]== 'U'){
            str[i] = '$';
        }
    }
    for(int i =0; i<len; i++){
        cout<<str[i];
    }


    return 0;
}