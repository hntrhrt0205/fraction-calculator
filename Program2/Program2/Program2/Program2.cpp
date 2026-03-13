/*Purpose: To add and subtract pairs of integer
fractions*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fractionOne(int numeratorOne, int denominatorOne);
void fractionTwo(int numeratorTwo, int denominatorTwo);
void outputFraction(int outputNumerator, int outputDenominator);
void outputFractionTwo(int outputNumeratorTwo, int outputDenominator);
double fractionToDecimal(double fractionToDecimalCalculation);
double fractionToDecimalTwo(double fractionToDecimalCalculationTwo);


void main() {
	int numeratorOne, denominatorOne, numeratorTwo, denominatorTwo;
	printf("Please enter a numerator: ");
	scanf("%d", &numeratorOne);
	printf("Please enter a denominator (zero is not allowed!): ");
	scanf("%d", &denominatorOne);
	printf("Please enter a numerator: ");
	scanf("%d", &numeratorTwo);
	printf("Please enter a denominator (zero is not allowed!): ");
	scanf("%d", &denominatorTwo);

	int outputNumerator = ((numeratorOne * denominatorTwo) + (numeratorTwo * denominatorOne));
	int outputNumeratorTwo = ((numeratorOne * denominatorTwo) - (numeratorTwo * denominatorOne));
	int outputDenominator = ((denominatorOne * denominatorTwo));
	double fractionToDecimalCalculation = (double)outputNumerator / outputDenominator;
	double fractionToDecimalCalculationTwo = (double)outputNumeratorTwo / outputDenominator;


	printf("\n");
	fractionOne(numeratorOne, denominatorOne);
	printf(" + ");
	fractionTwo(numeratorTwo, denominatorTwo);
	printf(": ");
	printf("The resulting fraction is ");
	outputFraction(outputNumerator, outputDenominator);
	printf(".\n");
	printf("The decimal representation of ");
	outputFraction(outputNumerator, outputDenominator);
	printf(" is ");
	fractionToDecimal(fractionToDecimalCalculation);

	printf("\n");
	fractionOne(numeratorOne, denominatorOne);
	printf(" - ");
	fractionTwo(numeratorTwo, denominatorTwo);
	printf(": ");
	printf("The resulting fraction is ");
	outputFractionTwo(outputNumeratorTwo, outputDenominator);
	printf(".\n");
	printf("The decimal representation of ");
	outputFractionTwo(outputNumeratorTwo, outputDenominator);
	printf(" is ");
	fractionToDecimalTwo(fractionToDecimalCalculationTwo);


}

void fractionOne(int numeratorOne, int denominatorOne) {
	printf("%d/%d", numeratorOne, denominatorOne);
}

void fractionTwo(int numeratorTwo, int denominatorTwo) {
	printf("%d/%d", numeratorTwo, denominatorTwo);
}

void outputFraction(int outputNumerator, int outputDenominator) {
	printf("%d/%d", outputNumerator, outputDenominator);
}

void outputFractionTwo(int outputNumeratorTwo, int outputDenominator) {
	printf("%d/%d", outputNumeratorTwo, outputDenominator);
}

double fractionToDecimal(double fractionToDecimalCalculation) {
	double fractionToDecimalAnswer = printf("%.2f\n\n", fractionToDecimalCalculation);
	return fractionToDecimalAnswer;
}

double fractionToDecimalTwo(double fractionToDecimalCalculationTwo) {
	double fractionToDecimalAnswerTwo = printf("%.2f\n\n", fractionToDecimalCalculationTwo);
	return fractionToDecimalAnswerTwo;
}