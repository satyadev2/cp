#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Step 1: Convert the map into a vector of pairs
vector<pair<string, int>> convert_to_vector(map<string, int> m) {
    vector<pair<string, int>> v;
    for (auto const& pair: m) {
        v.push_back(pair);
    }
    return v;
}

// Step 2: Define the sorting function
bool sort_by_value_descending(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    // Sample input map
    map<string, int> input_map = {{"apple", 3}, {"banana", 1}, {"cherry", 5}, {"durian", 2}};

    // Step 1: Convert the map into a vector of pairs
    vector<pair<string, int>> input_vector = convert_to_vector(input_map);

    // Step 2: Apply the sorting function to the vector
    sort(input_vector.begin(), input_vector.end(), sort_by_value_descending);

    // Step 3: Convert the sorted vector back into a map
    map<string, int> sorted_map;
    for (auto const& pair: input_vector) {
        sorted_map.insert(pair);
    }

    // Output the sorted map
    for (auto const& pair: sorted_map) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
