#include <iostream>
using namespace std;

int main()
{
    int n;
cin>>n;   
int i=1;
int count =1;
while(i<=n){
      int j=1;
    while(j<=n){
      cout<<count<<" ";      // use j for 1 2 3  // n-j+1 for 3 2 1
      count ++;
      j++;

    }
    cout<<endl;
    i++;
} 
    return 0;
}