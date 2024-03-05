/*
IMP
1234
 234
  34
   4

*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }

        int j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}