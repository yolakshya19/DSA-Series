#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        for(int i=0;i<row+1;i++)
        {
            cout << char(65+i) << " ";
        }
        for(int j=65+row-1;j>=65;j--)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
}
