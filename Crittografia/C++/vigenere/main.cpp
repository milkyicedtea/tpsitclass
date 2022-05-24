#include <iostream>

using namespace std;

int main()
{
   char alfabeto[21]={'A','B','D','E','F','G','H','I','L','M','N','O','P','Q','R','S','T','U','V','Z'};
   char testoinchiaro[99];
   char chiave[99];
   int lunghezzatesto=0;
   int lunghezzatesto2=0;

 cout << "Inserisci il testo in chiaro (alla fine inserisci .)" << endl;
for(int i=0;i<99;i++)
{
    cin>>testoinchiaro[i];
    if(testoinchiaro[i]=='.') break;
    else lunghezzatesto++;
}
    cout << "Inserisci anche una chiave (alla fine inserisci .)" << endl;

for(int i=0;i<99;i++)
{
    cin>>chiave[i];
    if(chiave[i]=='.') break;
    else lunghezzatesto2++;
}

if(lunghezzatesto>lunghezzatesto2)
{
    for(int i=lunghezzatesto2;i<lunghezzatesto;i++)
    {
        chiave[i]=chiave[i-lunghezzatesto2];
    }
}

for(int i=0;i<lunghezzatesto;i++)
{
    testoinchiaro[i]=toupper(testoinchiaro[i]);
}
for(int i=0;i<lunghezzatesto2;i++)
{
    chiave[i]=toupper(chiave[i]);
}



int posizione[lunghezzatesto];
for(int i=0;i<lunghezzatesto;i++)
{
    int x=0;
    while(testoinchiaro[i]!=alfabeto[x]) x++;
    posizione[i]=x;

}

int posizione2[lunghezzatesto];
for(int i=0;i<lunghezzatesto;i++)
{
    int c=0;
    while(chiave[i]!=alfabeto[c]) c++;
    posizione2[i]=c;
}

cout<<posizione[0];
    return 0;
}
