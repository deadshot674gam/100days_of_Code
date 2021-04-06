#include <bits/stdc++.h>
using namespace std;
float round2(float r,int upto){
    r = (int)(r*pow(100,upto) + 0.5);
    return (float)r/pow(100,upto);
}

bool inrange(float a,int l,int h){
    return (a>l && h>a);
}


int main() {
    
    int T;
    cin>>T;
    while(T--){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        // k1 = round2(k1,1);
        // k2 = round2(k2,1);
        // k3 = round2(k3,1);
        // v = round2(v,2);
        // cout<<"YES";
        if(inrange(k1,0,1) && inrange(k2,0,1) && (k3>0 && k3<=2) && inrange(v,9,11)){
            k1*=k2*k3*v;
            k1 = 100.0/k1;
            k1 = round2(k1,2);
            // cout<<"YES";
            if(k1>=9.58){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
	return 0;
}
