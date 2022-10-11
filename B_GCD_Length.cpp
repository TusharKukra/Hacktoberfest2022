#include<bits/stdc++.h>
// #define int long long
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
    int a, b, c;
    cin >> a >> b >> c;
    int s = 7, t = 3, ans = 1;
    ans *= pow(10, c-1);
    int ans2 = ans;
    while(ceil(log10(ans + 1)) < a) ans *= s;
    while(ceil(log10(ans2 + 1)) < b) ans2 *= t;
    cout << ans << " " << ans2 << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}