/*
   *
  **
 *** 
****
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}