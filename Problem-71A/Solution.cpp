#include<bits/stdc++.h>
using namespace std;

ostream &operator<<(ostream &os,vector<string> s){
    for(int i = 0;i<s.size();++i){
        os<<s.at(i)<<endl;
    }
    return os;
}

int main(){
    int n;
    cin>>n;
    vector<string> vec;
    for(int i=0;i<n;++i){
        string a;
        cin>>a;
        
        string ans = a[0] + to_string(a.length()-2) + a[a.length()-1];
        if(a.length()<=10){
            ans = a;
        }
        vec.push_back(ans);
    }
    cout<<vec;    
    return 0;
}