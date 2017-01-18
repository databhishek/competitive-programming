using namespace std;
#include <iostream>

int main() {
  long long n;
  n = 1;
  while(n != 0) {
    cin >> n;
    if(n != 0)
      cout << n*(n+1)*(2*n+1)/6 << endl;
  }

  return 0;
}
