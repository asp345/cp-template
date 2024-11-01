#include <bits/stdc++.h>
/* clang-format off */
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("arch=haswell")
using namespace std; using i64 = int64_t; using u64 = uint64_t; using f64 = double; using f80 = long double; using pii = pair<i64, i64>; template <class T> using vec = vector<T>; using vi = vec<i64>; const i64 MOD = 1e9 + 7; const f80 PI = 3.1415926535897932384626433832795; const i64 INF = (~0U >> 2); template <typename Iterable> void print_iter(const Iterable &v) { cout << "{"; for (auto &x : v) cout << x << ","; cout << "\b}"; }
#define f(i, s, e) for (i64 i = s; i < e; i++)
#define all(x) (x).begin(), (x).end()

i64 t, n, m, k, res;
int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  /* clang-format on */

  // testcases
  cin >> t;
  f(_, 0, t) {
    cin >> n >> m;
    vi a(n, 0);
    f(i, 0, n) {
      cin >> a[i];
    }
  }

  // no testcases
  cin >> n >> m;
  vi a(n, 0);
  f(i, 0, n) {
    cin >> a[i];
  }

  cout << res;
  return 0;
}
