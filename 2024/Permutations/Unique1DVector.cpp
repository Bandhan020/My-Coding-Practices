#include <iostream>

int main() {
    // Example vectors
    std::vector<std::vector<int>> vectors = {
        {1, 2, 3},
        {4, 5, 6},
        {1, 2, 3},  // Not unique
        {7, 8, 9},
        {4, 5, 6},  // Not unique
        {10, 11, 12}
    };

    // Output vectors with unique elements
    std::cout << "Vectors with unique elements:\n";
    for (const auto& vec : vectors) {
        if (hasUniqueElements(vec)) {
            for (int num : vec) {
                std::cout << num << ' ';
            }
            std::cout << '\n';
        }
    }

    return 0;
}
