#include <iostream>
#include <algorithm>

using namespace std;

//selectionSort function
void selectionSort(int arr[], int n)
{
//moving the the boundary of unsorted array
    for(int i = 0 ; i< n -1 ; i++){

//setting the i pointer as minimum index
        int min_idx = i;

//finding the minimum element 
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }

//swapping the element if min_idx is not i;
        if(min_idx != i){
            swap(arr[min_idx],arr[i]);
        }
    }
    
}

int main(){
    int arr[] = {65,25,12,22,11};
    int  n = sizeof(arr)/sizeof(arr[0]);

    //calling selectionSort function
    selectionSort(arr,n);

    //print sorted array
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}