//mountain array question
//arr = 1,2,3,4,5,4,,3,0
//ans = 4
#include<iostream>
#include<vector>

using namespace std;
//implementing binary seach and finding out the mid element is on increasing or decreasing plane

//if mid is on increasing plane l is shifted mid +1 else r is shifted mid -1;
int mountainArray(vector<int> &arr,int n){
    int l = 0;
    int r = n-1;
    int ans = -1;
    while(l<=r){
        int mid =  (l+r)/2;
        if(arr[mid]> arr[mid-1]){
            ans = max(ans,mid);
            l = mid +1;
        }
        else{
            r = mid -1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={0,3,2,1};
    int n = arr.size();
    cout<<mountainArray(arr, n);
    return 0;
}