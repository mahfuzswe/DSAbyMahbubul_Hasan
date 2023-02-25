#include<bits/stdc++.h>
using namespace std;

// fast exponentiation
int exp(int n){
    if(n==0) return 1;

    //odd
    int answer = exp(n/2);
    if(n&1){
        return 2*answer*answer;
    }else{
        //even
        return answer*answer;
    }
}




int expTwo(int n){
    if(n==0) return 1;

    int ans = 2*expTwo(n-1);
    cout<<" for n "<<n<<" ans "<<ans<<endl;

    return ans;
}





int main(){

    int n; cin>>n;
    cout<<exp(n)<<endl;

    return 0;
}