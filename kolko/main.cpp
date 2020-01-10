#include <iostream>
#include <kolkoKrzyzyk.h>
using namespace std;
kolkoKrzyzyk gra =kolkoKrzyzyk();
void tictactoe()
{
 int x,y;
gra.clearpol();
do
{
gra.wydrukuj();
    cout<<"podaj x: ";
    cin>>x;
    cout<<"podaj y: ";
    cin>>y;
}
while (gra.setWspolrzednych(x,y));
gra.wydrukuj();
}
int main()
{
 tictactoe();
 cout<<"chcesz zagrac ponownie ? Nacisnij: y - tak, n - nie ";
 char z;
 do
 {
     cin >>z ;
     if (z=='Y'||z=='y'||z=='N'||z=='n')
        break;
 }
 while (z!='Y'||z!='y'||z!='N'||z!='n');
    if ( z=='Y'||z=='y')
 {

main();
 }
    return 0;
}
