#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
  
string nums;

for(char c : str) {
    if(c != '+')
        nums += c;
}
sort(nums.begin(), nums.end());

for(int i = 0; i < nums.size(); i++) {
    if(i > 0){
        cout << "+";
    }
    cout << nums[i];
}
}  

// Time: O(nlogn)
// Space: O(n)