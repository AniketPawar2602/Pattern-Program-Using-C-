/*
Traingle Pattern
1
22
333
4444
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : "<<endl;
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
