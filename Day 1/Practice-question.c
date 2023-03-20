
// Five marks input through the keyboard
/*
#include <stdio.h>
int main (){
int a,b,v,c,d;
printf("Enter a number 1:");
scanf("%d",&a);
printf("Enter a number 2:");
scanf("%d",&b);
printf("Enter a number 3:");
scanf("%d",&v);
printf("Enter a number 4:");
scanf("%d",&c);
printf("Enter a number 5:");
scanf("%d",&d);

}
//
//Find Total and average of a given marks.
#include <stdio.h>
int main (){
int mark1,mark2,mark3,sum;
printf("Enter a mark1:");
scanf("%d",&mark1);
printf("Enter a mark2:");
scanf("%d",&mark2);
printf("Enter a mark3:");
scanf("%d",&mark3);
sum=mark1+mark2+mark3;
printf("%d sum of all marks",sum);
}

*/

// Grade of following conditional
// 90-100 A Grade
//80-89 B Grade
//70-79 C Grade
//<70 D grade
//Fail No grade
#include <stdio.h>
int main ()
{
int marks;
printf("Enter the marks");
scanf("%d",&marks);
    if (marks >= 90 && marks<=100){
        printf("A grade");

    }
    else if(marks >= 80 && marks <= 89){
        printf("B grade");
    }
    else if(marks >= 70 && marks <=79 ){
        printf("c grade");
    }
    else if(marks >= 70 ){
        printf("D grade");
    }
    else{
        printf("Fail");
    }
}

// Find the result whether the given marks must be >=35
