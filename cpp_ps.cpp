#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("arch=haswell")
using namespace std;
using i64 = int64_t;
using u64 = uint64_t;
using f64 = double;
using pii = pair<i64, i64>;
using vi = vector<i64>;
using v2i = vector<vi>;

const i64 MOD = 1e9 + 7;
const f64 PI = 3.1415926535897932384626433832795;

#define f(i, s, e) for (i64 i = s; i < e; i++)

i64 gcd(i64 a, i64 b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  i64 n, m, k, res;

  cin >> n >> m;
  vi a(n, 0), b(n, 0), c(n, 0);
  v2i d(n, vi(m, 0));

  f(i, 0, n) { cin >> a[i] >> b[i] >> c[i]; }

  res = a[0];
  cout << res;
  return 0;
}
