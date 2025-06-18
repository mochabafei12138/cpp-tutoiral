#include<iostream>
using namespace std;

int main()
{
    char c = '0'+2;
    switch(c)
    {
        case 1 :cout<<'A';break;
        case '2':cout<<'B';
        case 2: cout<<'C';
        default:cout<<'D';
    }//code will continue without break 

}