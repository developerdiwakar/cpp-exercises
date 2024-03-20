/**
 * Print the following pattern
 * -----------
 *     *
 *    ***
 *   *****
 *  *******
 * *********
*/
#include <iostream>
using namespace std;

int main() {
    int row=1,col=0,n;
    cout<<"Please enter the nth number"<<endl<<"you want to print the pattern:";
    cin>>n;

    // 1st Method
    /* for (row = 1; row <= n; row++)
    {
        for (col = n-row; col >= 1; col--)
        {
            cout<<" ";
        }

        for (col = 1; col <= row ; col++)
        {
            cout<<"*";
        }

        for (col = 1; col < row; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    } */

    // 2nd Method
    /* int colEx = 0;
    for (row = 1; row <= n; row++)
    {
        for (col = n-row; col >= 1; col--)
        {
            cout<<" ";
        }

        for (col = 1-colEx; col <= row ; col++)
        {
            cout<<"*";
        }
        colEx++;
        cout<<endl;
    }
    */    
   //3rd Method
    for (row = 1; row <= n; row++)
    {
        for (col = n-row; col >= 1; col--)
        {
            cout<<" ";
        }

        for (col = 1; col <= (2*row-1) ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
