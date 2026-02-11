#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i].length() <= 10)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<(arr[i].at(0))<<(arr[i].length()-2)<<(arr[i].at((arr[i].length()-1)))<<endl;
        }
    }
    return 0;
}
