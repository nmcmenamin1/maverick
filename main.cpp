#include <iostream>
#include <assert.h>

#include "card.h"
using namespace std;

#define assert_static(e)     1/(e)

int main()
{

card jd(2, 5);


std::cout << "Hello World!\r\n";


cout << "Size of int : " << sizeof(int) << endl;
cout << "Size of short : " << sizeof(short) << endl;
cout << "Size of long : " << sizeof(long) << endl;
cout << "Size of char : " << sizeof(char) << endl;
cout << "Size of float : " << sizeof(float) << endl;
cout << "Size of long long : " << sizeof(long long) << endl;


cout << jd.getSuit() << endl;

/* check conditions during runtime */

int i = 0;
for( i=0; i <5; i++)
{

    cout << "I is = %d : " << i << endl;

   // assert( i != 4);
}


}






