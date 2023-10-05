#include<iostream>
#include<vector>

using namespace std;

int lastOccurence(vector<int> &v, int n, int t){
    int l = 0;
    int  r = n-1;
    int ans = -1;
    while(l<=r){
        int  mid = (l+r)/2;
        if(v[mid]> t){
            ans = mid;
            r = mid -1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int firstOccurence(vector<int> &v, int n, int t){
    int l = 0;
    int r = n-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        
        if(v[mid]>= t)
        {
            ans = mid;
            r = mid - 1; 
        }  
        else
        {
            l = mid + 1;
        }

    }
    return ans;
}

int main(){
    vector<int> v = {1,4,6,6,6,6,8,10,19};
    int n = v.size();
    int target = 6;
    cout<<firstOccurence(v,n,target)<<endl;
    // cout<<"print";
    cout<<lastOccurence(v,n,target)-1;
    return 0;
}