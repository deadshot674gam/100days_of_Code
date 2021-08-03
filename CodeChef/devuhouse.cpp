#include <bits/stdc++.h>
#define lim 1000000007
#define rep(a,b,step) for(int i=a;i<b;i+=step)
#define min(a,b) (a>b)?b:a
#define max(a,b) (a>b)?a:b
using namespace std;

typedef unsigned long ul;
typedef unsigned long long ull;
typedef long long ll;


vector<ull> fact(1000000,1);
void factorial(){
    for (ull i = 2;i<1000000;i++){
        fact[i] = i* fact[i-1];
    }
    
}
void solve(){
    
    ull x,y,M;
    cin>>M>>x>>y;
    
    vector<int> arr(101);
    
    for (int i = 0; i < M; i++){
        int house;
        cin>>house;
        for (int j = max(house-x*y,1); j <= min(house+x*y , 100); j++)        arr[j] = 1;
    }
    
    ul total = 0;
    for (int i = 1; i <= 100; i++){
        if (arr[i] == 0)
            total++;
    }
    cout<<total<<endl;
}
int main() {
    // factorial();
    unsigned int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}
