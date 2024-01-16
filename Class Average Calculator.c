#include<stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
};

struct student* process(struct student a[],int n)
{
   for(int i = 0;i < n;i++)
   {
       a[i].roll= i + 1;
       printf("\nFor roll number%d,",a[i].roll);
       printf("\nEnter first name:");
       scanf("%s",a[i].firstName);
       printf("Enter marks:");
       scanf("%f",&a[i].marks);
   }
   return a;
}

struct student* display(struct student a[],int n)
{
   printf("\nDisplaying Information:\n");
   for(int i=0;i<n;i++)
   {
       printf("\nRoll number:%d",a[i].roll);
       printf("\nFirst name:%s",a[i].firstName);
       printf("\nMarks:%.1f\n",a[i].marks);
   }
   return a;
}

float average(struct student a[],int n)
{
   float sum = 0;
   float mean;
   for(int i = 0;i < n;i++)
   {
       sum = sum + a[i].marks;
   }
   mean=sum/n;
   return mean;
}

struct student* process(struct student a[],int n);

struct student* display(struct student a[],int n);

float average(struct student a[],int n);

int main()
{
   int numberOfStudents;
   float classAverage;
   
   printf("Enter the number of students in the class:\n");
   scanf("%d",&numberOfStudents);
   
   struct student a[numberOfStudents];
   
   process(a,numberOfStudents);
   
   display(a,numberOfStudents);

   classAverage = average(a,numberOfStudents);
   
   printf("\nThe class average is:%f",classAverage);
   
   return 0;
}