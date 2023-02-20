// #include<bits/stdc++.h>
// using namespace std;

// int getFib(int n){
//     //Base Condition:
//     if(n==0 || n==1){
//         return n;
//     }

//     //how to optimise this overlaping problem?
//     return getFib(n-1) + getFib(n-2);
// }

// int main(){
    
//     cout<<"Enter input: ";
//     int n; cin>>n;

//     cout<<"Value of "<<n<<"th Fibonacci is: "<<getFib(n)<<endl;

    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int getFib(int n){
    if(n==0 || n==1) return n;

    return getFib(n-1)+getFib(n-2);
}


int main(){

    int n; cin>>n;
    cout<<getFib(n)<<endl;

    return 0;
}