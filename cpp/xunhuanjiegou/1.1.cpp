#include<iostream>
using namespace std;

int main()
{
    float x,sum=0.0;
    cin >> x;
    while(x!=0)
    {
        sum +=x;
        cin>>x;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}