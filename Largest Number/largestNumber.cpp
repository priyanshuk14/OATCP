#include<bits/stdc++.h>
using namespace std;

string largestNumber(vector<int>& nums) {
    vector<string> temp;
    
    for(auto it: nums){
        temp.push_back(to_string(it));
    }
    
    sort(temp.begin(), temp.end(), [](string &a, string&b){
        return a + b > b + a;
    });
    
    string res;
    for(auto it: temp){
        res += it;
    }
    
    int i = 0;
    while(res[i] == '0' && i + 1 < res.size()){
        i++;
    }
    
    return res.substr(i);
}

int main(){
    ifstream infile("Largest_Number_2.txt");
    vector<int> nums;
    int num;
    while (infile >> num) {
        nums.push_back(num);
    }

    string result = largestNumber(nums);

    ofstream outfile("output_2.txt");
    outfile << result;

    return 0;
}