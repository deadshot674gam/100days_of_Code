#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,m,a;
    cin>>n>>m>>a;
    unsigned long long ans = ceil(n/a)*ceil(m/a);
    cout<<ans<<endl;
    return 0;
}