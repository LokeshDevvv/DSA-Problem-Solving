#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int count_even = 0;
    int count_odd = 0;

    for(int i = 0; i<n;i++){
        if(arr[i] % 2 == 0) count_even++;
        else
            count_odd++;
    }
    cout<<abs(count_even - count_odd);
    return 0;
    cout<<endl;
}
