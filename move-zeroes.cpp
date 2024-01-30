#include <iostream>
using namespace std;

void swap(int&a, int&b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int arr[10]={12,0,13,15,0};
    int n=5;
    int count =0;

    for(int i=0;i<n;i++){
        if(arr[i]==0) swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}