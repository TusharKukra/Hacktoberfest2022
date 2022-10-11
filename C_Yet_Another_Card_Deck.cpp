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
    int n, q; cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }

    int x;
    // cout << q << endl;
    while(q--){
        cin >> x;
        int p = find(a, a+n, x) - a;
        cout << p+1 << " ";
        rotate(a, a+p, a+p+1);
    }
    cout << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
      solve();
   
   return 0;
}