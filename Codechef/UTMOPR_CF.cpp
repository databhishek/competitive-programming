using namespace std;
#include <bits/stdc++.h>

int main() {
  double avg;
  int T;
  long A[10001];
  int N, K;
  cin >> T;
  while(T--) {
    avg = 0;
    cin >> N >> K;
    REP(i, N)
      cin >> A[i];
   
    sort(A, A+N);
    
    for(int i = K; i < N-K; i++)
      avg += A[i];
    
    cout << fixed << setprecision(6) << avg/(N-2*K) << '\n';
  }

  return 0;
}
