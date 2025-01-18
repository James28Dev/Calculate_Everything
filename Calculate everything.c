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
	printf("\t  The result is %.2f\n", *result);
} //end of printSubCalculator function

float additionOfNumbers(float *numAdd1, float *numAdd2) {
	return *numAdd1 + *numAdd2;
} //end of additionOfNumbers function

float subtractionOfNumbers(float *numAdd1, float *numAdd2) {
	return *numAdd1 - *numAdd2;
} //end of subtractionOfNumbers function

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
								printf("\tThe result of %.2f + %.2f = %.2f\n", number1, number2, additionOfNumbers(&number1, &number2)); //call additionOfNumbers function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f + %.2f = %.2f\n", ans, number2, additionOfNumbers(&ans, &number2)); //call additionOfNumbers function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = additionOfNumbers(&number1, &number2); //call additionOfNumbers function
								} //end ans == 0 if
								else {
									ans = additionOfNumbers(&ans, &number2); //call additionOfNumbers function
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
								printf("\tThe result of %.2f - %.2f = %.2f\n", number1, number2, subtractionOfNumbers(&number1, &number2)); //call subtractionOfNumbers function
							} //end of ans == 0 if
							else {
								printf("\tPrevious answer : %.2f\n", ans);
								printf("\tEnter numbers : ");
								scanf(" %f", &number2); //get number2 variable
								printf("\tThe result of %.2f - %.2f = %.2f\n", ans, number2, subtractionOfNumbers(&ans, &number2)); //call subtractionOfNumbers function
							} //end else
							printf("\tDo you want to keep this answer? [Y/N] : ");
							scanf(" %c", &saveValue); //get saveValue variable
							saveValue = toupper(saveValue);
							
							if(saveValue == 'Y') {
								if(ans == 0) {
									ans = subtractionOfNumbers(&number1, &number2); //call subtractionOfNumbers function
								} //end ans == 0 if
								else {
									ans = subtractionOfNumbers(&ans, &number2); //call subtractionOfNumbers function
								} //end else
							} //end of saveValue == Y if
							break;
						//end of case 2 of subChoice switch
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
