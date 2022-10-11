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
    }
    int b[n+1];
    b[0] = a[0];
    for(int i = 0; i < n-1; i++){
        b[i+1] = a[i];
        // cout << b[i+1];
        if(b[i+1]%a[i+1] != 0){
            b[i+1] *= a[i+1]/__gcd(a[i+1], b[i+1]);
        }
        // cout << " now " << b[i+1] << " " << a[i+1] << endl;
    }
    b[n] = a[n-1];

    // cout << "the bs" << endl;
    // for(int i = 0; i < n+1; i++) cout << b[i] << " ";
    // cout << endl;

    for(int i = 0; i < n; i++){
        if(__gcd(b[i], b[i+1]) != a[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}