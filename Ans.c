// *********************Assignment-1*********************
// 1.Why do computers understand only binary language?
// Ans:Yes,Computer only  know binary language because system take current in 0110 form And big programming language like c,c++,java it code is converted in binary Form.

// 2.What is the full form of IDE?
// Ans:Full Form of IDE is Integrated Development Environment.

// 3.What is the difference between a text editor and a code editor?
// Ans:Text Editor is used to write normal text And Code Editor is featured for coding.

// 4.What are the steps to develop software using the C language?
// Ans:Your First Program in C
//          Introduction: Your First Program in C. ...
//          Step 1: Download Dev/C++ ...
//          Step 2: Install Dev/C++ ...
//          Step 3: Create First Project. ...
//          Step 4: Write Your Program. ...
//          Step 5: Save and Compile Code. ...
//          Step 6: Run Your Code. ...
//          Step 7: More Resources.

// 5.Explore by your own
// Ans: 1.What is the latest version of C Language?
//      Ans:C17.

//      2.Who developed C Language?
//      Ans:Dennis Ritchie.

//      3.What is the difference between System and Application Software?
//      Ans:A System Software acts as an interface between the system and the application software.

//      4.How to convert a number from a decimal number system to a binary number system?
//      Ans:#include<stdio.h>
#include <stdlib.h>
int main()
{
  int a[10], n, i;
  system("cls");
  printf("Enter the number to convert: ");
  scanf("%d", &n);
  for (i = 0; n > 0; i++)
  {
    a[i] = n % 2;
    n = n / 2;
  }
  printf("\nBinary of Given Number is=");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%d", a[i]);
  }
  return 0;
}