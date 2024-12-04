#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    // Vector
    vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    cout << "Vector contents: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Map
    map<string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad.erase("Juan");
    cout << "Map contents: ";
    for (const auto& pair : edad) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // Set
    set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    cout << "Set contents: ";
    for (int num : conjunto) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}