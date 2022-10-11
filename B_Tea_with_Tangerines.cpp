//∑i=1n⌈ai2⋅x−1⌉.

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
//---------------------------------------------------------------------------------
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }
    sort(a, a+n);
    if(a[0] == 1){
        cout << accumulate(a, a+n, 0)-n << endl;
        return;
    }
    int ans = 0;
    int div = 2*a[0]-1;
    for(int i = 1; i < n; i++){
        if( (a[i] + 2*a[0] - 2) / (2*a[0] - 1) > 1){
            ans += (a[i] + 2*a[0] - 2) / (2*a[0] - 1) - 1;
        }
    }
    cout << ans << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}