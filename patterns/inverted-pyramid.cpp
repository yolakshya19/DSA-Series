#include<iostream>
using namespace std;

int main(){
  int n=6;
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
