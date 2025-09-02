#include<iostream>

using namespace std;

int main(){
    int n;
    int avg = 0;
    int sum  =0;
    int count =  0;
    while(true){
        cin >> n;
        if(n < 0 || n > 100) break;
        sum += n;
        count++;

    }
    avg = sum/count;
    cout <<avg<<endl;
    return 0;
}
