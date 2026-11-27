#include <bitset>
#include <ios>
#include <iostream>
#include <print>

constexpr unsigned int l_max = 22;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int t;
    std::cin >> t;
    unsigned int l, a, b;
    std::bitset<l_max> strawberries, blueberries;
    unsigned int ideal_slice_count;
    while (t-- > 0) {
        std::cin >> l >> a >> b;
        for (unsigned int i = 0; !strawberries[i]; i = (i + a) % l) {
            strawberries[i] = true;
        }
        for (unsigned int i = 0; !blueberries[i]; i = (i + b) % l) {
            blueberries[i] = true;
        }
        ideal_slice_count = 0;
        for (unsigned int i = 0; i < l; ++i) {
            if (strawberries[i] && blueberries[i]) {
                ++ideal_slice_count;
            }
        }
        std::println("{}", ideal_slice_count);
        strawberries.reset();
        blueberries.reset();
    }
    return 0;
}
