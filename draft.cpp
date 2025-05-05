#include<bits/stdc++.h>
using namespace std;
// void display(int arr[],int n){
//     cout<<"array: ";
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     cout<<endl;
// }

int main(){
    int arr[100];
    int n,pos,val,choice;
    // cout<<"Enter number of element: ";
    // cin>>n;
    // srand(time(0));
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]= rand()% 100;
    //     cout<<arr[i]<<" ";
    // }
    n=0;
    while(1){
        if(scanf("%d",&arr[n])==1)
        n++;
        else break;
        char ch =getchar();
        if(ch=='\n')
        break;
    }
    

    cout<<endl;
    for(int i=1;i<n;i++)
    {
        int temp =arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // do{
    //     system("CLS");
    //     display(arr,n);

    //     cout<<"1. insert\n2. delete\n4. exit\nEnter your choice";
    //     cin>>choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         cout<<"Enter inserrt position :";
    //         cin>>pos;if(pos>n)cout<<"invalid pos";
    //         else{
    //             cout<<"Enter value";
    //             cin>>val;
    //             for(int i=n;i>pos;i--){
    //                  arr[i]=arr[i-1];
    //             }
    //             arr[pos]=val; n++;
    //         }
    //         break;

    //     case 2:
    //         cout<<"Enter delete position :";
    //         cin>>pos;if(pos>n)cout<<"invalid pos";
    //         else{
    //             for(int i=pos;i<n-1;i++){
    //                  arr[i]=arr[i+1];
    //             }
    //             n--;
    //         }
    //         break;
    //         case 3:
    //         display(arr,n);
    //     case 4:
    //         return 0;
    //     default:
    //         cout<<"try again";
    //         break;
    //     }
    // }while(choice!=4);
}