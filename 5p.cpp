#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=1;
    char start = 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
           // char ch = 'A'+i-1;     //'A'+j-1 for icrease a b c

            cout<<start<<" ";
            start++;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}




/*

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Read the input for the number of rows/columns
    int i = 1;

    while (i <= n) {
        int j = 1;
        char start = 'A' + i - 1; // Calculate the starting character for each row

        while (j <= n) {
            cout << start << " "; // Print the character
            start++; // Move to the next character in the alphabet
            j++; // Increment the inner loop counter
        }

        cout << endl; // Move to the next line after printing all characters for the current row
        i++; // Increment the outer loop counter
    }

    return 0;
}









*/