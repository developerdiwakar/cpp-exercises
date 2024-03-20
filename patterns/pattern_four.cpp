/**
 * Print the following pattern
 * -----------
 *     1
 *    21
 *   321
 *  4321
 * 54321
*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int row=1; row<=n; row++){
        for(int col=n-row; col>=1; col--){
            cout<<" ";
        }
        for(int p=row; p>=1; p--){
            cout<<p;
        }
        cout<<endl;
    }
    return 0;
}
