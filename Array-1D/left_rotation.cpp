#include<iostream>
#include<vector>
using namespace std;

vector<int>  left_rotation(vector <int> x,int k){
    int size = x.size();
    k = k%size;
    vector<int> r(size);
    for(int i = 0;i<size;i++) {
        r[(i + size-k)%size] = x[i];
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];

    }
    int k;
    cin >> k;
    vector <int> ans = left_rotation(arr,k);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;
    return 0;
}
