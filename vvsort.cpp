#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of vectors
    std::vector<std::vector<int>> data = {{1, 4, 2},
                                          {3, 2, 1},
                                          {2, 5, 3}};

    // Define the column index to sort by
    int col_index = 1;

    // Define the custom comparator function
    auto compare = [&](const std::vector<int>& v1, const std::vector<int>& v2) {
        return v1[col_index] < v2[col_index];
    };

    // Sort the vector of vectors by the specified column
    std::sort(data.begin(), data.end(), compare);

    // Print the sorted vector of vectors
    for (const auto& vec : data) {
        for (int val : vec) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//op
3 2 1 
1 4 2 
2 5 3 
