#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin>>n;

    // for(int i=0; i<n; i++){
    //     cout<<"Hello world!\n";
    // }

    // Equivalent recursion:
    void FOR(int i, int n){
        if(i==n) return; //terminates
        cout<<"Hello world!\n";
        FOR(i+1,n); //go to next step
    }

    return 0;
}