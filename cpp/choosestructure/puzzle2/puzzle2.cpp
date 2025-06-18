#include<iostream>
using namespace std;
int main()
{
    char ckey;
    cin>>ckey;
    switch(ckey)
    {
    case 'L':
        cout<<"Move Left"<<endl;break;
    case 'R':
        cout<<"Move Right"<<endl;break;
    case 'U':
        cout<<"Move Up"<<endl;break;
    case 'D':
        cout<<"Move Down"<<endl;break;
    case '0':
        cout<<"I Did It!"<<endl;break;
    default:
        cout<<"Input Wrong!"<<endl;
    }
    return 0;
}