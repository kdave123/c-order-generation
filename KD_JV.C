#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
  {     FILE *f;
	int ch,nas,bis;
	struct date d;
	char acc_nm[64],c,c_nm[64];
      //	char choice='Y';
	clrscr();
	getdate(&d);


	 up:
	 printf("1.New Company\n2.Display Existing company\n3.Enter Order Details\n4.Exit\t:");
	 scanf("%d",&ch);
      switch(ch)
      {
       case 1:

	  printf("Enter Company Name\t:");
	  scanf("%s",&acc_nm);
				   //  printf("%s",acc_nm);
	  f=fopen("allcompanies.txt","a");

	  fprintf(f,"%s\t\t\tDate Created: ",acc_nm);
	  fprintf(f,"%d-%d-%d\n",d.da_day,d.da_mon,d.da_year);

	  fclose(f);




	  goto up;
       case 2:

     // for asking acc	//  printf("Enter your account name");

	  f=fopen("allcompanies.txt","r");
	  while((c=getc(f))!=EOF)
	  printf("%c",c);
	  fclose(f);

	  printf("Enter Company Name to get details\t: ");
	  scanf("%s",&c_nm);

	   f=fopen(c_nm,"r");
	  while((c=getc(f))!=EOF)
	  printf("%c",c);
	  fclose(f);

	  goto up;
       case 3:
	  f=fopen("allcompanies.txt","r");
	  while((c=getc(f))!=EOF)
	  printf("%c",c);
	  fclose(f);

	  printf("Order Placed By? (Company name)\t:");
	  scanf("%s",&c_nm);

	  f=fopen(c_nm,"a");
	  printf("Item 1: ");
	  scanf("%d",&nas);
	  printf("Item 2: ");
	  scanf("%d",&bis);
	  fprintf(f,"\nDate: %d-%d-%d\n",d.da_day,d.da_mon,d.da_year);
	  fprintf(f,"Item 1:%d\tItem 2:%d\tTotal:%d\tGrand Price:%d \n",nas,bis,nas+bis,(nas+bis)*17);
		//17 cost per item
	  fclose(f);

      //	  f=fopen(c_nm,"w");
      //	  fprintf(f,"%d",(nas+bis)*17);
      //	  fclose(f);

	  goto up;
       case 4:
       exit();
      }

  getch();


}