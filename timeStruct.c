#include <stdio.h>
struct time
{
   int hour;
   int min;
   int sec;
};

int main()
{
   struct time t1;
   struct time t2;
   struct time s;
   scanf("%d%d%d", &t1.hour, &t1.min, &t1.sec);
   scanf("%d%d%d", &t2.hour, &t2.min, &t2.sec);
   s.sec = (t1.sec + t2.sec) % 60;
   int x = (t1.sec + t2.sec) / 60;
   s.min = (t1.min + t2.min + x) % 60;
   int y = (t1.min + t2.min + x) / 60;
   s.hour = (t1.hour + t2.hour + y);
   printf("%dh %dmin %dsec", s.hour, s.min, s.sec);
   return 0;
}