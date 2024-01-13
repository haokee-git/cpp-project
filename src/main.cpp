#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> v;

int main() {
  cin >> n;
  for (int o, x; n; n--) {
    cin >> o >> x;
    switch (o) {
      case 1:
        v.insert(lower_bound(v.begin(), v.end(), x), x);
        break;
      case 2:
        v.erase(find(v.begin(), v.end(), x));
        break;
      case 3:
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << '\n';
        break;
      case 4:
        cout << v[x - 1] << '\n';
        break;
      case 5:
        cout << *prev(lower_bound(v.begin(), v.end(), x)) << '\n';
        break;
      default:
        cout << *upper_bound(v.begin(), v.end(), x) << '\n';
    }
  }
  return 0;
}