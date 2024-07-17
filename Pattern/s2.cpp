#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
  

int i=n;  // make it n
while(i>=1){      //i>= 1
      int space =n-i;   //n-i
    while(space>0){
        cout<<"  ";
        space--;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i--;                      // i--

}
    
    return 0;
}
