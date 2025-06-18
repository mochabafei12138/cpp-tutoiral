#include<iostream>
using namespace std;
int main()
{
    char ckey;
    cin>>ckey;
    if (ckey = 'L')
        cout<<"Move Left"<<endl;
    else if (ckey = 'R')
        cout<<"Move Right"<<endl;
    else if (ckey = 'U')
        cout<<"Move Up"<<endl;
    else if (ckey = 'D')
        cout<<"Move Down"<<endl;
    else if (ckey = '0')
        cout<<"I Did It!"<<endl;
    else 
        cout<<"Input Wrong!"<<endl;
    return 0;
}