
#include<iostream>
using namespace std;

 int power(int x,int y)
 {
     if(y == 0)
        return 1;
     else
        return power(x,y-1)*x;
 }

 int main()
 {
     int a,b;
     cin>>a>>b;
     cout<<power(a,b);
 }
