#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct
{
	char name[50];
	int train_num;
	int num_of_seats;
} pd;


void signup(){

	system("cls");
	char name[10];
	char username[10];
	char pass[10];
	
    printf("\n  =======================  SIGN UP FORM  =======================\n");
    printf(" \n                       ENTER NAME:-");
    scanf("%49s", name);  // Use scanf for name
    fflush(stdin);  // Clear input buffer
    printf(" \n                       ENTER USERNAME:-");
    scanf("%9s", username);  // Use scanf for username
    fflush(stdin);  // Clear input buffer
    printf(" \n                       ENTER PASSWORD:-");
    scanf("%9s", pass);  // Use scanf for password
    fflush(stdin);  // Clear input buffer


	FILE *fp;

	fp = fopen("user.txt","a");
	if(fp!=NULL){
		fprintf(fp,"%s %s %s\n", name, username,pass);
		fclose(fp);
		printf("\n  Sign up successful! You can now log in using your credentials.\n");
	}
	else{
		printf("\n  Error creating user. Please try again later.\n");
	}

}

void specifictrain(int train_num)
{

	if (train_num == 1001)
	{
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tBoston to Manhattan");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num == 1002)
	{
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tManhattan to Boston");
		printf("\nDeparture:\t\t12pm");
	}
	if (train_num == 1003)
	{
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tBoston to L.A");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num == 1004)
	{
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tL.A to Boston");
		printf("\nDeparture:\t\t11am ");
	}
	if (train_num == 1005)
	{
		printf("\nTrain:\t\t\tIron City Express");
		printf("\nDestination:\t\tBoston to Chicago");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num == 1006)
	{
		printf("\ntrain:\t\t\tIron City Express");
		printf("\nDestination:\t\tChicago to Boston");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (train_num == 1007)
	{
		printf("\ntrain:\t\t\tKeystone Express");
		printf("\nDestination:\t\tBoston to Washington");
		printf("\nDeparture:\t\t1pm ");
	}
	if (train_num == 1008)
	{
		printf("\ntrain:\t\t\tKeystone Express");
		printf("\n Destination:\t\tWashington to Boston");
		printf("\nDeparture:\t\t4pm ");
	}
	if (train_num == 1009)
	{
		printf("\ntrain:\t\t\tMeteor Express");
		printf("\nDestination:\t\tBoston to Miami");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (train_num == 1010)
	{
		printf("\ntrain:\t\t\tMeteor Express");
		printf("\nDestination:\t\tMiami to Boston");
		printf("\nDeparture:\t\t1.15 ");
	}
}


void printTicket(char name[], int num_of_seats, int train_num, float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s", name);
	printf("\nNumber Of Seats:\t%d", num_of_seats);
	printf("\nTrain Number:\t\t%d", train_num);
	specifictrain(train_num);
	printf("\nCharges:\t\t%.2f", charges);
}



float charge(int train_num , int num_of_seats){
	if (train_num == 1001)
	{
		return (5000.0 * num_of_seats);
	}
	if (train_num == 1002)
	{
		return (5000.0 * num_of_seats);
	}
	if (train_num == 1003)
	{
		return (4500.0 * num_of_seats);
	}
	if (train_num == 1004)
	{
		return (4500.0 * num_of_seats);
	}
	if (train_num == 1005)
	{
		return (4000.0 * num_of_seats);
	}
	if (train_num == 1006)
	{
		return (4000.0 * num_of_seats);
	}
	if (train_num == 1007)
	{
		return (3500.0 * num_of_seats);
	}
	if (train_num == 1008)
	{
		return (3500.0 * num_of_seats);
	}
	if (train_num == 1009)
	{
		return (6000.0 * num_of_seats);
	}
	if (train_num == 1010)
	{
		return (6000.0 * num_of_seats);
	}
}
void viewdetails(void)
{

	system("cls");
	printf("-----------------------------------------------------------------------------");
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\tRed Lines Express\tBoston to Manhattan\tRs.5000\t\t9am");
	printf("\n1002\tRed Lines Express\tManhattan To Boston\tRs.5000\t\t12pm");
	printf("\n1003\tLA City Express\t\tBoston To L.A\t\tRs.4500\t\t8am");
	printf("\n1004\tLA City Express\t\tL.A To Boston\t\tRs.4500\t\t11am");
	printf("\n1005\tIron City Express\tBoston To Chicago\tRs.4000\t\t7am");
	printf("\n1006\tIron City Express\tChicago To Boston\tRs.4000\t\t9.30am");
	printf("\n1007\tKeystone Express\tBoston To Washington\tRs.3500\t\t1pm");
	printf("\n1008\tKeystone Express\tWashington To Boston\tRs.3500\t\t4pm");
	printf("\n1009\tMeteor Express\t\tBoston To Miami\t\tRs.6000\t\t3.35pm");
	printf("\n1009\tMeteor Express\t\tMiami To Boston\t\tRs.6000\t\t4.15pm");
}



int verifyuser(char uname[], char pass[]){

	FILE* fp;
	fp = fopen("user.txt","r");

	if(fp!=NULL){
		char file_name[10] , file_uname[10], file_pass[10];
		while(fscanf(fp,"%s %s %s" , file_name, file_uname, file_pass)!=EOF){
			if(strcmp(file_uname,uname)==0 && strcmp(file_pass,pass)==0){
				fclose(fp);
				return 1;
			}
		}
		fclose(fp);
	}
	return 0;
}

int login()
{

	char uname[10], c = ' ';
	char pass[10];
	int i = 0, a = 0;

	do
	{
		printf("\n  =======================  LOGIN FORM  =======================\n  ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s", &uname);
		printf(" \n                       ENTER PASSWORD:-");
		while (i < 10)
		{
			pass[i] = getch();
			c = pass[i];
			if (c == 13)
			{
				break;
			}
			else
			{
				printf("*");
			}
			i++;
		}

		pass[i] = '\0';


		if (verifyuser(uname,pass)==1)
		{
			printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
			printf("\n\n\n\t\t\t\tPress any key to continue...");
			getch();
			return 1;
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;

			getch();
			system("cls");
			return 0;
		}
	} while (a <= 2);

	if (a > 2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();
	}
	system("cls");
	// getch();
}


void reservation()
{

	if(login()==1){

		char confirm;
		int i = 0;
		pd passengerdetails;
		float charges = 0;

		FILE *fp;
		fp = fopen("resevation.txt", "a");
		system("cls");

		printf("\nEnter your Name");
		fflush(stdin);
		gets(passengerdetails.name);
		printf("\nEnter Number of seats:> ");
		scanf("%d", &passengerdetails.num_of_seats);
		getchar();

		printf("\n\n>>Press Enter To View Available Trains<< ");
		getch();
		system("cls");
		viewdetails();
		printf("\n\nEnter train number:> ");

	start1:
		scanf("%d", &passengerdetails.train_num);
		if (passengerdetails.train_num >= 1001 && passengerdetails.train_num <= 1010)
		{
			charges = charge(passengerdetails.train_num, passengerdetails.num_of_seats);
			printTicket(passengerdetails.name, passengerdetails.train_num, passengerdetails.num_of_seats, charges);
		}
		else
		{
			printf("\nInvalid Train Number! Enter again-->");
			goto start1;
		}

		printf("\n\n Confirm Ticket (y/n):>");

	start:
		scanf("%c", &confirm);
		if (confirm == 'y' || confirm=='Y')
		{
			fprintf(fp, "%s\t\t%d\t\t%d\t\t%2.f\n", passengerdetails.name, passengerdetails.num_of_seats, passengerdetails.train_num, charges);
			printf("==================");
			printf("\n Reservation Done\n");
			printf("==================");
			printf("\nPress any key to go back to Main menu");
		}
		else if (confirm == 'n' || confirm =='N'){
				printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
			}
		else{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
		fclose(fp);
		getch();
	}
	else{
		printf("Login unsuccessfull");
	}
}	


void cancel(){

	char name[10];
	printf("\nEnter your Name: ");
	fflush(stdin);
	scanf("%s",&name);
	FILE* fp,*tmp;

	fp = fopen("resevation.txt","r");
	tmp = fopen("tmp.txt","w");

	if(fp == NULL || tmp == NULL){
		printf("\nError accessing reservation data.");
        return;
	}

	char line[100];
	int reservationfound =0;

	while(fgets(line,sizeof(line),fp)!=NULL){
		char currName[50];
		sscanf(line,"%s",currName);\

		if(strcmp(name,currName)==0){
			reservationfound = 1;
            continue; 
		}
		fprintf(tmp, "%s", line);
	}

	fclose(fp);
	fclose(tmp);

	if(reservationfound){
		remove("resevation.txt");
		rename("tmp.txt","resevation.txt");
		printf("\nReservation canceled successfully.");

	}

	else{
		printf("\nNo reservation found under the provided name.");
        remove("temp.txt");
	}
}



int main()
{
	system("cls");

	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");

	printf(" \n Press any key to continue:");

	getch();
	system("cls");

	int menu_choice;

start:
	system("cls");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n------------------------");
	printf("\n1>> Sign up");
	printf("\n------------------------");
	printf("\n2>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n3>> View All Available Trains");
	printf("\n------------------------");
	printf("\n4>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n5>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d", &menu_choice);

	switch (menu_choice)
	{
	case 1:
		signup();
		break;
	case 2:
		reservation();
		break;
	case 3:
		viewdetails();
		printf("\n\nPress any key to go to Main Menu..");
		getch();
		break;
	case 4:
		cancel();
		getch();
		break;
	case 5:
		return (0);
	default:
		printf("\nInvalid choice");
	}
	goto start;
	return (0);
}