 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    string s;
    cin >> s;
    
    set<char> st(s.begin(),s.end());
    int count = st.size();
    if (count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else if(count % 2 != 0){
        cout << "IGNORE HIM!";
    }
 }  