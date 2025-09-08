#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >>n;
        vector<int> arr(n);
        for(int i =0; i<n;i++){
            cin >> arr[i];
        }
        
        for(int i =0; i<n;i++){
            int found = 1;
            for(int j = 0;j<n;j++){
                if(i != j && arr[i] == arr[j]){
                    found = 0;
                }
            }
            if(found == 1){
                cout<<arr[i]<<endl;
            }
        }
        t--;
    }
}
