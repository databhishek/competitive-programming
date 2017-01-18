using namespace std;
#include <bits/stdc++.h>

#define REP(i, N) for(int i = 0; i < N; i++)
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define PI 3.141592653589

int main() {
  int a, b;
  int T;
  char s[100];
  cin >> T;
  while(T--) {
    cin >> s;
    a = 0;
    b = 0;

    for(int i = 0; i < strlen(s); i++) {
      if(s[i] == '0')
        b++;
      else
        a++;

      if(a >= 10 && b >= 10) {
        if(a-b == 2) {
          cout << "WIN\n";
          break;
        }
        else if(b-a == 2) {
          cout << "LOSE\n";
          break;
        }
      }
      else if(a == 11) {
        cout << "WIN\n";
        break;
      }
      else if(b == 11) {
        cout << "LOSE\n";
        break;
      }
    }
  }

  return 0;
}
