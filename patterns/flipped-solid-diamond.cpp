#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++){
        for(int stars=0;stars<n-rows;stars++){
            cout << "*";
        }
        for(int space=0;space<2*rows+1;space++){
            cout << " ";
        }
        for(int stars=0;stars<n-rows;stars++){
            cout << "*";
        }
        cout << endl;
    }
    for(int rows=0;rows<n;rows++){
        for(int stars=0;stars<rows+1;stars++){
            cout << "*";
        }
        for(int space=0;space<2*n-2*rows-1;space++){
            cout << " ";
        }
        for(int stars=0;stars<rows+1;stars++){
            cout << "*";
        }
        cout << endl;
    }
}
