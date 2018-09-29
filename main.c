//
//  bmi.c
//  BmiLab
//
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Body Mass Index Lab;
//  Date: 9/20/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>

FILE *fp;

void calculateBMI (void);

int main(void){
    int i;
    
    fp = fopen("csis.txt", "w");
    for (i = 1; i <= 4; ++i) {
        calculateBMI();
    }
    fclose(fp);
    return 0;
}

void calculateBMI () {
    double heightInches;
    double weightLbs;
    double bmiValue;
    
    printf(     "Enter your weight in pounds \n");
    fprintf(fp, "Enter your weight in pounds \n");
    scanf("%lf", &weightLbs);
    printf(     "You entered your weight as: %.1lf \n", weightLbs);
    fprintf(fp, "You entered your weight as: %.1lf \n", weightLbs);
    
    printf(     "Enter your height in inches \n");
    fprintf(fp, "Enter your height in inches \n");
    scanf("%lf", &heightInches);
    printf(     "You entered your height as: %.1lf \n", heightInches);
    fprintf(fp, "You entered your height as: %.1lf \n", heightInches);
    
    bmiValue = (weightLbs * 703) / (heightInches * heightInches);
    printf(     "Your resultant BMI value is: %.1lf \n", bmiValue);
    fprintf(fp, "Your resultant BMI value is: %.1lf \n", bmiValue);
    
    
    if (bmiValue < 18.5){
        printf(     "Your BMI value is categorized as: Underweight \n");
        fprintf(fp, "Your BMI value is categorized as: Underweight \n");
    } else if (bmiValue >= 18.5 && bmiValue < 25.0){
        printf(     "Your BMI value is categorized as: Normal \n");
        fprintf(fp, "Your BMI value is categorized as: Normal \n");
    } else if (bmiValue >= 25.0 && bmiValue < 30.0){
        printf(     "Your BMI value is categorized as: Overweight \n");
        fprintf(fp, "Your BMI value is categorized as: Overweight \n");
    } else if (bmiValue > 30.0){
        printf(     "Your BMI value is categorized as: Obese \n");
        fprintf(fp, "Your BMI value is categorized as: Obese \n");
    }
    
    printf(     "Summary of values:\n Height: %.1lf \n Weight: %.1lf \n Bmi: %.1lf \n", heightInches, weightLbs, bmiValue);
    fprintf(fp, "Summary of values:\n Height: %.1lf \n Weight: %.1lf \n Bmi: %.1lf \n", heightInches, weightLbs, bmiValue);
    
    return;
    
}
