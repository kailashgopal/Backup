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

int n, m;
int a[1024][1024];
int vis[1024][1024] = {0};


int dfs(int i, int j){
    int ans = a[i][j];
    //cout << ans << '|';
    vis[i][j] = 1;
    if (i!= 0 && vis[i-1][j] == 0 && a[i-1][j] != 0){
        ans = ans + dfs(i-1, j);
    }
    if (i!= m-1 && vis[i+1][j] == 0 && a[i+1][j] != 0){
        ans += dfs(i+1, j);
    }
    if (j!= 0 && vis[i][j-1] == 0 && a[i][j-1] != 0){
        ans += dfs(i, j-1);
    }
    if (j!= n-1 && vis[i][j+1] == 0 && a[i][j+1] != 0){
        ans += dfs(i, j+1);
    }
    return ans;
}


void solve()
{
    cin >> m >> n;
    rep(i, 0, m){
        rep(j, 0, n){
            cin >> a[i][j];
            vis[i][j] = 0;
        }
    }
    int ans = 0;
    rep(i, 0, m){
        rep(j, 0, n){
            //cout << vis[i][j] << '|';
            if (vis[i][j] == 0 && a[i][j] != 0){
                ans = max(dfs(i, j), ans);
            }
        }
    }
    cout << ans << '\n';

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
