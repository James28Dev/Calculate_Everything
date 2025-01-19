#include <stdio.h>

//Globle variable
int mainChoice, subChoice;
char saveValue;

void printMainTitle() {
	printf("--------------------- Calculate Everything ---------------------\n");
} //end of mainTitle function

void printMainMenu() {
	printf("\t--------------------- Menu ---------------------\n");
	printf("\t  0). Exit Program\n");
	printf("\t  1). Calculator\n");
	printf("\t------------------------------------------------\n");
} //end of mainMenu function

void printSubCalculator(float *result) {
	printf("\t------------------ Calculator ------------------\n"); 
	printf("\t  0). Back\n");
	printf("\t  1). Addition of numbers\n");
	printf("\t  2). Subtraction of numbers\n");
	printf("\t  3). Multiplication of numbers\n");
	printf("\t  4). Division of numbers\n
	    ")
	printf("\t  The result is %.2f\n", *result);
} //end of printSubCalculator function

float calculator(int *choice, float *numAdd1, float *numAdd2) {
	switch(*choice) {
		case 1:
			return *numAdd1 + *numAdd2;
			break;
		//end of case 1 of choice switch
		case 2:
			return *numAdd1 - *numAdd2;
			break;
		//end of case 2 of choice switch
		case 3:
			return *numAdd1 * *numAdd2;
			break;
		//end of case 3 of choice switch
		case 4:
			return *numAdd1 / *numAdd2;
			break;
		//end of case 4 of choice switch
	} //end of choice switch
} //end of calculator function

void main() {
	do{
		mainChoice = 0, subChoice = 0; //reset value globle variable
		printMainTitle(); //call printMainTitle function
		printMainMenu(); //call printMainMenu function
		printf("\tEnter your choice : ");
		scanf(" %d", &mainChoice); //get mainChoice variable
		
		switch(mainChoice) {
			case 1:
				do{
					float number1 = 0, number2 = 0, ans; //create and reset local variable
					system("cls"); //clear screen
					printMainTitle(); //call printMainTitle function
					printSubCalculator(&ans); //call printSubCalculator function
					printf("\tEnter your choice : ");
					scanf(" %d", &subChoice); //get subChoice variable
					
					switch(subChoice) {
						case 1:
							printf("\t-------------- Addition of numbers -------------\n");
							if(ans == 0) {
								printf("\tEnter 1st numbers : ");
								scanf(" %f", &number1); //get number1 variable
								printf("\tEnter 2nd numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f + %.2f = %.2f\n", number1, number2, calculator(&subChoice, &number1, &number2)); //call calculator function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f + %.2f = %.2f\n", ans, number2, calculator(&subChoice, &ans, &number2)); //call calculator function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = calculator(&subChoice, &number1, &number2); //call calculator function
								} //end ans == 0 if
								else {
									ans = calculator(&subChoice, &ans, &number2); //call calculator function
								} //end else
							} //end of saveValue == Y if	
							break;
						//end of case 1 of subChoice switch
						case 2:
							printf("\t------------ Subtraction of numbers ------------\n");
							if(ans == 0) {
								printf("\tEnter 1st numbers : ");
								scanf(" %f", &number1); //get number1 variable
								printf("\tEnter 2nd numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f - %.2f = %.2f\n", number1, number2, calculator(&subChoice, &number1, &number2)); //call calculator function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f - %.2f = %.2f\n", ans, number2, calculator(&subChoice, &ans, &number2)); //call calculator function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = calculator(&subChoice, &number1, &number2); //call calculator function
								} //end ans == 0 if
								else {
									ans = calculator(&subChoice, &ans, &number2); //call calculator function
								} //end else
							} //end of saveValue == Y if	
							break;
						//end of case 2 of subChoice switch
						case 3:
							printf("\t---------- Multiplication of numbers -----------\n");
							if(ans == 0) {
								printf("\tEnter 1st numbers : ");
								scanf(" %f", &number1); //get number1 variable
								printf("\tEnter 2nd numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f * %.2f = %.2f\n", number1, number2, calculator(&subChoice, &number1, &number2)); //call calculator function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f * %.2f = %.2f\n", ans, number2, calculator(&subChoice, &ans, &number2)); //call calculator function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = calculator(&subChoice, &number1, &number2); //call calculator function
								} //end ans == 0 if
								else {
									ans = calculator(&subChoice, &ans, &number2); //call calculator function
								} //end else
							} //end of saveValue == Y if	
							break;
						//end of case 3 of subChoice switch
						case 4:
							printf("\t-------------- Division of numbers ---------------\n");
							if(ans == 0) {
								printf("\tEnter 1st numbers : ");
								scanf(" %f", &number1); //get number1 variable
								printf("\tEnter 2nd numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f / %.2f = %.2f\n", number1, number2, calculator(&subChoice, &number1, &number2)); //call calculator function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f * %.2f = %.2f\n", ans, number2, calculator(&subChoice, &ans, &number2)); //call calculator function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = calculator(&subChoice, &number1, &number2); //call calculator function
								} //end ans == 0 if
								else {
									ans = calculator(&subChoice, &ans, &number2); //call calculator function
								} //end else
							} //end of saveValue == Y if	
							break;
						//end of case 4 of subChoice switch
					} //end of subChoice switch
				} while(subChoice != 0); //end of do-while loops
				//break;
			// end of case 1 of mainChoice switch
			
		} //end of mainMenu switch
		system("cls"); //clear screen
	} while(mainChoice != 0); //end of do-while loops
	
	printMainTitle(); //call printMainTitle function
	printf("\n\t------------------------------------------------\n");
	printf("\t\t\t  Exit program\n");
	printf("\t\t       Thank you everyone\n\n");
	printf("\t\t\t----------------\n");
	printf("\t\t\t   Credit by\n");
	printf("\t\t      Github : James28Dev\n");
	printf("\t------------------------------------------------\n");
} //end of main function
