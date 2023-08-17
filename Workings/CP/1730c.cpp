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
    string i;
    cin >> i;
    vector<int> n;
    rep(it, 0, size(i)){
        string temp(1, i[it]);
        n.push_back(stoi(temp));
    }
    
   
    int i1 = size(n)-1;
    while(i1 >= 0){
        int flag = 0;
        int i2 = i1;
        if (i2 < size(n) && n[i2] == n[i2+1]){
            i1--;
            continue;
        }
        int temp = n[i2]+1;
        while((i2 < size(n)-1)&& (temp > n[i2+1])){
            flag = 1;
            n[i2] = n[i2+1];
            i2++;
            
        }
        
        if (flag){
        n[i2] = min({(temp), (int)9});}
        
        i1--;
    }
    rep(it, 0, n.size()){
        cout << n[it];
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
