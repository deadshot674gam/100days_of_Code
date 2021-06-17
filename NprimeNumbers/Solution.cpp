#include<bits/stdc++.h>
using namespace std;

void printAllPrime(unsigned long long n){
    vector<unsigned long long> vec(n+1,1);
    
    vec[0] =0;
    vec[1] =0;
    for(size_t i = 2;i<=n;++i){
        if(vec.at(i)==1){
            for(size_t j = 2;j*i<=n;++j){
                vec[i*j] = 0;
            }
        }
    }

    for(int i=2;i<=n;++i){
        if(vec.at(i)!=0){
            cout<<i<<endl;
        }
    }
}


int main(){
    int T;
    cin>>T;
    while(T--){
        unsigned long long n;
        cin>>n;

        printAllPrime(n);
        cout<<endl;
    }
    return 0;
}