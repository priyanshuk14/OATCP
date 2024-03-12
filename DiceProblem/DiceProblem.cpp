#include<bits/stdc++.h>
using namespace std;

int modulo = 1000000007;
 
int countCombinations(int n, vector<int> &dp){
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
 
    int res = 0;
    for (int i = 1; i <= 6; i++){
        res += countCombinations(n - i, dp);
        res %= modulo;
    }
    return dp[n] = res;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> dp(n + 1, -1);
        cout<<countCombinations(n, dp)<<endl;
    }
    return 0;
}