#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i  = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i] < min ){
            min = arr[i];
        }
    }
    cout<<max<<" "<<min<<endl;
}
