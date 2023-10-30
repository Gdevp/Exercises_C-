// First Method
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t1=0;
    int t2=1;
    while (t1 <= 50) {
        int fib;
        cout << t1 << endl;
        fib = t1+t2;
        t1=t2;
        t2=fib;
    }
    return 0;
}
/*---------------------------------------------------------*/
// Second Method
#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
  if (n==0 || n==1) {
    return n;
  } else {
    return fib(n-1)+fib(n-2);
  }
}

int main() {
  int n;
  cout << "Write N terms: ";
  cin >> n;

  for (int i=0; i<n; i++) {
    cout << fib(i) << endl;
  }
  return 0;
}





