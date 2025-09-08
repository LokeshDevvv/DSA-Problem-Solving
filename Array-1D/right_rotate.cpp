#include<iostream>
#include<vector>
using namespace std;

void brute_Force(vector<int> &x ,int k){
    int size = x.size();
    k = k%size;

    for(int i = 0;i<k;i++){
    int temp = x[size -1];

    for(int i = size -1;i>0;i--) {
        x[i] = x[i-1];
    }
    x[0] = temp;
    }
}
vector<int>  right_rotate(vector <int> x,int k){
    int size = x.size();
    k = k%size;
    vector<int> r(size);
    for(int i = 0;i<size;i++) {
        r[(i+k)%size] = x[i];
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
    vector <int> ans = right_rotate(arr,k);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;
    cout<<"BruteForce"<<endl;
    brute_Force(arr,k);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;
    return 0;
}

