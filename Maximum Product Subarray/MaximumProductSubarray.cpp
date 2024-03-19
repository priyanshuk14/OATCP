#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    int res = INT_MIN;
    int temp = 1;
    for (int i = 0; i < n; i++){
        temp *= arr[i];
        res = max(temp, res);
        if (temp == 0){
            temp = 1;
        }
    }

    temp = 1;

    for (int i = n-1; i>=0; i--){
        temp *= arr[i];
        res = max(res, temp);
        if (temp == 0){
            temp = 1;
        }
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    int maxProduct = solve(numbers, n);
    cout << maxProduct;

    return 0;
}