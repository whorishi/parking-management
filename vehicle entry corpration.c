#include <stdio.h>
#include <conio.h>

struct{
	int amount;
	int totbus;int totcar;int totmotorcycle;int totcycle;int totrikshaw;
	int count;
}entry;



int main()
{
	entry.totbus=0;entry.totcar=0;entry.totcycle=0;entry.totmotorcycle=0;entry.totrikshaw=0;
	while(1)
	{
		
	    switch(menu())
	    {
		    case 1:
			    Bus();
			    break;
			case 2:
				CAR();
				break;
			case 3:
				MOTORCYCLE();
				break;
			case 4:
				CYCLE();
				break;
			case 5:
				RIKSHAW();
				break;
			case 6:
				SHOWSTATUS();
				break;
			case 7:
				CLEARDATA();
				break;
			case 8:
				EXIT();
				break;
			default:
				printf("\nInvalid Choice\n");
	    }
	    printf("\n\n\n");
	    
    }
	return 0;
}

int menu()
{
	
	int i;
	printf("\n____*VEHICLE ENTRY CORPORATION*____");
	printf("\n\t1.bus\n\t2.car\n\t3.motorcycle\n\t4.cycle\n\t5.rikshaw\n\t6.show status\n\t7.clear data\n\t8.exit");
	printf("\n\n\tselect operation : ");
	scanf("%d",&i);
	return (i);
}

void Bus()
{
    entry.totbus++;
	entry.amount+=50;
	entry.count++;
	printf("\nINFORMATION SAVED SUCESSFULLY\n");	
}

void CAR()
{
	entry.totcar++;
	entry.amount+=40;
	entry.count++;
	printf("\nINFORMATION SAVED SUCESSFULLY\n");
}

void MOTORCYCLE()
{
	entry.totmotorcycle++;
	entry.amount+=20;
	entry.count++;
	printf("\nINFORMATION SAVED SUCESSFULLY\n");
}

void CYCLE()
{
	entry.totcycle=1;
	entry.amount+=10;
	entry.count++;
	printf("\nINFORMATION SAVED SUCESSFULLY\n");
}

void RIKSHAW()
{
	entry.totrikshaw++;
	entry.amount+=30;
	entry.count++;
	printf("\nINFORMATION SAVED SUCESSFULLY\n");
}

void SHOWSTATUS()
{
	printf("\n\tTotal Buses=\t\t%d",entry.totbus);
	printf("\n\tTotal Car=\t\t%d",entry.totcar);
	printf("\n\tTotal MotorCycle=\t%d",entry.totmotorcycle);
	printf("\n\tTotal Cycle=\t\t%d",entry.totcycle);
	printf("\n\tTotal Rikshaw=\t\t%d",entry.totrikshaw);
	printf("\n\n\n\t\tTotal Amount Gained=\t\t%d",entry.amount);
	printf("\n\t\tTotal Vehicle entered=\t\t%d",entry.count);
}

void CLEARDATA()
{
	entry.totbus=0;entry.totcar=0;entry.totcycle=0;entry.totmotorcycle=0;entry.totrikshaw=0;
	entry.amount=0;entry.count=0;
}

void EXIT()
{
	printf("\n\tTHANKS FOR USING\n");
	exit(0);
}










