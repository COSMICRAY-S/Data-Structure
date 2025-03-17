#include <iostream>

#include <list>

using namespace std;

typedef list<string> List;

typedef List::iterator It;

void print (List&);

int main()

{
    List cars;
    print(cars);

cars.push_back("sugar");

print(cars);

cars.push_back("dates");

print (cars);

cars.push_back("wheat");

print(cars);

cars.push_front("beans");

print(cars);

cars.push_front("clams");

print(cars);

cars.sort();

print(cars);

list<string>::iterator tt=cars.begin();
++tt;
cars.insert(tt,3,"sagor");
print(cars);

cars.erase(tt);
print(cars);

}

void print (List& list)

{
    cout << "size=" << list.size();

    if (list.size() == 0) cout << ":\t()\n";

    else

    { It it=list.begin();

    cout << ":\t(" << *it++;

    while (it != list.end())

    cout << "," << *it++;

    cout << ")\n";
    }
}
