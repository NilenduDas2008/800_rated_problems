#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin >> n;

      int sum = 0;
      int a,b,c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2){       
            sum+=1;
            }
            
    }
    cout << sum;
}