#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a multimap with some values
    multimap<int, char> myMap;
    myMap.insert(make_pair(1, 'a'));
    myMap.insert(make_pair(2, 'b'));
    myMap.insert(make_pair(2, 'c'));
    myMap.insert(make_pair(3, 'd'));

    // Print the original map
    cout << "Original map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    cout << endl;

    // Erase the value at position 2
    auto it = myMap.begin();
    advance(it, 2);
    myMap.erase(it);

    // Print the modified map
    cout << "Modified map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    cout << endl;

    return 0;
}
