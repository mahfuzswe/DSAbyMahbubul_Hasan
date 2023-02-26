#include<bits/stdc++.h>
using namespace std;

int isPali(char *s, int l, int r){
    return ((l >= r) || (s[l] == s[r] && isPali(s,l+1,r-1)));
}

int main(){
    
    char str[100];
    scanf("%s", str);

    if(isPali(str,0,strlen(str)-1)){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}

