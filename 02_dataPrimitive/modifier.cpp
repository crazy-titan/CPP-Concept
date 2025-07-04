#include <iostream>
using namespace std;
int main(){
    // here we use long, long long , long double etc and signed 
    // unsigned
/*for example 

lets suppose coustmer have give order of -100 teaPackets 
is this possible?*/


// int teaPackets = -100;


// cout << teaPackets << endl; this is showing -100 in output.
// return 0;

/* how to tackle this situtation? */


// here we will use unsigned before defineing the variable
unsigned teaPackets = -100;
cout << teaPackets << endl; // will output garbage value
    
    // this will only show correct if you give 100 now.
    }