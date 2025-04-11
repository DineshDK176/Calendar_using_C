#include<stdio.h>
void month();
void days_name(int p);
void no_days(int a);
int x,count=0;

void month() // Function to show the name of the Months
{
	for(int i=1;i<=12;i++) // For each case Each month name is printed
    	{	
		switch (i)
        	{
			case 1:
			printf("\n\t  ---JANUARY---");
            		break;
            		case 2:printf("\n\n\t  ---FEBRUARY---");
            		break;
            		case 3:printf("\n\n\t  ---MARCH---");
            		break;
            		case 4:printf("\n\n\t  ---APRIL---");
            		break;
            		case 5:printf("\n\n\t  ---MAY---");
            		break;
            		case 6:printf("\n\n\t  ---JUNE---");
            		break;
            		case 7:printf("\n\n\t  ---JULY---");
            		break;
            		case 8:printf("\n\n\t  ---AUGUST---");
            		break;
            		case 9:printf("\n\n\t  ---SEPTEMBER---");
            		break;
            		case 10:printf("\n\n\t  ---OCTOBER---");
            		break;
            		case 11:printf("\n\n\t  ---NOVEMBER---");
            		break;
            		case 12:printf("\n\n\t  ---DECEMBER---");
            		break;
        	}
		days_name(i); // To print the Name of the Days
    	}
}

void days_name(int p) // A function prints the Days
{
	char days[]="SUN  MON  TUE  WED  THU  FRI  SAT"; // Days Name Stored in a Char Array
	printf("\n\n%s\n---------------------------------\n",days);
	no_days(p); // To print the Date of the each Months
}
void no_days(int a) // Function to print the date of each month
{
	int i,j=31;
    	if(count=1) // To print space b/w the date
    	{
		for(count;count<=x;count++)
        	{
			printf(" ");
        	}
    	}    
    	if(a==2) // If it is a 2nd month it has 28 days
		j=28;
    	else if(a==4||a==6||a==9||a==11)   // For these respective months have 30 days
		j=30;
    	for(i=1,x;i<=j;x++)     
    	{   
		if(i<=9)
        	{
			if(x==1||x==6||x==11||x==16||x==21||x==26||x==31)
			{
				printf(" %d",i);
				i++;
			}    
	 		else if(x==2||x==3||x==4||x==7||x==8||x==9||x==12||x==13||x==14||x==17||x==18||x==19||x==22||x==23||x==24||x==27||x==28||x==29)
				printf(" ");
	 		else if(x==32)   
			{
				printf("\n");
	    			x=0;
	 		}    
        	}
        	else
        	{	
			if(x==1||x==6||x==11||x==16||x==21||x==26||x==31)
			{
				printf("%d",i);
				i++;
			}    
	 		else if(x==0||x==2||x==9||x==10||x==13||x==17||x==18||x==23||x==28||x==29)
				printf("  ");
	 		else if(x==32)   
			{
				printf("\n ");
	    			x=0;
	 		}    
        	}
    	}
    	count=1;
}
void main ()
{
	printf("\t---CALANDAR-2023---\n"); // Title of the Calendar project
	month(); // To print the Name of the Months
}
