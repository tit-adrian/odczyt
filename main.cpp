#include <iostream>
#include <fstream>
using namespace std;

int a,b,c,d,e,n=50;
int T[50];
fstream plik, odczyt;
void sortowaniebabelkowe(int T[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(T[j-1]>T[j])
			swap(T[j-1], T[j]);
}


int main()
{

   cout<< "Ilosc liczb parzystych i nieparzystych : 1 "<< endl;
   cout<< "Sortowanie liczb: 2"<< endl;
    cin>> a;
    cout<< "Opcja: "<< a<< endl;

    switch(a)
{
    case 1:
    odczyt.open("odczyt.txt", ios::in);
    while(odczyt.good())
    {
        odczyt>>b;
        if(b%2==0) c++; else d++;

    }
    cout << "ilosc liczb parzystych: "<< c<< endl;
    cout<< "ilosc liczb nieparzystych: "<< d<< endl;
    odczyt.close();
    break;

    case 2:
    cout<<"Posortowane liczby: "<<endl;
    odczyt.open("odczyt.txt", ios::in);
    for(int i=0;i<50; i++)
    {
       odczyt>>T[e];
        e++;
    }
    odczyt.close();
    sortowaniebabelkowe(T,n);
	for(int i=0;i<n;i++)
          cout<<T[i]<<", ";
    break;
    default: cout<<"Nie ma takiej opcji"<< endl;
    main();

}

    return 0;
}
