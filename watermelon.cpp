#include <iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w>100 || w<1)
    {
        cout<<"The weight of the watermelon should be between 1 and 100\n";
        return 0;
    }
    if(w%2==0 && w != 2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
}