#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "\n" << endl;
    int i;
    for (i=1; i<=100; ++i) {
        int fizz = i % 3 == 0;
        int buzz = i % 5 == 0;
        if (fizz && buzz) {
            cout << "FizzBuzz" << endl;
        } else if (fizz) {
            cout << "Fizz" << endl;
        } else if (buzz) {
            cout << "Buzz" << endl;
        } else{
            cout << i << endl;
        }
    }
    return 0;
}
