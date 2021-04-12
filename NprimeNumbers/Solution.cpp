#include<bits/stdc++.h>
using namespace std;

void printAllPrime(unsigned long long m, unsigned long long n){
    vector<unsigned long long> vec(n);
    for(int i=0;i<n;++i){
        vec[i] = 1;
    }

    for(int i = 0;i<n;++i){
        int k = vec[i];
        int j = 2;
        while(i*j<n){
            vec[i*j] = 0;
            j++;
        }
    }

    for(int i=m+1;i<n;++i){
        if(vec.at(i)!=0){
            cout<<i<<endl;
        }
    }
}


int main(){
    int T;
    cin>>T;
    while(T--){
        unsigned long long m,n;
        cin>>m>>n;

        printAllPrime(m,n);
        cout<<endl;
    }
    return 0;
}