#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for( int i = 0;i<n;i++){
        cin >>arr[i];
    } 
    int max = INT_MIN;
    int max_sec = INT_MIN;

    for( int i = 0;i<n;i++){
        if(arr[i] > max){
            max_sec = max;
            max = arr[i];
        }
        else if(arr[i]> max_sec && arr[i] < max){
            max_sec = arr[i];
        }
    } 
    if(max_sec == INT_MIN){
        cout<<-1<<endl;
    }
    else{
    cout<<max_sec<<endl;
    }
}
