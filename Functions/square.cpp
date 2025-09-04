/*Problem Description
Given a number A. Return the square of the number.

Problem Constraints
1 <= A <= 10^4
Input Format
First argument is an integer A.
Output Format
Return an integer which is the square of A.

Example Input
Input 1:
A = 4
Input 2:
A = 14

Example Output
Output 1:
16
Output 2:
196

Example Explanation
Explanation 1:
square(4) = 16
Explanation 2:
square(14) = 196
*/
#include<iostream>
using namespace std;

int sqaure(int x){
    return x*x;
}
int main(){
    int x;
    cin >> x ;
    cout << sqaure(x)<<endl;
    return 0;
}
