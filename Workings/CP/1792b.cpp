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
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a!=0){cout <<  a + 2*min({b, c}) + min({a, max(b,c) - min(b,c)}) + min({1+a-min({a, max(b,c) - min(b,c)}), d}) << '\n';}
        else{cout << 1 << '\n';} 
     
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