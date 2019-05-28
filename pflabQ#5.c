/*Write a program that displays water bill. Your program should prompt the user 
to enter an integer account number, a character user code, and a real number 
representing the gallons of water used. The output from your program should 
include the account number, message indicating the type of usage, and the amount of money
 due from the user. The water rates vary depending on the type of usage. A code of H means home use,
  a code of C means commercial use, and a code of I means industrial use. Any other code value should 
be treated as an error. Water rates are computed as follows: Code H: Rs. 500 per gallon CodeC:Rs.1000
for the first 1000gallons used plus Rs.250 for each additional gallon used CodeI:Rs.1000.00 if usage 
does not exceed 500 gallons Rs.2000.00 if usage is between 500 gallons to 2500 gallons Rs. 3000.00 if 2500
 or above gallons are used.*/
 #include<stdio.h>
 #include<conio.h>
 main(){
 	int acc_num ,gal_used,amount ;
 	char user_code ;
	printf("Enter Account Number:\n") ;
 	scanf("%d",&acc_num) ;
 	fflush(stdin) ;
	printf("User Code:(Press \n h for Home Usage.\n C for Commercial Usage.\n I for Industrial usage. ) \n") ;
 	scanf("%c", &user_code) ;
	printf("No. of Gallons of Water used:\n") ;
 	scanf("%d",&gal_used) ;
	printf("\n \n \n ");
	printf("Account Number : %d \n",acc_num);
	switch(user_code)
		{
		case 'H':
		case 'h':
			printf("Usage Type is:Home. \n");
			if(gal_used>0){
			amount=gal_used*500 ;
			printf("Amount to be paid is %d. \n",amount);
			}
			else
				printf("Invalid Input \n");
		break ;
		case 'C':
		case 'c':
			printf("Usage Type is:Commercial. \n");
			if(gal_used<=1000){
			amount=gal_used*1000 ;
			printf("Amount to be paid is %d.\n",amount);
			}
			else if(gal_used>1000){
			amount=(gal_used*1000)+250 ;
			printf("Amount to be paid is %d.\n",amount);
			}
			else
				printf("Invalid Input \n");			
		break ;
		case 'I':
		case 'i':
			printf("Usage Type is:Industrail. \n");
			if(gal_used<=500){
			amount=gal_used*1000 ;
			printf("Amount to be paid is %d.\n",amount);
			}
			else if(gal_used>500 && gal_used<2500){
			amount=gal_used*2000;
			printf("Amount to be paid is %d.\n",amount);
			}
			else if(gal_used>=2500){
			amount=gal_used*3000;
			printf("Amount to be paid is %d.\n",amount);
			}	
			else
			printf("Invalid Input \n");			
		break ;
		default :	
			printf("YOU ENTERED INVALID CODE.\n");
		break ;
		}
	}
