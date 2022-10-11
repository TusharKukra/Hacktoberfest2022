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
    char a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }
    if(n==1){
        cout << a[0] << a[0] << endl;
        return;
    }
    if(a[0] == a[1]){
        cout << a[0] << a[0] << endl;
        return;
    }
    vector<char> b;
    b.push_back(a[0]);
    for(int i = 1; i < n; i++){
       if(a[i] <= a[i-1]) b.pb(a[i]);
       else break;      
    }
    for(auto &it: b) cout << it;
    reverse(b.begin(), b.end());
    for(auto &it: b) cout << it;
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