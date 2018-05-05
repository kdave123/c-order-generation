#include<stdio.h>
#include<conio.h>


void main()
{
  char target[10];//ID (target)
  char target2[10];//ID (target)
  char file1[256]; //File name
  char c,c2,i;
  char no[2];

  int check=0;
  FILE *f;
  clrscr();



    printf("Starting  Date");
    gets(target);
    printf("Ending Date");
    gets(target2);

    printf("Enter Company Name");
    gets(file1);


 //     f=fopen(file1,"w");

//    while( (c=getchar())!=EOF)
//    {
//     putc(c,f);
 //   }

 //    fclose(f);




    f=fopen(file1,"r");
    check=0;
    while(c2!=EOF&& check!=8)
    {
     c2=getc(f);


     if(c2!=target[check])
     {
     check=0;
     }
     if(c2==target[check])
       {
	check++;
	}
    }

	 if(check==8)
      {  check=0;
	 printf("\nFOUND!!\n\t****DETAILS****\n");



      while(c2!=EOF)
    {
     c2=getc(f);
     printf("%c",c2);

     if(c2!=target2[check])
     check=0;

     if(c2==target2[check])
     check++;
	if(check==8)
      goto stop;
      }

   }
  stop:
 //   for(i=0;i<80;i++)
  //     {   c2=getc(f);
  //	 printf("%c",c2);

  //     }
getch();
}