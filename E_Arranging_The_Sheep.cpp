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
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(s[i]=='*') v.push_back(i);
    }
    if(v.size() == n || v.size() <= 1){
        cout << 0 << endl;
        return;
    }
    int temp = v.size()/2;
    // cout << v.size() << " temp " << temp << endl;
    int ct = 0, pos = v[temp];
    int minus = 1;
    for(int i = temp-1; i >= 0; i--){
        ct += pos-minus-v[i];
        // cout << pos << " " << minus << " " << v[i] << endl;
        minus++;
        // cout << "ct now " << ct << endl;
    }
    int add = 1;
    for(int i = temp+1; i < v.size(); i++){
        ct += v[i]-(pos+add);
        add++;
    }
    cout << ct << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}