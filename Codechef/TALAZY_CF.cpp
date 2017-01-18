using namespace std;
#include <bits/stdc++.h>

int main() {
  int T;
  long long N, B, M;
  cin >> T;
  long long time;
  while(T--) {
    time = 0;
    cin >> N >> B >> M;
    while(N) {
      if(N%2 == 1)
        time += ((N+1)/2)*M;
      else
        time += (N/2)*M;
      N /= 2;
      if(N != 0)
        time += B;
      M *= 2;
    }
    cout << time<< '\n';
  }
  return 0;
}
