/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout<<"Enter a Dollar Amount: ";
    cin >> amount;
    
    float taxRate;
    cout<<"Enter a tax rate: ";
    cin>> taxRate;
    
    float taxValue;
    taxValue = taxRate/100 * amount;
    cout<<"Your Tax for this amount is: "<< taxValue;
    return 0;
}
