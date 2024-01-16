# class_average
Basic C program displaying the class average based on the number of students. This project was made for my introduction to computer programming.


First, it defines a structure named student with three members: firstName (a character array to store the first name of the student), roll (an integer to store the roll number), and marks (a float to store the marks of the student).

Function Definitions:

struct student* process(struct student a[], int n): This function takes an array of student structures and the number of students (n). It then iterates through each student, assigns a roll number, and prompts the user to enter the first name and marks for each student.

struct student* display(struct student a[], int n): This function takes the array of student structures and the number of students (n). It prints out the information for each student, including roll number, first name, and marks.

float average(struct student a[], int n): This function calculates and returns the average marks of the students in the class. It takes the array of student structures and the number of students (n).

Before the main function the functions process, display and average are declared to let the compiler know about its existence before they are called in the main function.

In the main function:

It prompts the user to enter the number of students in the class.
Declares an array a of student structures with the specified number of students.
Calls the process function to input details for each student.
Calls the display function to print the details of each student.
Calls the average function to calculate and print the class average.
