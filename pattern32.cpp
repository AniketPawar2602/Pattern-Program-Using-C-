/*

*****
*   *
*   *
*   *
*****

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : "<<endl;
    cin>>n;


    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}