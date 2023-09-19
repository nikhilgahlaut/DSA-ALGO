#include<iostream>
#include<vector>
using namespace std;

int binarySearchRecursion(vector<int> &v,int t, int l, int r){
    int mid = (l+r)/2;
    if(v[mid] == t) return mid;
    else if(v[mid] < t) return binarySearchRecursion(v,t,mid +1,r);
    else return binarySearchRecursion(v,t,l,mid-1);
}

int main(){
    vector<int> v = {2,6,9,23,65,79,90,106};
    int target = 65;
    int n = v.size();
    cout<<binarySearchRecursion(v,target,0,n-1);
    return 0;
}