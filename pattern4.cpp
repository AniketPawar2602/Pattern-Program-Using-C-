/*
321
321
321
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : "<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;    //j - for column
            //cout<<n-j+1;    i - for row
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
