#include<bits/stdc++.h>
using namespace std;

void printSum(int i, int n, int sum){

    if(i==n) {
        sum += i;
        cout<<sum<<endl;
        return;
    }
    sum += i;
    printSum(i+1,n,sum);
    cout<<i<<endl;
}

int main(){
    // int i,n; cin>>i>>n;
    printSum(1,5,0);
}

  