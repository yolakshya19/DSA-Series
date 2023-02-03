#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int rows=0;rows<n;rows++){
        for(int stars=0;stars<rows+1;stars++){
            if(stars==rows){
                cout << rows+1;
            }
            else{
                cout << rows+1 << "*";
            } 
        }
        cout << endl;
    }
    for(int rows=0;rows<n;rows++){
        for(int stars=0;stars<n-rows;stars++){
            if(stars==n-rows-1){
                cout << n-rows;
            }
            else{
                cout << n-rows << "*";
            } 
        }
        cout << endl;
    }
}
