#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t>0){
        int n;
        cin >>n;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>> arr[i];
        }
        cout<<"Enter the search element:"<<endl;
        int k;
        cin >> k;
        for(int i = 0;i<n;i++){
            if(arr[i] == k){
                cout<<"Yes"<<endl;
                break;
            } 
        }
        t--;
    }
}
