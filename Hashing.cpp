#include <iostream>
#include <unordered_map>
using namespace std;

// Class to demonstrate Hash Table operations
class HashTable {
private:
    unordered_map<int, string> table;

public:
    // Insert key-value pair
    void insert(int key, string value) {
        table[key] = value;
        cout << "Inserted: (" << key << ", " << value << ")\n";
    }

    // Delete a key
    void remove(int key) {
        if (table.erase(key))
            cout << "Key " << key << " removed\n";
        else
            cout << "Key " << key << " not found\n";
    }

    // Search for a key
    void search(int key) {
        if (table.find(key) != table.end())
            cout << "Found: (" << key << ", " << table[key] << ")\n";
        else
            cout << "Key " << key << " not found\n";
    }

    // Display all key-value pairs
    void display() {
        cout << "Hash Table Contents:\n";
        for (auto &pair : table)
            cout << "(" << pair.first << ", " << pair.second << ")\n";
    }
};

int main() {
    HashTable hashTable;
    
    hashTable.insert(1, "Alice");
    hashTable.insert(2, "Bob");
    hashTable.insert(3, "Charlie");

    hashTable.display();

    hashTable.search(2);
    hashTable.remove(2);
    
    hashTable.display();

    return 0;
}
