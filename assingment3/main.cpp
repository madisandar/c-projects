#include <iostream>

using namespace std;
void display(int a[10]);
int main()
{
    int a[10];
     int i;
    for(i=0 ; i<10; i++)
    a[i] = i+1;
    cout << "fun is:  ";
    for (i=0; i<10; i++) cout << a[i] << ' ';
    cout << '\n';
    display(a);
    return 0;
}
void display(int a[10])
{
    float avg,sum;
    for (int i=0; i<10; i++)
    sum=sum+a[i];
    cout << "The total sum is " << sum ;
    cout << '\n';
    avg=sum/10;
    cout << "The average is "<< avg;
}
