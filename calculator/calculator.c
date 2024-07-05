#include <stdio.h>
#include <stdlib.h>

int Plus(int *num1, int *num2){
	printf("%d\n", *num1 + *num2); 
	return 0;
}

int Minus(int *num1, int *num2){
	printf("%d\n", *num1 - *num2);
	return 0;
}

int Multiplication(int *num1, int *num2){
	printf("%d\n", *num1 * *num2);
	return 0;
}

int main(int argc, char *argv[]){
	printf("%s\n", "Hello, world");
	printf("Number of args : %d\n", argc);	
	
	if (argc < 1 || argc == 1){
		printf("%s\n", "No arguments.");
		return 1;
	}
	else if (argc == 2){
		printf("%s\n", "Missing two arguments.");
		return 1;
	}
	else if (argc == 3){
		printf("%s\n", "Missing one argument.");
		return 1;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	
	printf("%c\n", operand);

	switch (*argv[2]){
		case '+':
			Plus(&num1, &num2);
			break;
		case '-':
			Minus(&num1, &num2);
			break;
		case '*':
			Multiplication(&num1, &num2);
			break;
		default:
			printf("%s\n", "Unknown operand.");
			break;
	}

	return 0;
}
