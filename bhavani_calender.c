#include<stdio.h>
void main()
{
  int day_s=0,x,t,y,z,m,i,total_days;
  char month[10];
  int year ,date,p,q,r,s,days,day,days_year;
  printf("enter the date \n ");
  scanf("%d",&date);
  printf("enter the month \n");
  printf("NOTE:   month should be in complete word where numericals are prohibited......!");
  scanf("%s",month);
  printf("enter the year\n");
  scanf("%d",&year);
  if(year>1600&&year<=2000)
  p=(year-1)-1600;
  if(year>2000&&year<=2400)
  p=(year-1)-2000;
  r=p%100;
  q=p-r;
  printf(" p is %d",p);
  printf(" r is %d",r);
  printf(" q is %d",q);
  if(q==400)
  days=0;
  if(q==100)
  days=5;
  if(q==200)
  days=3;
  if(q==300)
  days=1;
  else
  days=0;
  s=r/4;
  printf("s is %d\n",s);
  t=r-s;
  printf("t is %d\n",t);
  day=(s*2+t*1)%7;
  printf("day is %d\n",day);
  printf("days is %d\n",days);
  days_year=days+day;
  printf("%d",days_year);

   if(strcmp(month,"january")==0)
   m=1;
   if(strcmp(month,"febuary")==0)
   m=2;
   if(strcmp(month,"march")==0)
   m=3;
   if(strcmp(month,"april")==0)
   m=4;
   if(strcmp(month,"may")==0)
   m=5;
   if(strcmp(month,"june")==0)
   m=6;
   if(strcmp(month,"july")==0)
   m=7;
   if(strcmp(month,"august")==0)
   m=8;
   if(strcmp(month,"september")==0)
   m=9;
   if(strcmp(month,"october")==0)
   m=10;
   if(strcmp(month,"november")==0)
   m=11;
   if(strcmp(month,"december")==0)
   m=12;

   printf("\n%d\n",m);
   for(i=1;i<m;i++)
   {
   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
   x=31;
   else
   if(i==2)
    {
      if(year%4==0)
       x=29;
      else
       x=28;
    }
    if(i==4||i==6||i==9||i==11)
      x=30;
   day_s=day_s+x;
   }
   printf("day_s is \n%d",day_s);
   y=day_s+date;
   printf("y is %d",y);
   z=y%7;
   printf("\nz is %d",z);
   total_days=z+days_year;
   if(total_days>6)
   total_days%=7;
   printf("\n%d",days_year);
   printf("\n%d",total_days);

   (total_days==0)?printf("\nsunday"):(total_days==1)?printf("\nmonday"):(total_days==2)?printf("\ntuesday"):(total_days==3)?printf("\nwednesday"):(total_days==4)?printf("\nthursday"):(total_days==5)?printf("\nfriday"):printf("\nsaturday");
}

