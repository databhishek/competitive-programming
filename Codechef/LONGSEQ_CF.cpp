using namespace std;
#include <bits/stdc++.h>

int main() {
  int T;
  char D[100001];
  int zero, one;
  cin >> T;
  while(T--) {
    cin >> D;
    zero = 0;
    one = 0;
    for(int i = 0; i < strlen(D); i++) {
      if(D[i] == '0')
        zero++;
      else
        one++;
    }
    if(zero == 1 || one == 1)
      cout << "Yes\n";
    else
      cout << "No\n";

  }
  return 0;
}
