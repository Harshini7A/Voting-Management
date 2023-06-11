#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "BJP"
#define CANDIDATE2 "CONGRESS"
#define CANDIDATE3 "TRS"
#define CANDIDATE4 "Bahujan Samaj Party"
#define CANDIDATE5 "Telugu Desham Party"  
int login(void);
void user_main(); 
void cast(void);
void leaderboard(int []);
void check(void);
void gender(int [], int []);
void exitg(void);
int n,i,ctr=0,id,age,m=0,f=0,ctr1=0,m1=0,f1=0,ctr2=0,m2=0,f2=0,ctr3=0,m3=0,f3=0,ctr4=0,m4=0,f4=0,ctr5=0,m5=0,f5=0;
int k,l,ch,b,ct[10],male[10],female[10];
char chh,g,c,o;
void user_main() 
{
	system("COLOR F0");
 FILE *fp; 
 fp=fopen("ELECTIONS","w+");
l:printf("\n please choose one:");
printf("\n 1.cast vote");
printf("\n 2.check party wise voting list");
printf("\n 3.check the leader board:");
printf("\n 4.check gender vise votes");
printf("\n 5.exit");
scanf("%d",&n);
if(n==5)
{
	exitg();
}
else{

if(n==1)
{
  printf("\n please enter your age :");
scanf("%d",&age);
if(age>=18)
{
	printf("===========================================================\n");
	printf("===========================================================\n");
	printf("==                                                       ==\n");
	printf("==                                                       ==\n");
	printf("==                                                       ==\n");
    printf("==     ###### _WELCOME TO THE POLL_######                ==\n");
	printf("==                                                       ==\n");
	printf("==                                                       ==\n");
	printf("==                                                       ==\n");
	printf("===========================================================\n");
	printf("===========================================================\n");
 	 printf("\n");
 	 printf("\n Before you cast your vote , you are requested to enter your voter id");
 	 scanf("%d",&id);
 //	 putw("%d",fp);
 cast();

	}	
	  else
     {
     	printf("\n sorry you are not eligible for voting as your age is below 18\n");
     	printf("_______________________\n");
     }
 	 
 
}
if(n==2)
{
	//leaderboard(ct);
	check();
}
if(n==3)
{
	leaderboard(ct);
}
if(n==4)
{
	gender(male,female);
}


printf("\nwant to try again?");
scanf(" %c",&chh);
if(chh=='y'||chh=='Y')
goto l;

}
}
void cast()
{
	FILE *fp; 
 fp=fopen("ELECTIONS","w+");
	int t=id;
	//putw(id,fp);
	 printf("\n please enter your gender(M/F):");
	   scanf(" %c",&g);
	   //putc(g,fp);
	   printf("______________________________________________\n");
 	 printf("\n| PLEASE CHOOSE YOUR PARTY FROM THE BELOW    |");
 	 printf("\n|                                            |");
 	 printf("\n|       1,BJP                                |");
 	 //fputs("1,BJP",fp);
 	 printf("\n|       2,CONGRESS                           |");
 	  //fputs("2,CONGRESs",fp);
 	 printf("\n|       3,TRS                                |");
 	  //fputs(" 3,TRS",fp);
 	 printf("\n|       4,Bahu Jana Samaj Party              |");
 	  //fputs(" 4,Bahu Jana Samaj Party",fp);
 	 printf("\n|       5,Telugu Dhesam Party                |");
 	  //fputs(" 5,Telugu Dhesam Party",fp);
 	 printf("\n|       6,none of these                      |");
 	//  fputs("6,none of these",fp);
 	printf("\n|_____________________________________________|\n");
 	 scanf("%d",&ch);
 	 
 	  //fputs(ch,fp);
 	 switch(ch)
 	 {
 	 	case 1:
 	 		{
 	 			printf("\n thankyou for casting your vote");
 	 			printf("\n____________");
 	 			ctr++;
 	 			if(g=='M'||g=='m')
 	 			{
 	 				m++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f++;
				  }
			  }break;
			  	case 2:
			{
				printf("\n thankyou for casting your vote");
				printf("\n____________");
				ctr1++;
					if(g=='M'||g=='m')
 	 			{
 	 				m1++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f1++;
				  }
				
			}break;
	       case 3:
	       	{
				printf("\n thankyou for casting your vote");
			 	printf("\n____________");
				ctr2++;
					if(g=='M'||g=='m')
 	 			{
 	 				m2++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f2++;
				  }
			}break;
		case 4:
			{
				printf("\n thankyou for casting your vote");
	 			printf("\n____________");
                    ctr3++;
					if(g=='M'||g=='m')
 	 			{
 	 				m3++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f3++;
				  }
			}break;
		case 5:
			{
				printf("\n thankyou for casting your vote");
	 	 			printf("\n____________");
			ctr4++;
					if(g=='M'||g=='m')
 	 			{
 	 				m4++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f4++;
				  }
			}break;
				case 6:
 	 		{
 	 			printf("\n thankyou for casting your vote");
 	 			printf("\n____________");
 	 			ctr5++;
 	 			if(g=='M'||g=='m')
 	 			{
 	 				m5++;
				  }
				  else if(g=='F'||g=='f')
				  {
				  	f5++;
				  }
			  }break;
		default:
        		printf("\n please choose correct option:");
	  }
ct[0]=ctr;
 ct[1]=ctr1;
 ct[2]=ctr2;
 ct[3]=ctr3;
 ct[4]=ctr4;
 ct[5]=ctr5;
 male[0]=m;
 male[1]=m1;
 male[2]=m2;
 male[3]=m3;
 male[4]=m4;
 male[5]=m5;
female[0]=f;
female[1]=f1;
female[2]=f2;
female[3]=f3;
female[4]=f4;
female[5]=f5;
}
void check(void)
{

      printf("_________________________________________________");
	printf("\n|     ##### Voting Statics ####                 |");
 	printf("\n|                                               |");
    printf("\n|       1,BJP - %d                               |", ctr);
 	printf("\n|       2,CONGRESS - %d                          |", ctr1);
    printf("\n|       3,TRS - %d                               |",ctr2);
 	printf("\n|       4,Bahu Jana Samaj Party - %d             |",ctr3);
 	printf("\n|       5,Telugu Dhesam Party  - %d              |",ctr4);
 	printf("\n|       6,Spoiled votes  - %d                    |",ctr5);
 	printf("\n|________________________________________________|\n");
 	 
}	
void leaderboard(int a[])
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
		       t=a[i];
			a[i]=a[j];
			a[j]=t;		
			}
		}
	}
	printf("\n");
	printf("the leader board positions according to votes are :");
