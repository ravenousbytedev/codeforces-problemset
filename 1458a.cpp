#include <ios>
#include <iostream>
#include <numeric>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n, m;
    std::cin >> n >> m;
    long long a1, ai, g = 0;
    std::cin >> a1;
    while (--n > 0) {
        std::cin >> ai;
        g = std::gcd(g, ai - a1);
    }
    long long bj;
    while (m-- > 0) {
        std::cin >> bj;
        std::print("{} ", std::gcd(a1 + bj, g));
    }
    std::println();
    return 0;
}
