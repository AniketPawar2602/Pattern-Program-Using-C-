/*

       1
     1 2 1
   1 2 3 2 1 
 1 2 3 4 3 2 1 

*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //Space
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        //1st traingle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //2nd traingle
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}