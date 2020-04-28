#include<stdio.h>
#include<conio.h>
void main()
{
   char name[25],post[35];
   int month,year;
   float bsalary,net,ptax,pfund,hra,loan,conveyance,sume,sumd;
   clrscr();
   printf("enter name of the employee and designation:");
   gets(name);
   gets(post);
   printf("enter year for the slip:");
   scanf("%d",&year);
   printf("\nenter month :");
   scanf("%d",&month);
   printf("\nenter basicsalary,conveyance and hra:");
   scanf("%f%f%f",&bsalary,&conveyance,&hra);
   printf("\nenter provident fund and profession tax:");
   scanf("%f%f",&pfund,&ptax);
   printf("enter loan of the employee  :");
   scanf("%f",&loan);
   //actual calculations
   sume=(bsalary+conveyance+hra);
   sumd=(pfund+ptax+loan);
   net=(sume-sumd);

   //actual generation of the slip
   clrscr();
   printf("\n\t\t\t\tGOOGLE PVT. Ltd");
   printf("\n\t========================================================");
   printf("\n\t\t\tSALARY SLIP FOR THE YEAR:%d",year);
   printf("\n\t________________________________________________________");
   printf("\n\tEMPLOYEE NAME:%s",name);
   printf("\n\tDESIGNATION:%s",post);
   printf("\n\tmonth&year:%d\t%d",month,year);
   printf("\n\t");
   printf("\n\tEARNINGS:---------------------------------------DEDUCTIONS");
   printf("\n\t");
   printf("\n\tBASIC SALARY:%f\t\tPROVIDENT FUND:%f",bsalary,pfund);
   printf("\n\t_________________________________________________________");
   printf("\n\tHRA:%f \t\t\t PROFESSION TAX:%f",hra,ptax);
   printf("\n\t_________________________________________________________");
   printf("\n\tCONVEYANCE:%f \t\t\tloan:%f", conveyance,loan);
   printf("\n\t---------------------------------------------------------");
   printf("\n\tTOTAL EANRNIGS=%f \t\t TOTAL DEDUCTIONS=%f",sume,sumd);
   printf("\n\t---------------------------------------------------------");
   printf("\n\n\t\t\tNETSALARY:%f",net);
   printf("\n\t_________________________________________________________");
   printf("\n\tSIGNATURE OF THE EMPLOYEE: \t\t DIRECTOR:SUNDAR_PICHAI");
   printf("\n\t==========================================================");
   getch();

}