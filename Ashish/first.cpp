#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={1,7,9,5,2,1,8,10};

    sort(arr,arr+8);

    // linear search
    int x = 2;

    for(int i=0;i<8;i++){
        if(arr[i]==x){
            cout<<i<<endl;
        }
    }

    // binary search O(log2(N))

    int low = 0;
    int high = 8;
    int loc = -1;
    int mid = low  + (high-low)/2;
    while(low!=high){
        int mid = low  + (high-low)/2;
        if(arr[mid]==x){
            loc = mid;
        }else if(arr[mid]<x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    // ternary search O(log3(N))


    vector<int> vec({1,7,9,5,2,1,8,10});

    vec.push_back(9);
    
    sort(vec.begin(),vec.end());    
    return 0;
}

