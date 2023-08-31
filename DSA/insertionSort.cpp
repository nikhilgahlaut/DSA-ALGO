#include <iostream>

using namespace std;

//insertion sort function
void insertionSort(int arr[], int n){
    for(int i = 1 ; i< n ; i++){
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[] = {11,8,15,9,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    //function call of insertion sort
    insertionSort(arr,n);

    //printing the sorted array
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}