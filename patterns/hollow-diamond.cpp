#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<n-row-1;space++)
        {
            cout << " ";
        }
        for(int star=0;star<(2*row+1);star++){
            if(star==0)
            {
                cout << "*";
            }
            else if(star==2*row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<row;space++)
        {
            cout << " ";
        }
        for(int star=0;star<(2*n-2*row-1);star++)      // (2*row+1)
        {
            if( star==0 || star==(2*n-2*row-2) )        // (2*row+2)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
