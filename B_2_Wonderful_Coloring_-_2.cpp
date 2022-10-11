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
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }
    map<int, int> colorct;
    map<int, int> m;
    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
       v.push_back({a[i], i, 0});   
       m[a[i]]++;     
    }
    sort(v.begin(), v.end());
    int ct = 0;
    for(auto &it: m){
        ct += min(k, it.second);
    }
    ct = ct/k;
    
    // cout << "the v" << endl;
    // for(int i = 0; i < n; i++){
    //     cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
    // }

    // cout << " theh count " << ct << endl;

    int color = 1;
    v[0][2] = color;
    int vict = 1;
    colorct[color]++;
    for(int i = 1; i < n; i++){
        if(v[i][0] == v[i-1][0]){
            vict++;
            if(vict > k) continue;
        }
        else vict = 1;
        if(vict > k) i++;
        color++;
        if(color > k) color = 1;
        if(i<n){
            if(colorct[color] < ct) v[i][2] = color;
            colorct[color]++;
        }
    }

    // cout << "the v agAIN " << endl;
    // for(int i = 0; i < n; i++){
    //     cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
    // }

    vector<pair<int, int>> lol;
    for(int i = 0; i < n; i++){
        lol.push_back({v[i][1], v[i][2]});
    }
    sort(lol.begin(), lol.end());

    for(int i = 0; i < n; i++){
        cout << lol[i].second << " ";
    }
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