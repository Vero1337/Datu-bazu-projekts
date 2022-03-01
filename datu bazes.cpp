#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    srand(time(0));

    string vardi[8];
    string uzvardi[8];
    int a = 0;
    int b = 0;
    int c = 0;
    int reizes = 0;
    cout << "Ludzu ievadiet personu vardus" << endl;
    for(int i = 0; i < 8; i++)
    {
         cout <<"Personas :" << i << endl;
         cin >> vardi[i];
    }
    cout << endl;
    cout << endl;
    for(int i = 0; i < 8; i++)
    {
       cout << vardi[i] << endl;
    }
    cout << endl;
cout << endl;

    cout << "Ludzu ievadiet personu uzvardus" << endl;
    for(int i = 0; i < 8; i++)
    {
         cout <<"Personas :" << i << endl;
         cin >> uzvardi[i];
    }
    cout << endl;
    cout << endl;
    for(int i = 0; i < 8; i++)
    {
       cout << uzvardi[i] << endl;
    }
    cout << endl;
cout << endl;

    cout << "Ievadiet 2D masinu izmerus, robeza no 3 lidz 9" << endl;
    cin >> a;
    cin >> b;

    string Rand_Mas[a][b];
    for(int x = 0; x < a; x++)
    {
     for( int y = 0; y < b; y++)
     {
         if(y == 0) {

            Rand_Mas[x][y] = vardi[rand()%8];
         }
         if(y == 1) {

            Rand_Mas[x][y] = uzvardi[rand()%8];
         }
         if(y == 2) {

            Rand_Mas[x][y] = to_string(rand()%108+12);
         }
                  if(y == 3) {

            Rand_Mas[x][y] = "2"+to_string(((rand()%99999)+10000)*99);

         }
        cout <<  Rand_Mas[x][y] << " ";
     }
     cout << endl;

    }

 cout<< endl;




 cout <<"Ludzu ievadiet skaitli no 0 - 7, lai izveletos konkretu personu" << endl;
 cin >> c;
 for(int i = 0; i < a; i++)
 {
     for(int j = 0; j < b; j++)
     {
         if(Rand_Mas[i][j] == vardi[c])
         {
              reizes = reizes + 1;
         }
     }
 }
 cout << endl;
    cout << endl;
cout << "Persona "<< vardi[c] <<" tika atrasts " << reizes << " reizes " << endl;

    return 0;
}
// Ingolfs Janis Dzintars Liga Aleksandra  Solvita Vita Liga
// Lusis Strods Ziedins Cane  Birkova Vicupa Medniece Silauniece
