//1+(2+3*4)+(5+6*7+8*9*10)+...nth term

#include <iostream>
#include <ranges>

auto range(int n) {
  return std::views::iota(1, n + 1);
}

int main() {
    int n;
    int res = 0;
    int x = 1;
    std::cout << "Please enter the limit : ";
    std::cin >> n;

    for (auto i : range(n)) {
        int sum = 0;
        for (auto j : range(i)) {
            int prod = 1;
            for (auto k : range(j)) {
                prod *= x++;
            }
            sum += prod;
        }
        res += sum;
    }
    std::cout << res << std::endl;
}
