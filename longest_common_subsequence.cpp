#include<iostream>
#include<cstring>
using namespace std;

void lcs(char *x, char *y, int m, int n)
{
    int counter = 0;
  int T[m + 1][n + 1];

  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i == 0 || j == 0)//make all the elements in the 1st row and 1st column as 0 for the ease in the working of algorithm
        T[i][j] = 0;
      else if (x[i - 1] == y[j - 1])
        {T[i][j] = T[i - 1][j - 1] + 1;//1 + THE DIAGONAL ELEMENT
         counter+=1;
        }
      else
        {T[i][j] = max(T[i - 1][j], T[i][j - 1]);
        counter+=1;
        }
    }
  }

  int index = T[m][n];
  char lcs[index + 1];
  lcs[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0)
  {
    if (x[i - 1] == y[j - 1])
    {
      lcs[index - 1] = x[i - 1];
      i--;
      j--;
      index--;
    }

    else if (T[i - 1][j] > T[i][j - 1])
      i--;
    else
      j--;
  }

  cout << "\nfirst string s1 : " << x << "\nsecond string s2 : " << y<<"\nlength of the longest common subsequence is : "<<strlen(lcs)<< "\nthe longest common subsequence is: " << lcs << "\n";
  cout<<"total number of sequence possible are : "<<counter;
}
int main()
{
    char s1[100],s2[100];
    cout << "Enter First String: ";
    cin.getline(s1,100);
    cout << "Enter Second String: ";
    cin.getline(s2,100);
    int m = strlen(s1);
    int n = strlen(s2);
    lcs(s1,s2,m,n);

}
