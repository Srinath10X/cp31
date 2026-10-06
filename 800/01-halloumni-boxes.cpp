#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    bool is_sorted = true;

    for (int i = 0; i < n; ++i) {
      cin >> nums[i];

      if (i > 0 && nums[i] < nums[i - 1]) {
        is_sorted = false;
      }
    }

    if (is_sorted || k >= 2) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }

  return 0;
}
