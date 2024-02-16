#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" Enter the element :"<<i<<","<<j<<" :";
            cin>>arr[i][j];
            cout<<endl;
        }
    }

    cout<<endl;
        
    for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    
    }
    return 0;
}


