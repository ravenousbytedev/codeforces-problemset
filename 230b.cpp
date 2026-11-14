#include <cmath>
#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n;
    std::cin >> n;
    unsigned long long xi, xi_sqrt;
    bool is_t_prime;
    while (n-- > 0) {
        std::cin >> xi;
        if (xi == 1) {
            std::println("NO");
            continue;
        }
        xi_sqrt = std::sqrt(xi);
        if (xi_sqrt * xi_sqrt != xi) {
            std::println("NO");
            continue;
        }
        is_t_prime = true;
        for (unsigned long long factor = 2; factor <= std::sqrt(xi_sqrt); ++factor) {
            if (xi_sqrt % factor == 0) {
                is_t_prime = false;
                break;
            }
        }
        std::println("{}", is_t_prime ? "YES" : "NO");
    }
    return 0;
}
