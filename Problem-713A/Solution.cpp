#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
 
        vector<vector<char>> vec;
        vector<int> ast;
        for (int i = 0; i < n; ++i)
        {
            vector<char> temp;
            for (int j = 0; j < n; ++j)
            {
                char fool;
                cin>>fool;
                if(fool == '*'){
                    ast.push_back(i);
                    ast.push_back(j);
                }
                temp.push_back(fool);
                
            }
            vec.push_back(temp);
        }

        // cout<<ast.size()<<endl;
        int i1,i2,j1,j2;
        i1 = ast.at(0);
        j1 = ast.at(1);
        i2 = ast.at(2);
        j2 = ast.at(3);
        if((i1!= i2) && (j1!= j2)){
            vec[i1][j2] = '*';
            vec[i2][j1] = '*'; 
        }else if(i1==i2){
            if(i1+1 <n){
                vec[i1+1][j1] = '*';
                vec[i2+1][j2] = '*';
            }else if(i1-1>=0){
                vec[i1-1][j1] = '*';
                vec[i2-1][j2] = '*';
            }
        }else if(j1==j2){
            if((j1+1) <n){
                vec[i1][j1+1] = '*';
                vec[i2][j2+1] = '*';
            }else if((j1-1)>=0){
                vec[i1][j1-1] = '*';
                vec[i2][j2-1] = '*';
            }
        }
 
 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;++j){
                cout<<vec.at(i).at(j);
            }
            cout<<endl;
        }
 
 
    }
 
 
    return 0;
}