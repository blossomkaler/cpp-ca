#include <iostream>
using namespace std;
int main(){
    string str = "blossom";
    int len = str.length();
    char chars[20];
    int countArr[20]={0};

    for(int i =0; i<len; i++){
        chars[i]=str[i];
        int count =0;
        for(int j=0; j<len;j++){
            if(str[i] == str[j]) count++;
        }
        countArr[i] = count;
    }
    for (int i = 0; i < len; i++)
    {
        cout<<chars[i]<<" : "<<countArr[i]<<endl;
    }
    return 0;
}