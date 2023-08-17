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

int is_prime(int n){
    int flag = 0;
    rep(i, 2, sqrt(n)+1){
        if (n%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        return 0;
    }
    return 1;
}

void solve()
{
    int m, n; cin >> m >> n;
    int grid[m][n] = {0};
    if (is_prime(m)){
        if (is_prime(n)){
            int ct = 1;
            int f = 1;
            rep(j, 0, n){
                rep(i, 0, m){
                    grid[i][j] = ct;
                    ct++;
                }
                ct = ct + m;
                if (ct >= m*n){
                        ct = 1 + m;
                    }
                  }
        }
        else{
            int ct = 1;
            rep(i, 0, m){
                rep(j, 0, n){
                    grid[i][j] = ct;
                    ct++;}
                    }
                    }
                    }
    else{
        int ct = 1;
        rep(j, 0, n){
            rep(i, 0, m){
                grid[i][j] = ct;
                ct++;
            }
        }

    }
    rep(i, 0, m){
        rep(j, 0, n){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
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
