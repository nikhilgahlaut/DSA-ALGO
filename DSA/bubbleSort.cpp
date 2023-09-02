#include <iostream>
#include <vector>

using namespace std;

//making bubble sort array
void bubbleSort(vector<int> &arr, int n){
    for(int j =0 ; j < n-1 ; j++){
        for(int i = 0; i < n-j-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

}


int main(){
    vector<int> arr = {6,0,3,5};
    int n = arr.size();

//calling the bubble sort array
    bubbleSort(arr,n);
//printing the array.
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}