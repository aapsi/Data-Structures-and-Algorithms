#include<iostream>
using namespace std;

int fact(int a)
{
    if(a == 0)
        return 1;
    else
        return fact(a-1)*a;

}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}

