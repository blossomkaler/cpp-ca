#include <iostream>
using namespace std;
int main(){
    int arr[10]={2,4,6,8,9,11}; //sorted array
    int n=6;
    for(int i =0;i<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}