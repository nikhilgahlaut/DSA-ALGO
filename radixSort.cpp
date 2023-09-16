#include <iostream>
#include <vector>

using namespace std;

void countSort(vector<int> &v, int n, int pos){
    //frequncy arry of size 10
    vector<int> freq(10,0);
    for(int i =0 ; i<n;i++){
        freq[(v[i]/pos) % 10]++;
    }

    //cummulative frequency
    for(int i =1;i<10;i++){
        freq[i] += freq[i-1];
    }

    //answer array
    vector<int> ans(n);
    for(int i =n-1 ; i>=0 ;i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    //copy back ans array to original array
    for(int i =0 ; i<n;i++){
        v[i] = ans[i];
    }

}

void radixSort(vector <int> &v){
    int n = v.size();
    //finding out maximum element
    int max_ele = INT8_MIN;
    for(int i = 0; i<n;i++){
        max_ele = max(v[i],max_ele);
    }

    //calling countSort for each position of max_ele
    for(int pos = 1; max_ele/pos > 0 ; pos *=10){
        countSort(v,n,pos);
    }

    
}

int main(){
    vector<int> v = {170, 45, 75, 90, 802, 24, 2, 66}; // 2  24  45  66  75  90  170  802
    int n = v.size();

    radixSort(v);

    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}