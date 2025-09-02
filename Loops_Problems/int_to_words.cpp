#include<iostream>
using namespace std;
void printWord(int d){ 
    switch(d) {
        case 0: cout << "zero"; break;
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
    }
}

int main(){
    int n;
    cin >> n;
    int temp = n;
    int div = 1;
   
    while(temp >= 10){
        div *= 10;
        temp /= 10;
    }
    while(div > 0){
        int d = n/div;
        printWord(d);
        
        n %= div; 
        div /= 10;
        if(div > 0)cout<<" ";
    }
    cout <<endl;
}
