/**
 * Print the following pattern
 * -----------
 *     A
 *    ABA
 *   ABCBA
 *  ABCDCBA
 * ABCDEDCBA
*/
#include <iostream>
using namespace std;

int main() {
    char row,n='E',c;
    int col;
    for (row='A'; row<=n; row++)
    {
        for (col=row; col<n; col++)
        {
            cout<<" ";
        }
        for (col='A'; col<=row; col++)
        {
            c=col;
            cout<<c;
        }
        for (col=row-1; col>='A'; col--)
        {
            c=col;
            cout<<c;
        }
        
        cout<<endl;
    }
    
    return 0;
}
