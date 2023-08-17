
// Kailash
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vector<int>>
#define vb vector<bool>
#define pi pair<int, int>
#define si set<int>
#define rep(var, l, r) for (int var = l; var < r; var++)

void solve()
{ 
    int n; cin >> n;
    int a[n] = {0}; 
    rep(i, 0, n){
        int p;cin>>p;
        if (p < n+1){
        a[p-1]++;}
    }
    int c[n] = {0};
    rep(i, 1, n+1){
        int k = 1;
        while(i*k <= n){
            c[i*k-1] += a[i-1];
            k++;
        }
    }
    cout << *max_element(c , c + n) << '\n';

}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
