#include <iostream>
using namespace std;
int main() {
  int n=6;
  for(int row=1;row<=6;row++)
  {
    for(int i=1;i<=n-row;i++)
    {
      cout << " ";
    }
    for(int j=1;j<=row;j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  
    for(int row=0;row<n;row++)
    {
      for(int space=0;space<row;space++)
        {
          cout << " ";
        }
      for(int star=0;star<n-row;star++)
        {
          cout << "* ";
        }  
      cout << endl;
    }
}
