#include<bits/stdc++.h>
using namespace std;
vector<long long> vec(10000000,-1);

unsigned long long nthFibonacciBottomUp(unsigned long long n){
    vector<unsigned long long> f(n+1);
    f[0] =0;
    f[1] = 1;
    for(unsigned long long i=2;i<=n;++i){
        f[i] = f[i-1]  + f[i-2];
    }

    return f[n];
}


unsigned long long nthFibonacciTopDown(unsigned long long n){
    if(vec.at(n)==-1){
        unsigned long res;
        if(n==1 ||  n==0)
        res =  n;
        else
        res = nthFibonacciTopDown(n-1) + nthFibonacciTopDown(n-2);
        vec[n] = res;
        
    }
    return vec[n];
}
int main(){
    int n;
    cin>>n;
    cout<<nthFibonacciTopDown(n)<<endl;
    cout<<nthFibonacciBottomUp(n)<<endl;

    return 0;
}