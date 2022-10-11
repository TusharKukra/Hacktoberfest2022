#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define loop for(int i = 0; i < n; i++)
using namespace std;
 
int countDigit(long long n){
return floor(log10(n) + 1);
}
//-----------------------------------------------------------------------------
void solve(){
    string s; cin >> s;
    int n = s.length();
   //  cout << n << endl;
    int flag = 0;
    int num[n];
    loop{num[i] = s[i]-'0';}
    for(int i = n-1; i > 0; i--){
      if(num[i]+num[i-1] >= 10){
         int temp = num[i]+num[i-1];
         num[i] = temp%10;
         num[i-1] = temp / 10;
         flag = 1;
         break;
      }
    }
   //  cout << flag << endl;
    if(!flag){
      // cout << "chala" << endl;
      int index = -1;
      int temp;
      for(int i = 0; i < n-1; i++){
          temp = num[i]+num[i+1];
         //  cout << temp << endl;
         if(temp >= num[i]){
            index = i;
            flag = 1;
            break;
         }
      }
      if(flag){
         for(int i = 0; i < n; i++){
            if(i == index){
               cout << temp ;
               i++;
            }
            else cout << num[i];
         }
         cout << endl;
         return;
      }
    }
    loop{cout << num[i];}
    cout << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}