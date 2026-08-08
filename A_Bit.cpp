 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin >> n;
    int result = 0;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
            if(s == "X++" || s == "++X") {
        result++;
        }
        else if(s == "X--" || s == "--X") {
            result--;
        }
        
    
    }
cout << result;
 }







