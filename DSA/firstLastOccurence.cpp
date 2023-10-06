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
    int target;
    cout<<"now enter the target element ot  find first and last occurence"<<endl;
    cin>>target;
    vector<int> ans;
    ans.push_back(firstOccurence(v,n,target));
    ans.push_back(lastOccurence(v,n,target)-1);
    for(int i = 0; i<2;i++){
        cout<<ans[i]<<",";
    }
    return 0;
}