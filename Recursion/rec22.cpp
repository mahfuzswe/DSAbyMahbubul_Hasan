#include<bits/stdc++.h>
using namespace std;

void getcounting(int n){    //3  2
    if(n==0) return;  
    
    cout<<n<<endl;  //3 2

    getcounting(n-1); // 2 1
    

}

int main(){
    
    int n; cin>>n;

    cout<<"Counting: \n";
    getcounting(n);

    return 0;
}

