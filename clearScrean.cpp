/*#include<iostream>
using namespace std;
int main()
{
    int arr[100],i=0;
    while(cin>>arr[i]) i++;
    for(int j=0;j<i;j++)
    cout<<arr[j];
    return 0;
}*/
#include <iostream>
#include <sstream>
#include <vector>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void insert(vector<int> &arr,int  pos, int value)
{
    int size= arr.size(); //sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter position and value for insertion: ";
    cin>>pos>>value;
    arr.insert(arr.begin()+pos-1, value);
    cout << "Array elements: ";
    for (auto i : arr)
        cout << i << " ";
    cout<<endl<<endl;
}
int findIndex(vector<int>& arr, int val)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }

    return -1;
}
void Delete(vector<int> &arr, int value)
{
    int size= arr.size();
    cout<<"Enter value: ";
    cin>>value;
    int pos= findIndex(arr,value);
    if(pos==-1)cout<<"Invalid input"<<endl;
    else
    {
        arr.erase(arr.begin() + pos);
        cout << "Array elements: ";
        for (int i : arr)
            cout << i << " ";
        cout<<endl<<endl;
    }

}
int main()
{
    string input;
    vector<int> arr;

    cout<<"Enter your data: ";
    getline(cin, input);

    stringstream ss(input);
    int num;

    while (ss >> num)
    {
        arr.push_back(num);
    }

    cout << "Array elements: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;

    while(1)
    {
        cout<<"1: insert. \n2: delete\n3: Exit\nSelect one: ";
        int q,pos,value;
        cin>>q;
        switch(q)
        {
        case 1:
            insert(arr,pos,value);
            break;
        case 2:
            Delete(arr, value);
            break;
        case 3:
            return 0;
        }
        system("cls");
        cout << "Now your list is: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;
    }
    return 0;
}
