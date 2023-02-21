#include<bits/stdc++.h>
using namespace std;

// Printer for positive integers
void printspell(int n, string str[]){
    // base case
    if(n==0) return;
    
    printspell(n/10,str);

    // int number = n%10;
    // cout<<str[number]<<" ";

    cout<<str[n%10]<<" ";
}


int main(){
    
    cout<<"Enter input: ";
    int n; cin>>n;

    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"Answer is: ";
    printspell(n,str);

    
    return 0;
}

