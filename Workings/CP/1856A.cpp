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
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    int max1 = 0;
    rep(i, 0, n){
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    rep(i, 0, n){
        if (arr2[n-1-i] != arr[n-1-i]){
            cout << arr2[n-1-i] << '\n';
            return;
        }
    }
    cout << 0 << '\n';
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