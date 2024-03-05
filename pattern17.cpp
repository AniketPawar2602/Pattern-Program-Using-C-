/*
D
CD
BCD
ABCD
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows: "<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}