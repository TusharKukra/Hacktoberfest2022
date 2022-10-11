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
    string s; cin >> s;
    vector<int> t, m;
    loop{
        if(s[i]=='T') t.push_back(i);
        else m.push_back(i);
    }
    if(m.size()*2 != t.size()){
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < m.size(); i++){
        if(m[i] < t[i] || m[i] > t[i+m.size()]){
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