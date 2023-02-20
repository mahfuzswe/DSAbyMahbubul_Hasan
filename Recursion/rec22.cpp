#include<bits/stdc++.h>
using namespace std;

void getcounting(int n){   
    if(n==0) return; 
    
    cout<<n<<endl;

    getcounting(n-1); 
    

}

int main(){
    
    int n; cin>>n;

    cout<<"Counting: \n";
    getcounting(n);

    return 0;
}

