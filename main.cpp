#include <iostream>

// Print contents of an array in C++ using range-based for-loop
int main()
{
    int input[] = { 1, 2, 3, 4, 5 };

    for (const auto &value: input) {
        std::cout << value << ' ';
    }

    return 0;
}
