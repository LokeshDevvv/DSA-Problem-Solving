/*
Problem Description
Write a program to insert an element into an array at a specified position.

You are given:
- An integer N representing the size of the array.
- An array of N integers.
- An integer X (1-based index) representing the position where a new element should be inserted.
- An integer Y representing the value to be inserted.

Note:
- X is based on 1-based indexing.
- When an element is inserted at position X, all elements that were originally at position >= X shift one step to the right. No element is overwritten.

Problem Constraints
1 <= N <= 100
1 <= A[i] <= 1000
1 <= X <= N
1 <= Y <= 1000

Input Format
- First line: Integer N (size of array).
- Second line: N space-separated integers (array elements).
- Third line: Integer X (position to insert).
- Fourth line: Integer Y (value to insert).

Output Format
Print N+1 space-separated integers — the updated array after inserting the element.

Example Input
Input 1:
5
2 3 1 4 2
3
5

Input 2:
4
10 20 30 40
1
99

Input 3:
6
1 2 3 4 5 6
6
100

Example Output
Output 1:
2 3 5 1 4 2

Output 2:
99 10 20 30 40

Output 3:
1 2 3 4 5 100 6

Example Explanation
Explanation 1:
Insert 5 at the 3rd position → [2, 3, 5, 1, 4, 2].

Explanation 2:
Insert 99 at the 1st position → [99, 10, 20, 30, 40].

Explanation 3:
Insert 100 at the 6th position → [1, 2, 3, 4, 5, 100, 6].
*/

#include<iostream>
#include<vector>
using namespace std;

void Insert_optimize(vector<int> &x,int k,int n){
    x.push_back(0);
    int s = x.size();
    int j = 0;
    for(int i = s-1;i > k-1 ;i--){
        x[i] = x[i-1];
    }
    x[k-1] = n;
}
vector<int>  Insert(vector<int> x,int k,int n){
    int s = x.size();
    vector<int> a(s+1);
    for(int i = 0;i<s+1;i++){
        if(i < k- 1)a[i] = x[i];
        else if(i == k- 1) a[i] = n;
        else{
            a[i] = x[i-1];
        }
    }
    return a;
}

int main(){
    int s;
    cin >> s;
    vector<int> x(s);
    for(int i = 0;i<s;i++){
        cin >> x[i];
    }
    int k,n;
    cin >> k>>n;
   vector<int> ans = Insert(x,k,n);

   Insert_optimize(x,k,n);
   
   for(int i = 0 ;i<x.size();i++){
       cout<<x[i] <<" ";
   }
   cout<<endl;
   cout<<"HH"<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
