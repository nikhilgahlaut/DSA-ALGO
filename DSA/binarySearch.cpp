#include<iostream>
#include<vector>
using namespace std;

//calling binary function
int binarySearch(vector<int> &v,int t){
    int l = 0;
    int r = v.size() - 1;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid] == t){
            return mid;
        }
        else if(v[mid] > t) {
            r = mid -1;
        }

        else{
            l = mid +1;
        } 
    }
    
    return -1;
}

int main(){
    vector<int> v = {2,6,9,23,65,79,90,106};
    int target = 65;
    cout<<binarySearch(v,target);
    return 0;
}