#include <ios>
#include <iostream>
#include <numeric>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int t;
    std::cin >> t;
    unsigned long long a, b;
    while (t-- > 0) {
        std::cin >> a >> b;
        if (a == 1) {
            std::println("{}", b * b);
        } else if (std::gcd(a, b) == 1 || b % a != 0) {
            std::println("{}", std::lcm(a, b));
        } else {
            for (unsigned long long extra_factor = 2; ; ++extra_factor) {
                if (b % extra_factor == 0) {
                    std::println("{}", extra_factor * b);
                    break;
                }
            }
        }
    }
    return 0;
}
