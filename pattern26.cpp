/*
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
        while(j<=i){
            cout<<"*";
            j++;
        }

        int end=i-1;
        while(end){
            cout<<"*";
            end--;
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
        while(j<=i){
            cout<<"*";
            j++;
        }

        int end=i-1;
        while(end){
            cout<<"*";
            end--;
        }
        cout<<endl;
        i--;
    }
    return 0;
}