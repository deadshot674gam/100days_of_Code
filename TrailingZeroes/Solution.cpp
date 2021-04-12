#include<bits/stdc++.h>
using namespace std;

unsigned long long trailingZeroes(int n){
    unsigned long long num = 0;
    for(int i=5;i<=n;i*=5){
        num+=n/i;
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    cout<<trailingZeroes(n)<<endl;
    return 0;
}