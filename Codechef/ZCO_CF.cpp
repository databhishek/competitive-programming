using namespace std;
#include <bits/stdc++.h>

int main() {
  int N;
  long long A[10000];
  cin >> N;
  int i;
  long long maxp = 0;
  for(i = 0; i < N; i++)
    cin >> A[i];

  for(i = 1; i < N; i++) {
    long long key = A[i];
    int j = i-1;
    while(A[j] > key && j >= 0) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
  }

  for(i = 0; i < N; i++) {
    if(A[i]*(N-i) > maxp)
      maxp = A[i]*(N-i);
  }
  cout << maxp;

  return 0;
}
