#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=1;
         int val =i;
        while(j<=i){
            
            cout<<val<<" ";
            val ++;       // use i for 1 22 333 4444 , count for 1234
            j++;

        }
        cout<<endl;
        i++;
    }

    return 0;
}




