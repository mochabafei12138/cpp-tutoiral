#include<iostream>
using namespace std;

int main()
{   
    int num;
    for (num = 1; num < 1000; num++)
    {
        if(num%3==2 &&num%5==3 &&num%7==4)
        {
            continue;
            cout<<"num="<<num<<endl;
        }
    }
    return 0;
}