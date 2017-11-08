#define doo  1000// do komutu ile karismasin diye doo yazdim (kalin do)
#define re   1122
#define mi   1260
#define fa   1335
#define sol  1498
#define la   1681
#define si   1887
#define dom  2000



///////////////////////////////////////
void Mehter1()
 {
int melodi[] =     {mi,si, si,si,la,si, dom, si,mi,si, si,si,la,si, dom, si, dom,la,si,sol, dom,si,la,la, dom,si,la,la, si,sol,fa,mi,la, la,sol,la,fa ,mi,sol,fa,mi};
int notasuresi[] = {3,  3,  8,  2, 3,  3, 8,  2, 3,  3,  8,  2, 3,  3, 8,  2,  3, 3, 3,3,3,3,7,2, 3,3,7,3 ,3,3,5,5,3 ,3,3,7,3  ,3,3,6,6 };// her notanin süresini array yaptim
int tempo = 1250;
  
    for(int Nota = 0; Nota<41; Nota++)
    {
      int sure = tempo/notasuresi[Nota];
      tone(9,melodi[Nota],sure);
      delay(sure*1.2);
    }
 }
///////////////////////////////////////////////////////////////////////////////////
void Sut(){
int melodi[] =     {re,mi,fa,sol,fa,sol,sol,sol, fa, sol,sol,sol ,fa, mi, re,mi,fa,sol,fa,sol,sol,sol, fa, sol,sol,sol ,fa, mi,   re, mi ,fa,sol,mi,fa,re,mi,doo,doo,fa,mi,re,re,re, mi ,fa,sol,mi,fa,re,mi,doo,doo,fa,mi,re,re };
int notasuresi[] = {4,  4,  4,  4, 4,  4,4,  3 ,4,4,4,4,4,2,4,  4,  4,  4, 4,  4,4,  3 ,4,4,4,4,4,2 ,4,4,4,4,4,4,4,4,4,4,4,4,2,2,4,4,4,4,4,4,4,4,4,4,4,4,2,2};// her notanin süresini array yaptim
int tempo = 1200;

for (int Nota = 0; Nota <56; Nota++) 
    {
      int sure = tempo/notasuresi[Nota];
     tone(9, melodi[Nota],sure);// 9 numarali bacaktan notalarin frekanslarini nota uzunluklarina göre gönder
     delay(sure*1.2);// notalar arasinda biraz beklesin. Eger 1 ile çarparsaniz notalar birbirine bitisik olur
    }
 }
//////////////////////////////////////////////////////////////////////////////////

void Hangimiz()
{
  int melodi[] =     {doo,re,dom ,si,doo,si,doo,re,dom ,si,doo,si,doo,re,dom ,si,doo,si,  la,si,la,sol,fa,la };
int notasuresi[] = {6,  6,  2,  6, 6,  2,6,  6,  2, 6 , 6,  2,6,  6,  2,  6, 6,  2,  6,9,8,5,5,2 };// her notanin süresini array yaptim
int tempo = 1200;
for (int Nota = 0; Nota <24; Nota++) 
    {
      int sure = tempo/notasuresi[Nota];
     tone(9, melodi[Nota],sure);
     delay(sure*1.2);
    }
}


////////////////////////////////////////////////////////////////////////////////////

void Mehter2()
{
  int melodi[] =     {re,sol,fa,mi,re,mi,mi,re,mi,re,sol,fa,mi,re,mi,mi,doo,re};
int notasuresi[] = {3,  3,  3,  5, 4,  3,3,  4,  2, 3 , 3,  3,5,  4,  3,  4, 4,  2};// her notanin süresini array yaptim
int tempo = 1150;
for (int Nota = 0; Nota <18; Nota++) 
    {
      int sure = tempo/notasuresi[Nota];
     tone(9, melodi[Nota],sure);// 9 numarali bacaktan notalarin frekanslarini nota uzunluklarina göre gönder
     delay(sure*1.2);// notalar arasinda biraz beklesin. Eger 1 ile çarparsaniz notalar birbirine bitisik olur
    }

}

/////////////////////////////////////////////////////////////////////////////////
void setup() 
{ 

Serial.begin(9600);
 
}
void loop() 
{

  if(Serial.available()>0)
  {
    int a = Serial.read();
    if(a=='1')
    {
    Mehter1();
    }
    else if(a=='2')
    {
    Sut();
    }
    else if(a=='3')
    {
      Hangimiz();
    }
    else
    {
      Mehter2();
     
    }
 }
 }
