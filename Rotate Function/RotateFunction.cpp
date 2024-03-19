#include<bits/stdc++.h>
using namespace std;
 
int solve(int arr[], int n){
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
 
    int current = 0;
    for (int i=0; i<n; i++)
        current += i*arr[i];
 
    int maxProduct = current;

    for (int i=1; i<n; i++){
        int next = current - (sum - arr[i-1]) + arr[i-1] * (n-1);
        current = next;
        maxProduct = max(maxProduct, next);
    }
 
    return maxProduct;
}
 
int main(){
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    int maxValue = solve(numbers, n);
    cout << maxValue;

    return 0;
}