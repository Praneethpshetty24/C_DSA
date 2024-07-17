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
    while(j<=i){
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i--;                      // i--

}
    
    return 0;
}






















/*

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
  
    int i = n; // Start i from n down to 1
    while (i >= 1) {
        int space = n - i; // Adjust space count based on current row
        while (space > 0) {
            cout << "  ";
            space--;
        }
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--; // Decrease i to move to the next row up
    }
    
    return 0;
}

*/