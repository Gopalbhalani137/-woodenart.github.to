#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define el '\n'
#define sz size()
#define pb push_back
#define int long long
#define fr(n, i) for (int i = 0; i < n; i++)
#define fr1(n, i) for (int i = 1; i < n; i++)
#define all(zoz) zoz.begin(), zoz.end()
#define allr(zoz) zoz.rbegin(), zoz.rend()
#define fast_zoz ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0)
void zoz()
{
#ifndef ONLINE_JUDGE
  freopen("inp", "r", stdin);
  freopen("out", "w", stdout);
#endif
}
int n, m, k;
int const N = 5 * 1e5 + 5;
int const M = 10e3;
int Mod = 1e9 + 7;
// int OO = 0x3f3f3f3f;
int OO = 1e18;
int ar[9][9];
void ziad()
{
  int n, m;
  cin >> n >> m;
  int ar[n][m];
  int mp[n * m]={};
  fr(n, i)
  {
    fr(m, j) cin >> ar[i][j], mp[ar[i][j]] = i + 1;
  }
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    ans.pb(mp[i]);
  }
 
  for (int i = 0; i < n * m - 1; i++)
  {
    if (mp[i] != ans[i % n])
    {
      cout << -1 << el;
      return;
    }
  }
  fr(n, i) cout << ans[i] << ' ';
  cout << el;
}
 
signed main()
{
  fast_zoz;
  zoz();
  int testcase = 1;
  cin >> testcase;
  for (int i = 1; i <= testcase; i++)
  {
    ziad();
  }
  return 0;
}