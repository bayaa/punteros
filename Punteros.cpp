///By Brayan Guadalupe Hernandez
#include <iostream>
using namespace std;
int *puntero;
int numero=12;
char a= 'a';
int numero2=13;
float numero3=12.4344553;
int arreglo[10]= {0,1,2,3,4,5,6,7,8,9};
float arreglo2[10]= {0.4,1.3,2.4,3.7,5.4,6.7,7.8,8.9,2.5,10.8};
int *p;
float *b;
int main()
{
    puntero=&numero;
    cout<<"memoria \n"<<&numero;
    cout<<"\nmemoria \n"<<&numero2;
    cout<<"\n numero \n"<<puntero;
    cout<<"\n numero \n"<<*puntero;
    cout<<"\n Char   "<<&a;

    cout<<"memoria float \n"<<&numero3;

    p=&arreglo[0];
    b=&arreglo2[0];
    cout<<"\n\nArreglo direccional \n"<<&p;
    cout<<"\n\nArreglo direccional>>>>>> \n"<<p;
    cout<<"\n\nArreglo direccional valor \n"<<*p;
    cout<<"\n\nArreglo direccional \n"<<&b;
    cout<<"\n\nArreglo direccional>>>>>> \n"<<b;
    cout<<"\n\nArreglo direccional valor \n"<<*b;
    for( int i=0; i<=9; i++)
    {
        p=&arreglo[i];
        cout<<"\n\nArreglo direccional valor \n"<<*p<<endl;
        cout<<"\n\nArreglo direccional \n"<<&p;
        cout<<"\n\nArreglo >>>>>> \n"<<p;

        cout<<"\n___________________________________________\n";

    }
    for( int i=0; i<=9; i++)
    {
        b=&arreglo2[i];
        cout<<"\n\nArreglo direccional valor \n"<<*b<<endl;
        cout<<"\n\nArreglo direccional \n"<<&b;
        cout<<"\n\nArreglo >>>>>> \n"<<b;

        cout<<"\n___________________________________________\n";

    }
    return 0;
}
