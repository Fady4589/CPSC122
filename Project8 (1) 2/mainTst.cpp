#include <iostream>
using namespace std;

#include "main.h"

int main()
{

 ListT lst;
 cout << "Test PutItemH and Print" << endl;
 cout << "Correct if output is 4, 3, 2, 1, 0 on subsequent lines" << endl;
 for (int i = 0; i < 5; i++) 
   lst.PutItemH(i);
 lst.Print();

cout << "Test deleteItemT and deleteItemH and print the results \n"; 
cout << "Show me this test works \n";
cout << "After Push this should show up on github \n";


 cout << endl;
 return 0;
}

