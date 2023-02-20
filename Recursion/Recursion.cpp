#include<bits/stdc++.h>
using namespace std;

//Factorial of N

int fact(int n){
    if(n==0) return 1; //base condition       //O(1)
    return fact(n-1)*n;      //O(1)
     
}

int main(){

    int n; cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}

//Time Complexity: O(1)