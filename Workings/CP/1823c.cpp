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
    map <int, int> a;
    rep(i, 0, n){
        int m;
        cin >> m;
        rep(i, 2, sqrt(m)+1){
            while (m % i == 0){
                m = m/i;
                a[i]++;
            } 
        }
        if (m!= 1){
            a[m] ++;
        }
    }
    int n_pair = 0;
    int n_single = 0;
    for(auto i: a){
        n_pair += i.second / 2;
        n_single += i.second%2;
    }
    n_pair += n_single/3;
    cout << n_pair << '\n';
    

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
