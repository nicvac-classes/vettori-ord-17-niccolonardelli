#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() 
{    
    srand(time(0));
    bool scambio;
    int n, i, f, g, j, t;
    cout << "quanti numeri generare?" << endl;
    cin >> n;
    vector<int>p(n);
    vector<int>v(n);
    vector<int>d(n);
    i=0;
    while (i<n)
    {
        v[i] =rand()%(n+1);
        i=i+1;
    }
    i=0;
    f=0;
    g=0;
    while (i<n)
    {
        if (v[i] %2=0)
        {
          p[f] = v[i];
          f=f+1;
        }
        else
        {
          d[g] =v[i];
          g=g+1;
        }
    }
    scambio = true;
    i=0;
    while (i<=g-1 and scambio)
    {
        scambio = false;
        j=0;
        while(j<=g-2-i)
        {
          if (d[j]> d[j+1])
          {
            t =d[j];
            d[j]=d[j+1];
            d[j+1] =t;
            scambio= true;
          }
          j=j+1;

        }
        i=i+1;
    }
    scambio = true;
    i=0;
    while (i<=f-1 and scambio)
    {
        scambio = false;
        j=0;
        while(j<=f-2-i)
        {
          if (p[j]> p[j+1])
          {
            t =p[j];
            p[j]=p[j+1];
            p[j+1] =t;
            scambio= true;
          }
          j=j+1;

        }
        i=i+1;
    }
    i=0;
    f=0;
    g=0;
    while(i<f)
    {
        cout << p[i] << endl;
        i=i+1;
    }
    i=0;
    while(i<g)
    {
        cout << d[i] << endl;
        i=i+1;
    }
    i=g;
    while(i>0)
    {
        cout << d[i] << endl;
        i=i-1;
    }

}






//LEGGERE LE ISTRUZIONI NEL FILE README.md
