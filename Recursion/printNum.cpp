#include<bits/stdc++.h>
using namespace std;

// void print(int i, int n){
    
//     if(i>n) return; //Base Case

//     printf("%d ",i);

//     print(i+1,n); // Recursive Call
//     // 1 যোগ করে আবার কল দিব। এই ব্যাপারটা লক্ষণীয়। আমরা 1 যোগ করার মাধ্যমে
//     // রিকার্শনটাকে তার বেস কেসের দিকে নিয়ে যাচ্ছি। ফলে একটা সময় n এর থেকে
//     // বড় নাম্বার দিয়ে কল হবে এবং ফাংশন রিটার্ন করা শুরু করবে। 

// }


void print(int i, int n){
    
    if(i>n) return; //Base Case

    print(i+1,n); // Recursive Call

    printf("%d ",i);

    

}



int main(){

    print(1,5);    //i=1, n=5;

    return 0;
}

