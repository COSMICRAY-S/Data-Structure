#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;

        /*if(n%400==0)
            cout<<n<<"is Leap Year";
        else if(n%4==0 && n%100!=0)
            cout<<n<<"is Leap Year";
        else
            cout<<n<<"is not Leap Year";*/

        if(n%400==0)
        {
            cout<<"Leap Year";
        }
        else
        {
            if(n%4==0)
            {
                if(n%100==0)
                    cout<<"not Leap Year";
                else
                    cout<<"Leap Year";

            }
            else
                cout<<"not Leap Year";
        }

    }

}
// #include<bits/stdc++.h>
// using namespace std;
// bool ffff(int n)
// {
//     if(n%400==0)
//         return true;
//     if(n%100==0)
//         return false;
//     if(n%4==0)
//         return true;
//     else 
//         return false;
// }
// int main()
// {
//     int n;
//     while(1)
//     {
//         cin>>n;
//     if(ffff(n))
//         cout<<"Leap Year";
//     else
//         cout<<"Not Leap Year";
//     }

// }
