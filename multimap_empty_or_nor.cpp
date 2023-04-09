#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create an empty multimap
    multimap<int, int> myMap;

    // Check if the multimap is empty
    if (myMap.empty()) {
        cout << "The multimap is empty." << endl;
    } else {
        cout << "The multimap is not empty." << endl;
    }

    // Add some elements to the multimap
    myMap.insert(make_pair(1, 10));
    myMap.insert(make_pair(2, 20));
    myMap.insert(make_pair(2, 30));
    myMap.insert(make_pair(3, 40));

    // Check if the multimap is empty again
    if (myMap.empty()) {
        cout << "The multimap is empty." << endl;
    } else {
        cout << "The multimap is not empty." << endl;
    }

    return 0;
}
