#include <iostream>

using namespace std;

void first(int num[10]);
void second(int num[]);

int main()
{

 int t[10],i;

  for(i=0; i<10; i++){
     t[i] = i;

     first(t);
     second(t);

     return 0;
  }

}

void first(int num[10])
{
    int i;

    for(i=0; i<10; i++){
        cout<<num[i]<<' ';
    }

    cout<<'\n';
}


void second (int num[])
{
    int i;

    for(i=0; i<10; i++){
        cout<<num[i]<<' ';

    }

    cout<<'\n';
}
