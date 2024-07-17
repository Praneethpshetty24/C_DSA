#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int i =1;
    
       char ch = 'A';
    while(i<=n){
        int j=1;
          char ch = 'A'+n-i;   
        while(j<=i){
            // 'A'+i+j-2 to get copy of it   // fo rrev 'A'+n-1
            cout<<ch<<" ";
           ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}