/**
 * Print the following pattern (Prime Numbers)
 * -----------
 * 2
 * 3 5
 * 7 11 13
 * 17 19 23 29
*/
#include <iostream>
using namespace std;
int main() {
    int rows=4;
    int num = 1; // The number starts with
    bool prime=true; 

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            for(int k=2;k<=num/2;k++){
                if(num%k==0){
                    prime=false;
                    continue;
                }
            }
            if(!prime){
                continue;
            }
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
