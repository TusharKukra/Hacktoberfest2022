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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];    
       a[i] %= 4;     
    }
    // for(int i = 0; i < n; i++){
    //    cout << a[i] << " ";   
    // }
    // cout << endl;
    int zero = 0;
    for(int i = 0; i < n; i++){
       if(a[i] == 0) zero++;     
    }
    if(!(zero&1)) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}