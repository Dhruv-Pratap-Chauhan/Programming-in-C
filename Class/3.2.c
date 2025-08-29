#include <stdio.h>  
int main()
{
  float w, h, bmi;
  printf("Please enter the weight(in kilograms) and height(in meters)(Seperate by spaces): ");  
    scanf("%f %f", &w, &h);

    bmi = w / (h * h);

    if (bmi < 15)

    {
    printf("The BMI is %f\n", bmi);
    printf("The person is in Starvation.\n");
}

    else if (bmi >= 15.1 && bmi <= 17.5)

   { 
    printf("The BMI is %f\n", bmi);   
 }
    else if (bmi >= 17.6 && bmi <= 18.5)

   { 
    printf("The BMI is %f\n", bmi);
    printf("The person is in Underweight.\n");
    }
        else if (bmi >= 18.6 && bmi <= 24.9)

       { 
        printf("The BMI is %f\n", bmi);
        printf("The person is Ideal.\n");
    }
        else if (bmi >= 25 && bmi <= 29.9)
       { 
        printf("The BMI is %f\n", bmi);
        printf("The person is in Overweight.\n");
       }
        else if (bmi >= 30 && bmi <= 39.9)
       {
         printf("The BMI is %f\n", bmi);
        printf("The person is in Obese.\n"); 
    }
        else if (bmi >= 40)
       {
         printf("The BMI is %f\n", bmi);
        printf("The person is in Morbidly Obese.\n");
     }
         return 0;
        }
        




