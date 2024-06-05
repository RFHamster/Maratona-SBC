#include <bits/stdc++.h>

using namespace std;

// Wrong Awswer

int main() {
    // km/h
    double v;
    // km
    double e;

    std::cin >> e >> v;

    unsigned long int h = e / v;
    int min = static_cast<int>(((e / v) - h) * 60);

    h = (19 + h) % 24;

    std::cout << std::setfill('0') << std::setw(2) << h << ":"
              << std::setfill('0') << std::setw(2) << min << std::endl;

    return 0;
}