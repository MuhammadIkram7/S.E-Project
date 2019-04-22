/* Waqas , Qavee, Ikram And Amardas

#include<stdio.h>
#include<conio.h>
int Menu();
void Bus();
void Riksha();
void Cycle();
void ShowDetail();
void Delete();
int nob=0,nor=0,noc=0,amount=0,count=0;
void main()
{
 while(1)

 {
 clrscr();
 switch(Menu())
 {
 case 1:
	Bus();
	break;
 case 2:
	Riksha();
	break;
 case 3:
	Cycle();
	break;
 case 4:
	ShowDetail();
	break;
 case 5:
	Delete();
	break;
 case 6:
	exit(0);
 default :
   printf("\nInvalid Choice : ");
 }
 getch();

 }

}
int Menu()
{
 int ch;
 printf("\n1.Enter Bus : ");
 printf("\n2.Enter Riksha : ");
 printf("\n3.Enter Cycle : ");
 printf("\n4.Show Status : ");
 printf("\n5.Delete Data : ");
 printf("\n6.Exit Program :");
 printf("\n\nEnter Your Choice : ");
 scanf("%d",&ch);
 return(ch);
}
void ShowDetail()
{
 printf("\nNumber Of Bus = %d",nob);
 printf("\nNumber Of Riksha = %d",nor);
 printf("\nNumber Of Cycle = %d",noc);
 printf("\nTotal Number Of Vehicles = %d",count);
 printf("\nTotal  Gain Amount= %d",amount);
}
void Delete()
{
 printf("\n\nPress Enter...");
 nob=0;
 nor=0;
 noc=0;
 amount=0;
 count=0;
}
void Bus()
{
 printf("\nEntry Succesfull");
 nob++;
 amount=amount+100;
 count++;
}
void Riksha()
{
 printf("\nEntry Succesfull");
 nor++;
 amount=amount+50;
 count++;
}
void Cycle()
{
 printf("\nEntry Succesfull");
 noc++;
 amount=amount+20;
 count++;
}
