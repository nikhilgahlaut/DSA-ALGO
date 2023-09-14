// countsort algorithm
#include <iostream>
#include <vector>

using namespace std;

//count sort logic
void countSort(vector<int> &arr){
    int n = arr.size();
    int max_ele = arr[0];
    //picking out maximum element from the array
    for(int i = 0; i<n;i++){
        max_ele = max(arr[i],max_ele);
    }
    
    //create frequency array
    vector<int> freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    //calculate cummulative frequency
    for(int i=1;i<=max_ele;i++){
        freq[i] += freq[i-1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[--freq[arr[i]]] = arr[i];
    }

    //copy back array to original array
    for(int i =0 ;i<n;i++){
        arr[i]=ans[i];
    }

}

int main(){
    vector<int> arr = {6,5,4,3,2,1};
    int n = arr.size();
    countSort(arr);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}