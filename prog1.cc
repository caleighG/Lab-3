// Don't forget to include the header block
// more information on keyword const on pages 95 - 97
// For if else format look at page 77

/**
 * Lab: #3
 * File: prog1.cc
 * Name: Caleigh Gillespie
 * Email: cg083718@ohio.edu
 * Date: 2022-09-16
 * 
 */



#include<iostream> 
#include<cstdlib>

using namespace std;

const int INT1 = 15;
const int INT2 = 20;

int main()
{
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << INT1+INT2 << endl;
    cout << "Product is " << INT1*INT2 << endl;
    
    if(INT1<INT2){
        cout << INT2 << " is bigger" << endl;
    }
    else{
        cout << INT1 << " is bigger" << endl; return (EXIT_SUCCESS);
    }

return 0;
}
