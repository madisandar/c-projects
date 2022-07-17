#include <iostream>

using namespace std;

int main()
{
   float r,a,cir;
   float pi=2.14;
   cout << "type radius: " ;
   cin >> r ;

   a=pi*r*r;
   cir=2*pi*r;
   cout << "Area of the disk: " << a <<'\n';
   cout << "circumference of the disk: " << cir;
   return 0;

}
