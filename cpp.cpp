// Single line comment
/* Multi line comment. */
#include <iostream>
#include <string>
#include <vector>
#include <map>

template <typename T>
T add(T a, T b) {
    return a + b;
}

enum Enum { FIRST, SECOND, THIRD };

int main() {
    if (true == false)
        std::cout << "Impossible" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Loop iteration: " << i << std::endl;
    }

    std::string str = "String";
    double number = 123.456;

    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::map<std::string, int> map;
    map["one"] = 1;
    map["two"] = 2;

    Color color = RED;

    return 0;
}