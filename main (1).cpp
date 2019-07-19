/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2;
    int sum, pro, quo, diff;
    
        cout << "Enter first number:";
        cin >> num1;
        cout << "Enter second number:";
        cin >> num2;
        
        sum = num1 + num2;
        pro = num1 * num2;
        quo = num1 / num2;
        diff = num1 - num2;
    
        cout << "The Sum is: " << sum;
        cout << "The Product is: " << pro;
        cout << "The Quotient is : " << quo;
        cout << "The Difference is : " << diff;
    

    return 0;
}
