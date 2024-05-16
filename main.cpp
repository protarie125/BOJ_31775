#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s1, s2, s3;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s1 >> s2 >> s3;
  auto v1 = 0;
  auto v2 = 0;
  auto v3 = 0;

  if ('l' == s1[0]) {
    v1 = 1;
  }
  if ('l' == s2[0]) {
    v1 = 1;
  }
  if ('l' == s3[0]) {
    v1 = 1;
  }

  if ('k' == s1[0]) {
    v2 = 1;
  }
  if ('k' == s2[0]) {
    v2 = 1;
  }
  if ('k' == s3[0]) {
    v2 = 1;
  }

  if ('p' == s1[0]) {
    v3 = 1;
  }
  if ('p' == s2[0]) {
    v3 = 1;
  }
  if ('p' == s3[0]) {
    v3 = 1;
  }

  const auto& ans = v1 * v2 * v3;
  if (1 == ans) {
    cout << "GLOBAL";
  } else {
    cout << "PONIX";
  }

  return 0;
}