#include <iostream>
using namespace std;

int main() {
  
    int t;
    if (cin >> t) {
        while (t--) {
            
            long long n, k;
            cin >> n >> k;

            if (k == 1) {
                cout << n << "\n";
                continue;
            }

            long long operacoes = 0;
            
            while (n > 0) {
                operacoes += n % k;
                n /= k;
            }

            cout << operacoes << "\n";
        }
    }
    return 0;
}