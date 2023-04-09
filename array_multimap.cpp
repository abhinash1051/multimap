#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create an array of integers
    int arr[] = {4, 1, 3, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create a multimap with elements as keys and indices as values
    multimap<int, int> myMap;
    for (int i = 0; i < n; ++i) {
        myMap.insert(make_pair(arr[i], i));
    }

    // Print the map
    cout << "Original map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    cout << endl;

    // Erase a given element x from the map
    int x = 4;
    auto it = myMap.find(x);
    if (it != myMap.end()) {
        myMap.erase(it);
        cout << "Erased " << x << endl;
    } else {
        cout << "Not found" << endl;
    }

    // Print the modified map
    cout << "Modified map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    cout << endl;

    return 0;
}