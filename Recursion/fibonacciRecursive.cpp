#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    //Base Case
    if(n==1) return 1;
    if(n==2) return 1;

    //Recursive Case
    return fib(n-1) + fib(n-2);
}

int main(){
    
    int n; cin>>n;

    cout<<fib(n)<<endl;
 
    return 0;
}

