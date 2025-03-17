#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
using namespace std;

void displayList(const vector<int>& arr)
{
    cout << "The array list is: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    ifstream inputFile("data.txt");
    if (!inputFile)
    {
        cerr << "Unable to open file.\n";
        return 1;
    }

    vector<int> arr;
    int num;
    while (inputFile >> num)
    {
        arr.push_back(num);
    }
    inputFile.close();

    /*vector<int> arr;
    int choice;


    cout << "Enter your element (space-separated, end with Enter): ";
    int temp;
    while (cin.peek() != '\n')
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cin.ignore();*/


    while (true)
    {
        displayList(arr);


        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            system("CLS");
            displayList(arr);
            int pos, data;
            cout << "Enter position and data: ";
            cin >> pos >> data;

            if (pos >= 0 && pos <= arr.size())
            {
                arr.insert(arr.begin() + pos, data);
                system("CLS");
                cout<<"After insertion";
            }
            else
            {
                cout << "Invalid position!" << endl;
                system("pause");
                system("CLS");
            }
            break;
        }
        case 2:
        {
            system("CLS");
            displayList(arr);
            int pos;
            cout << "Enter position: ";
            cin >> pos;

            if (pos >= 0 && pos < arr.size())
            {
                arr.erase(arr.begin() + pos);
                system("CLS");
                cout<<"After deletion";
            }
            else
            {
                cout << "Invalid position!" << endl;
                system("pause");
                system("CLS");
            }
            break;
        }
        case 3:
            system("CLS");
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid option, please try again." << endl;
            system("pause");
            system("CLS");
        }
    }
}
