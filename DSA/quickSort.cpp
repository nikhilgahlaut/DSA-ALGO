//quick sort algorithm
#include <iostream>


using namespace std;

//function for partitioning sub-arrayy
int partition(int arr[], int first, int last){    // 12 18 16 20 30 35
    int pivot = arr[last];
    int  i = first - 1;
    for(int j = first ; j < last ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}

//quick sort function
void quickSort(int arr[], int first, int last){
    if(first>=last){
        return;
    }
    int pi = partition(arr,first ,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi + 1, last);
}

int main(){
    int arr[] = {18,12,30,16,35,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    //function call
    quickSort(arr, 0, n-1);

    //printing sorted array
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
