#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[30] ="CODING";
    int vowCount =0, consCount =0;
    int len = strlen(arr);
    for(int i =0; i<len;i++){
        if(arr[i]== 'a'||arr[i]== 'e'||arr[i]== 'i'||arr[i]== 'o'||arr[i]== 'u'||arr[i]== 'A'||arr[i]== 'E'||arr[i]== 'I'||arr[i]== 'O'||arr[i]== 'U'){
            vowCount++;
        }
        else{
            consCount++;
        }
    }

    cout<<"Vowel Count : "<<vowCount<<endl;
    cout<<"Consonant Count : "<<consCount<<endl;

    return 0;
}