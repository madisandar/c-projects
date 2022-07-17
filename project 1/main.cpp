#include <iostream>

using namespace std;
float pi=3.14;
float calarea(float r,float a);
float calcir(float r,float cir);
int main()
{
      float r,a,cir;
      float ansarea,anscir;

    cout << "type radius: " ;
    cin >> r ;
    ansarea=calarea(r,a);
     cout << "Area of the disk: " << ansarea <<'\n';
    anscir=calcir(r,cir);
    cout << "circumference of the disk: " << anscir;
    return 0;
}
float calarea(float r,float a)
{
     a=pi*r*r;
     return a;

}
float calcir(float r,float cir)
{
    cir=2*pi*r;
    return cir;

}
