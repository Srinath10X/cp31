#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int run = 0;
    int count = 0;

    bool is_consecutive = false;

    for (int i = 0; i < n; ++i) {
      char c;
      cin >> c;

      if (c == '.') {
        run++;
        count++;

        if (run >= 3) is_consecutive = true;
      } else {
        run = 0;
      }
    }

    cout << (is_consecutive ? 2 : count) << endl;
  }

  return 0;
}
