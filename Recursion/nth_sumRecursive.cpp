#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;  // Base Case
    return sum(n-1)+n;// Recursive Call
}

int main(){
    
    int n; cin>>n;
    cout<<"sum of first "<<n<<" natural numbers: ";
    cout<<sum(n)<<endl;
    
    return 0;
}

