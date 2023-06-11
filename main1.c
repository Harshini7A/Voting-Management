#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "voting.h"
int z;
main()
{
	system("COLOR E4");
	printf("\n\n\t 1.LOGIN\n\t2.EXIT OR QUIT");
	scanf("%d",&z);
	switch(z)
	{
		case 1:login();
		break;
	//	case 2:signin();
	//	break;
		case 2: exit(0);
		break;
		default:printf("\n option not found...........please enter the valid option........");
	}
return(0);	 
}
