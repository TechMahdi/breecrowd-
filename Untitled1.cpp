#include<bits/stdc++.h>
using namespace std;
int main ()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   int  start =a*60+b;
    int end =c*60+d;
     int dif= end-start;
     if(dif<=0)
     {
         dif+=24*60;
     }
   int   hour= dif/60;
    int  minute=dif%60;
     cout<<"O JOGO DUROU"<<" "<<hour<<" "<<"HORA(S)"<<" "<<"E"<<" "<<minute<<" "<<"MINUTO(S)"<<endl;
     return 0;

}
