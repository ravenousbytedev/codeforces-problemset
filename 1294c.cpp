#include <cmath>
#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int t;
    std::cin >> t;
    unsigned int n, a, b, c;
    bool found;
    unsigned int n_sqrt, n_a_sqrt;
    while (t-- > 0) {
        std::cin >> n;
        found = false;
        n_sqrt = std::sqrt(n);
        for (a = 2; a <= n_sqrt; ++a) {
            if (n % a != 0) {
                continue;
            }
            n_a_sqrt = std::sqrt(n / a);
            for (b = 2; b <= n_a_sqrt; ++b) {
                if (a == b || n / a % b != 0) {
                    continue;
                }
                c = n / a / b;
                if (a == c || b == c) {
                    continue;
                }
                found = true;
                break;
            }
            if (found) {
                break;
            }
        }
        if (found) {
            std::println("YES");
            std::println("{} {} {}", a, b, c);
        } else {
            std::println("NO");
        }
    }
    return 0;
}
