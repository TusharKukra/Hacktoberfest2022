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
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        m[s[i]-'a']++;
    }
    int pair = 0;
    for(auto &it: m){
        pair += it.second/2;
    }
    int want = n/k;
    while(want){
        // cout << want << " " << want/2*k << endl;
        if(want/2*k <= pair){
            cout << want << endl;
            break;
        }
        want--;
    }
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}