using namespace std;
#include <bits/stdc++.h>

int main() {
  int N;
  int A[100000];
  bool B[100000];
  cin >> N;

  for(int j = 1; j <=N; j++) {
    B[j] = true;
  }

  for(int i = 1; i <=N; i++) {
    cin >> A[i];
    B[A[i]] = false;
  }

  for(int k = 1; k <= N; k++) {

    if(B[k] == true)
      cout << k << ' ';
  }

  return 0;
}
