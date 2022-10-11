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

    int ct = 0;
    map<pair<int, int>, int> m;
    int pre = 0;
    int index = 1;
    int piche = 0;
    for(int i = 0; i < n; i++){
        // cout << i << " " << a[i] << " " << ct << " ";
       if(a[i] >= index){
        ct++;
        index++;
       }
       else{
        m[{piche, i-1}] = ct;
        ct = 0;
        index = 1;
        i -= a[i];
        piche = i+1;
       }  
    //    cout << ct << endl;    
    }
    // cout << endl;
    if(ct != 0) m[{piche, n-1}] = ct;

    // for(auto &it: m) cout << it.first.first << " " << it.first.second << " - > " << it.second << endl;

    //we dont have overlaps
    int ans = 0;
    for(auto &it: m){
        int x = it.second;
        ans += x*(x+1)/2;
    }

    //considering the overlaps
    vector<pair<int, int>> v;
    for(auto &it: m){
        v.push_back({it.first.first, it.first.second});
    }
    int p = v[0].second;
    for(int i = 1; i < v.size(); i++){
        int now = v[i].first;
        if(now <= p){
            int temp = now - p + 1;
            // cout << temp << endl;
            ans -= temp*(temp+1)/2;
        }
        p = v[i].second;
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