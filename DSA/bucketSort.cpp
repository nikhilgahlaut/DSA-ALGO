#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void bucketSort(vector<float> &v, int n){   
    //put element in bucket
    vector<float> bucket[n];
    for(int i = 0 ;i <n;i++){
        int index = v[i]*n;
        bucket[index].push_back(v[i]);
    }
    //sort each bucket
    for(int i =0 ;i <n;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    //concatanate all bucket
    int index = 0;
    for(int i =0;i<n;i++){
        for(int  j= 0;j<bucket[i].size();j++){
            v[index++] = bucket[i][j];

        }
    }


}

int main(){
    vector <float> v = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94};
    int n = v.size();
    
    bucketSort(v,n);

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}