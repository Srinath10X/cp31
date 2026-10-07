#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr), cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;

    vector<int> points;

    points.push_back(0);

    for (int i = 0; i < n; ++i) {
      int point;
      cin >> point;

      points.push_back(point);
    }

    points.push_back(x);

    int max_distance = 0;

    for (int i = 1; i < points.size(); ++i) {
      if (i == points.size() - 1) {
        max_distance = max(max_distance, 2 * (points[i] - points[i - 1]));
      } else {
        max_distance = max(max_distance, points[i] - points[i - 1]);
      }
    }

    cout << max_distance << "\n";
  }

  return 0;
}
