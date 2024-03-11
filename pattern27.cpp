/*
Easy Formula = 2*row-1
Diamond Pattern
   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    i=n-1;
    while(i>=1){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}