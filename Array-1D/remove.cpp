#include<iostream>
#include<vector>
using namespace std;
vector<int> remove(vector<int>x,int k){
    int size = x.size();
    vector<int> ans(size -1);
    for(int i =0 ;i<size-1;i++){
        if(i>=k-1){
            ans[i] = x[i+1];
        }
        else{
            ans[i] = x[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >>arr[i];
    }
    int k;
    cin >>k;
    vector<int> r = remove(arr,k);
    
    for(int i =0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
}
