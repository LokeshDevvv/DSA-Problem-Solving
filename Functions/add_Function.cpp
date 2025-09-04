/*
 Problem Description

Given two numbers A and B, return their sum.

Problem Constraints

1
≤
𝐴
≤
10
7
1≤A≤10
7

1
≤
𝐵
≤
10
7
1≤B≤10
7

Input Format

First argument is an integer A.

Second argument is an integer B.

Output Format

Return a single integer which is the sum of A and B.

Example Input

Input 1:
A = 4, B = 3

Input 2:
A = 14, B = 34

Example Output

Output 1:
7

Output 2:
48

Example Explanation

Explanation 1:

4
+
3
=
7
4+3=7

Explanation 2:

14
+
34
=
48
14+34=48
*/


#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int main(){
    int x,y;
    cin >> x >>y;
    cout << add(x,y)<<endl;
    return 0;
}
