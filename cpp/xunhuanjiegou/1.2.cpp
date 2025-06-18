#include<iostream>
using namespace std;

int main()
{
    int icloud = 0;
    long pw;
    bool flag = false;
    do
    {
        cout<<"Please enter your password:"<<endl;
        cin >> pw;
        icloud++;
        if (pw==88888888)
        {
            flag = true;
            break;
        }
    }while (icloud<=3);
    if (flag == true)
        cout<<"Success!"<<endl;
    else
        cout<<"Wrong Password!"<<endl;
    return 0;
}