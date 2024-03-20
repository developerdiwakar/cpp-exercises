/**
 * Print the following pattern
 * -----------
 *     A
 *    ABC
 *   ABCDE
 *  ABCDEFG
 * ABCDEFGHI
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
        
        for (col='A'; col<=(2*row)-'A'; col++)
        {
            c=col;
            cout<<c;
        }
        
        cout<<endl;
    }
    
    return 0;
}
