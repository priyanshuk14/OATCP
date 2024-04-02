#include<bits/stdc++.h>
using namespace std;

int maxIceBars(int n, vector<int>&values, int coins){
    int ans=0;
    sort(values.begin(),values.end());
    for(int i=0; i<n; i++){
        if(values[i] <= coins){
            coins-=values[i];
            ans++;
        }
        else break;
    }
    return ans;
}

int main(){
    int n, coins;
    vector<int> value;
    cin>>n;
    for (int i=0; i<n; i++){
        int val;
        cin>>val;
        value.push_back(val);
    }
    cin>>coins;
    int res = maxIceBars(n, value, coins);
    cout<<res<<endl;

    return 0;
}