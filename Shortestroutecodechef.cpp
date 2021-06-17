#include <bits/stdc++.h>
#define lim 1000000007
#define rep(a,b,step) for(int i=a;i<b;i+=step)
#define min(a,b) (a>b)?b:a
#define max(a,b) (a>b)?a:b
using namespace std;

ostream &operator<<(ostream &os, vector<long long> arr){                              
    for (int i = 0; i < arr.size(); ++i){                                       
        os << arr[i] << " ";                                                    
    }                                                                           
    return os;                                                                  
}    
void solve(){
    unsigned long N,M;
    cin>>N>>M;
    vector<unsigned> vec;
    for(unsigned long i = 0;i<N;i++){
        unsigned j ;
        cin>>j;
        vec.push_back(j);
    }
    vector<long long> dist1(N),dist2(N);
    long long axis = -1;
    for(unsigned long i=0;i<N;++i){
        if(axis==-1 && vec.at(i)!=1){
            dist1[i] = -1;
        }else if(vec.at(i) == 1){
            axis = i;
            dist1[i] = 0;
        }else{
            dist1[i] = i-axis;
        }
    }
    // cout<<dist1<<endl;
    axis = -1;
    // cout<<"OK"<<endl;
    for( long long i=N-1;i>-1;i--){
        // cout<<"OK"<<endl;
        if(axis==-1 && vec.at(i)!=2){
            dist2[i] = -1;
        }else if(vec.at(i) == 2){
            axis = i;
            dist2[i] = 0;
        }else{
            dist2[i] = axis-i;
        }
    }
    // cout<<dist2<<endl;
    
    while(M>0){
        unsigned long B;
        cin>>B;
        // cout<<B<<endl;
        if(dist1[B-1]==-1 && dist2[B-1]==-1){
            cout<<-1;
        }else{
            if(dist1[B-1]!= -1 && dist2[B-1]!=-1){
                if(dist1[B-1]<dist2[B-1]){
                    cout<<dist1[B-1];
                }else{
                    cout<<dist2[B-1];
                }
            }else{
                if(dist1[B-1]==-1){
                    cout<<dist2[B-1];
                }else{
                    cout<<dist1[B-1];
                }
            }
        }
        cout<<" ";
        M--;
    }
    cout<<endl;
}
int main() {
    
    unsigned int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}
