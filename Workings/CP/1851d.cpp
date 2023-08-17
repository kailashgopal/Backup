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
    int t; cin >> t;
    int a[t-1] = {0};
    rep(i, 0, t-1){cin >> a[i];}
    if (a[t-2]> t*(t+1)/2){cout << "NO\n"; return;}
    else{
        if (a[t-2] != t*(t+1)/2){
            //cout << a[t-2] << '*';
            si m1, m2; rep(i, 1, t+1){m2.insert(i);}
            m1.insert(t*(t+1)/2 - a[t-2]);
            m1.insert(a[0]);
            rep(i, 0, t-2){m1.insert(a[i+1] - a[i]);}
            if (m1  == m2){cout << "YES\n";return;}
            else{cout << "NO\n";return;}
        }
        else{
            si m2; rep(i, 1, t+1){m2.insert(i);}
            int b[t-1] = {0};
            int flag = 0; int c = 0;
            b[0] = a[0]; if (b[0] > t){flag = 1; c = 0;}
            rep(i, 0, t-2){b[i+1] = a[i+1]-a[i]; if (b[i+1] > t){flag = 1; c = i+1;}}
            if (flag == 1){
                rep(i, 0, t-1){
                    if (i == c){continue;}
                    else{
                        if (m2.count(b[i]) > 0){m2.erase(b[i]);}
                    }
                }
                int sum1 = std::accumulate(m2.begin(), m2.end(), 0);
                int sum2 = b[c];
                //cout << sum1<< '|' << sum2 << "||" ;
                if (sum1 == b[c]){cout << "YES\n";}
                else{cout << "NO\n";}
            }
            else{
                si m1;
                rep(i, 0, t-1){
                    if (m2.count(b[i]) > 0){m2.erase(b[i]);}
                    else{m1.insert(b[i]);}
                }
                if (m1.size()!=1){cout << "NO\n";}
                else{
                    int sum1 = std::accumulate(m2.begin(), m2.end(), 0);
                    int sum2 = std::accumulate(m1.begin(), m1.end(), 0);
                    if (sum1 == sum2){
                        cout << "YES\n";
                    }
                    else{cout << "NO\n";}
                }

            }
        }
    }
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


