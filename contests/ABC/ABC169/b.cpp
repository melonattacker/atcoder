#include <bits/stdc++.h>
using namespace std;

std::ostream &operator<<(std::ostream &dest, __int128_t value) {
  std::ostream::sentry s(dest);
  if (s) {
    __uint128_t tmp = value < 0 ? -value : value;
    char buffer[128];
    char *d = std::end(buffer);
    do {
      --d;
      *d = "0123456789"[tmp % 10];
      tmp /= 10;
    } while (tmp != 0);
    if (value < 0) {
      --d;
      *d = '-';
    }
    int len = std::end(buffer) - d;
    if (dest.rdbuf()->sputn(d, len) != len) {
      dest.setstate(std::ios_base::badbit);
    }
  }
  return dest;
}

int main() {
    int N;
    __int128 ans;
    cin >> N;

    vector<long long> input(N);

    ans = 1;

    for(int i = 0; i < N; i++) {
        cin >> input[i];
        if(input[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i = 0; i < N; i++) {
        if(ans * input[i] > (long long) pow(10, 18)) {
            cout << -1 << endl;
            return 0;
        } else {
            ans *= input[i];
        }
    }

    cout << ans << endl;
}