/* Earlier we have seen that when we use Char = 'AB' 
the output is generating the warning and printing value B

That's why we come up with the strings.*/

#include <iostream>
#include <string.h>

using namespace std;
int main(){
    // now you can write anything by defining the string
    string myFavariotTea = "Masala Chai\n";

    // let's suppose i want to add a description under the Masala chai.

    // string ChaiDescription = "is Best Seller";

    // now this will print in same line, that's why i will use escape sequence \n after masala chai.

    string ChaiDescription = "is \"Best Seller\"";

    /*now i want to add double quote to best seller , that's y i will use escape character.
    just add a \ before any character it will ignore it from code.*/


    cout << myFavariotTea << ChaiDescription <<endl;
    return 0;
}