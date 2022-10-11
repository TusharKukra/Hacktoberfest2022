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

const int N = 1e12;
 
int countDigit(long long n){
return floor(log10(n) + 1);
}
//-----------------------------------------------------------------------------
set<int> cubes;
void pre(){
    for(int i = 1; i*i*i <= N; i++){
        cubes.insert(i*i*i);
    }
}

void solve(){
    int x; cin >> x;
    for(int i = 1; i*i*i <= x; i++){
        int b = x-pow(i, 3);
        if(cubes.count(b)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
//----------------------------------------------------------------------------
int32_t main(){
    pre();
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}