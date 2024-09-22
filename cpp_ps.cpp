#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("arch=haswell")
using namespace std;
using i64 = int64_t;
using pii = pair<i64, i64>;
using vi = vector<i64>;
using v2i = vector<vi>;

int main() {
  i64 n, m, k, res;

  cin >> n >> m;
  vi a(n, 0), b(n, 0), c(n, 0);

  for (i64 i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  res = a[0];
  cout << res;
  return 0;
}
