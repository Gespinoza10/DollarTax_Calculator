/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float amount;
    cout<<"Enter a Dollar Amount: ";
    cin >> amount;
    
    float taxRate;
    cout<<"Enter a tax rate: ";
    cin>> taxRate;
    
    float taxValue;
    int number = 100;
    taxValue = taxRate / number * amount;
    cout<<"Your Tax for this amount is: "<< taxValue<<endl;
    
    cout<<fixed<< setprecision(2) <<"Dollar Amount: "<< amount << endl
    <<"Tax Rate: "<< taxRate << endl <<"Total tax: "<< taxValue;
    return 0;
}

