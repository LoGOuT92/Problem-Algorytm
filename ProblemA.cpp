#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0; i<test;i++)
    {
    int domy=0;
    cin>>domy;
    int tabx[domy];
    int taby[domy];
    int wynik1=0;
    int wynik2=2147483646;
    int x1;
    int y1;
    for (int i=0; i<domy; i++)
    {
        cin>>tabx[i];
        cin>>taby[i];
    }
       for (int i=0;i<domy;i++)
       {
            wynik1=0;
            x1=tabx[i];
            y1=taby[i];
        for (int j=0;j<domy;j++)
        {
            wynik1 += abs( tabx[j]-x1) +  abs (taby[j]-y1) ;
            if(wynik1>=wynik2)  break;
        }
            if(wynik1<wynik2)
            {
                wynik2 = wynik1;
            }
       }
  cout<<wynik2<<endl;
    }
}
