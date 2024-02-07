#include <iostream> 
using namespace std;

void heapify(int arr[], int size,int i){
    int largest = i;
    int right = 2*i;
    int left = 2*i +1;

    if(left <= size && arr[left]> arr[largest]){
        largest = left;
    }
    if(right <= size && arr[right]> arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }

}

void heapsort(int arr[], int size){
    swap(arr[1],arr[size]);
    size --;
    heapify(arr,size,1);
    if(size>1){
        heapsort(arr,size);
    }
    else{
        return;
    }
}

int main(){    
    int arr[100] = {-1 , 50,55,53,52,58,82,62,72,54};
    int n = 9;

    for (int i = n/2; i >0; i--){    // in CBT leaf nodes lies from n/2+1 to n // nd leaf nodes are heap in itself // no need to heapify them
        heapify(arr,n,i);
    }
    cout<<"\nBEFORE HEAPSORT : \n";
    
    for (int i = 1; i <=n; i++){
        cout<<arr[i]<<" ";
    } 
    
    heapsort(arr,n);
    cout<<"\n\nAFTER HEAPSORT : \n";
    for (int i = 1; i <=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}