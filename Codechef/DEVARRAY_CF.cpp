using namespace std;
#include <bits/stdc++.h>

int main() {
  long N, Q;
  long long t;
  cin >> N >> Q;
  long long max, min;
  max = INT_MIN;
  min = INT_MAX;

  long long A[100001];
  for(int i = 0; i < N; i++) {
    cin >> A[i];
    if(A[i] < min)
      min = A[i];
    if(A[i] > max)
      max = A[i];
  }

  while(Q--) {
    cin >> t;
    if(t <= max && t >= min)
      cout << "Yes\n";
    else
      cout << "No\n";
  }

  return 0;
}