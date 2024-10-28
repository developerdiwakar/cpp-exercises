/**
 * Print the following pattern
 * -----------
 * 2
 * 4 6
 * 8 10 12
 * 14 16 18 20
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 4, num=2;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            if(num%2==0){
                cout<<num<<" ";
            }
            num+=2;
        }
        cout<<endl;
    }
    return 0;
}
