#include <iostream>
#include <cmath>

using namespace std;

int main()

{    int Number1;
     int SecretNumber = 15;

     cout << "Enter a value: " << endl;
     cin >> Number1;

     while(Number1 <= SecretNumber){
        cout << "Failure" << endl;

        cout << "Enter another value: " << endl;
        cin >> Number1;
     }
     cout << "Success" << endl;



    return 0;
}
