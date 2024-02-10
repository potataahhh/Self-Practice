#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cout << "Enter the number of pairs (N): ";
    std::cin >> N;

    std::vector<std::pair<char, int>> pairs;

    // Input N pairs of character and integer
    for (int i = 0; i < N; ++i) {
        char ch;
        int num;
        std::cout << "Enter character and integer for pair " << i + 1 << ": ";
        std::cin >> ch >> num;
        pairs.push_back(std::make_pair(ch, num));
    }

    // Sorting the pairs based on characters
    std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });

    // Displaying the sorted pairs
    std::cout << "Sorted pairs based on characters:" << std::endl;
    for (const auto& pair : pairs) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}
