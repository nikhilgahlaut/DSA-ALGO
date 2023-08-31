#include <iostream>
//function to merge
void merge(int arr[],int l, int mid, int r){
    int an = mid - l + 1;
    int bn = r- mid;
    int a[an],b[bn];
    for(int i = 0 ; i<an ; i++){
        a[i] = arr[l+i];
    }

    for(int j = 0 ; j < bn ; j++){
        b[j] = arr[mid+1 + j];
    }
    int i =0, j =0, k=l;
    
    while(i < an && j <bn){
        if(a[i] < b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }

    while(i < an){
        arr[k++] = a[i++];
    }
    while( j < bn){
        arr[k++] = b[j++];
    }


}

//function to mergeSort
void mergeSort(int arr[], int l, int r){
    if(l>=r)
        return;
    
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr, mid+1, r);
    merge(arr,l,mid,r);
}

using namespace std;
int main()
{
    int arr[] = {9,1,5,6,2,3,8,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    //printing the array
    for(int i = 0; i< n ; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}