printf("\n");
printf("1,%d",a[0]);
 if(ctr>ctr1 && ctr>ctr2 && ctr >ctr3 && ctr>ctr4)
    printf("[%s] ",CANDIDATE1,ctr);
    else  if(ctr1>ctr && ctr1>ctr2 && ctr1>ctr3 && ctr1>ctr4)
    printf("[%s] ",CANDIDATE2,ctr1);
    else  if(ctr2>ctr && ctr2>ctr1 && ctr2>ctr3 && ctr2>ctr4)
    printf("[%s] ",CANDIDATE3,ctr2);
    else  if(ctr3>ctr && ctr3>ctr1 && ctr3>ctr2 && ctr3>ctr4)
    printf("[%s] ",CANDIDATE4,ctr3);
     else  if(ctr4>ctr && ctr4>ctr1 && ctr4>ctr2 && ctr4>ctr3)
    printf("[%s] ",CANDIDATE5,ctr4);
    printf("\n");
    printf("2,%d",a[1]);
 if(ctr<ctr1 && ctr>ctr2 && ctr >ctr3 && ctr>ctr4)
    printf("[%s] ",CANDIDATE1,ctr);
    else  if(ctr1<ctr && ctr1>ctr2 && ctr1>ctr3 && ctr1>ctr4)
    printf("[%s] ",CANDIDATE2,ctr1);
    else  if(ctr2<ctr && ctr2>ctr1 && ctr2>ctr3 && ctr2>ctr4)
    printf("[%s] ",CANDIDATE3,ctr2);
    else  if(ctr3<ctr && ctr3>ctr1 && ctr3>ctr2 && ctr3>ctr4)
    printf("[%s] ",CANDIDATE4,ctr3);
     else  if(ctr4<ctr && ctr4>ctr1 && ctr4>ctr2 && ctr4>ctr3)
    printf("[%s] ",CANDIDATE5,ctr4);
    printf("\n");
    printf("3,%d",a[2]);
 if(ctr>ctr1 && ctr<ctr2 && ctr >ctr3 && ctr>ctr4)
    printf("[%s] ",CANDIDATE1,ctr);
    else  if(ctr1>ctr && ctr1<ctr2 && ctr1>ctr3 && ctr1>ctr4)
    printf("[%s] ",CANDIDATE2,ctr1);
    else  if(ctr2>ctr && ctr2<ctr1 && ctr2>ctr3 && ctr2>ctr4)
    printf("[%s] ",CANDIDATE3,ctr2);
    else  if(ctr3>ctr && ctr3<ctr1 && ctr3>ctr2 && ctr3>ctr4)
    printf("[%s] ",CANDIDATE4,ctr3);
     else  if(ctr4>ctr && ctr4<ctr1 && ctr4>ctr2 && ctr4>ctr3)
    printf("[%s] ",CANDIDATE5,ctr4);
    printf("\n");
    printf("4,%d",a[3]);
 if(ctr>ctr1 && ctr>ctr2 && ctr<ctr3 && ctr>ctr4)
    printf("[%s] ",CANDIDATE1,ctr);
    else  if(ctr1>ctr && ctr1>ctr2 && ctr1<ctr3 && ctr1>ctr4)
    printf("[%s] ",CANDIDATE2,ctr1);
    else  if(ctr2>ctr && ctr2>ctr1 && ctr2<ctr3 && ctr2>ctr4)
    printf("[%s] ",CANDIDATE3,ctr2);
    else  if(ctr3>ctr && ctr3>ctr1 && ctr3<ctr2 && ctr3>ctr4)
    printf("[%s] ",CANDIDATE4,ctr3);
     else  if(ctr4>ctr && ctr4>ctr1 && ctr4<ctr2 && ctr4>ctr3)
    printf("[%s] ",CANDIDATE5,ctr4);
    printf("\n");
    printf("5,%d",a[4]);
 if(ctr>ctr1 && ctr>ctr2 && ctr >ctr3 && ctr<ctr4)
    printf("[%s] ",CANDIDATE1,ctr);
    else  if(ctr1>ctr && ctr1>ctr2 && ctr1>ctr3 && ctr1<ctr4)
    printf("[%s] ",CANDIDATE2,ctr1);
    else  if(ctr2>ctr && ctr2>ctr1 && ctr2>ctr3 && ctr2<ctr4)
    printf("[%s] ",CANDIDATE3,ctr2);
    else  if(ctr3>ctr && ctr3>ctr1 && ctr3>ctr2 && ctr3<ctr4)
    printf("[%s] ",CANDIDATE4,ctr3);
     else  if(ctr4>ctr && ctr4>ctr1 && ctr4>ctr2 && ctr4<ctr3)
    printf("[%s] ",CANDIDATE5,ctr4);
 	
}
void gender(int male[],int female[])
{
printf("\ntotal male :");
printf("\n");
    int t=0,i,j,tt=0;
  
    for(i=0;i<5;i++)
    {
    	t=t+male[i];
    }
    printf("%d",t);
    printf("\n");
    printf("\ntotal female:");
printf("\n");
     for(i=0;i<5;i++)
    {
    	tt=tt+female[i];
    }
    printf("%d",tt);
}
void exitg()
{
	printf("\n ####_thankyou_####");
	printf("\n____________");
exit(0);
}
int login()
{
	char profile[2][30]={"Harshini","2005"};
	char uname[30],ps[30],ch;
	int c,u,v,f;
    	login:
    	f=0;
  	do
	{
	printf("\n\n\n\t\t\tLOGIN FORM......\n\n");
	printf("\n\t\t\tUSER NAME : ");
	scanf("%s",uname);
	printf("\n\t\t\tPASSWORD : ");
	while((ch=getch())!='\r')
	{
	     ps[f++]=ch;
	     ch='*';
	    printf("%c",ch);
	}
	ps[f]='\0';
	u=strcmp(uname,profile[0]);
	v=strcmp(ps,profile[1]);
	printf("\n\n Please wait Credential Verification is in Process....");
	sleep(3);
	system("cls");
	if(u==0&&v==0)
	{
		printf("\n VOTING MANAGEMENT SYSTEM::...................................\n");
		user_main();
		return(0);
	}
	else
	{
		printf("\n\n Credentials are wrong.....please try again.....");
		c++;
		printf("\n\n Left %d attempts",3-c);
	}	
}while(c<3);
	
}
