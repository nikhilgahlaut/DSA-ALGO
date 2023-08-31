#include <iostream>

using namespace std;

//insertion sort function
void insertionSort(int arr[], int n){

//loop to traverse every element from 2nd element as 1st element is assumed as sorted array
    for(int i = 1 ; i< n ; i++){
    
//intializing each ele with current variable in every step
        int current = arr[i];

//j is a variable pointing to last sorted element .
        int j = i - 1;

//while loop is used to compare the element with all sorted element an inserting it at its place
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