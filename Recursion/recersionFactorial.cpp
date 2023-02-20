#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    //Base Condition
    if(n<=1) return 1;

    int ans = getFactorial(n-1)*n;
    return ans;
}

int main(){
    
    int n; cin>>n;

    cout<<"value of factorial is: "<<getFactorial(n)<<endl;
    
    return 0;
}

//HW--> this code ki time complexity , memory complexity kiya hai?
// O(1)