/*
A
BC
DEF
GHIJ
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : "<<endl;
    int n;
    cin>>n;

    char ch='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch<<" ";
            ch = ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}