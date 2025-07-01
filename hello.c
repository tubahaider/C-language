

 #include<stdio.h>
 int main (){
   printf("Hello world ");
   return 0;
 }

//
 #include<stdio.h>
 int main (){
   int age = 56;
   printf("Age is %d",age);
   return 0;

 }

  //Case-Real NUmber
  #include<stdio.h>
  int main (){   float pi = 3.14;
   printf("Value of pi is %f",pi);
   return 0;

  }
//  


  #include<stdio.h>
  int main(){
   char star= '*';
   printf("Star look like this: %c",star);
   return 0;


  }
  
//Input- Scanf()

  #include<stdio.h>
  int main(){
   int age;
   printf("Enter age = ");   scanf("%d", &age);
   printf("Age is %d", age);
   return 0;

  }
  //area of square
 #include<stdio.h>
 int main(){
   int side , area;
   printf("Enter the side of square :");
   scanf("%d", &side);
   area = side * side ;
   printf("Enter the area of square: %d/n",area);
   return 0;
 }

 //modular operator
 #include<stdio.h>
 #include<math.h>
 int main(){
   printf("%d",16%10);
   return 0;

 }
// //conditional statements -(if - else)
 #include<stdio.h>
 int main(){
   int age ;
   printf("Enter the age :");
   scanf("%d", &age);


   if (age >=18){
     printf("The person is adult");
   }
   else {
     printf("The person is not adult");
   }
   return 0;
  
 }
 
 //if,else-if,else
 #include<stdio.h>
 int main (){
   int age;
   printf("enter age:");
   scanf("%d", &age);

   if (age>=18){
     printf("Adult\n");
   }
   else if (age >13 && age <18){
     printf("Teenager\n");
   }
   else {
     printf("Not adult\n");

   }
 }
 
 //Ternary 
 #include<stdio.h>
 int main(){
  int age ;
  printf("enter age:");
  scanf("%d", &age );
  age>= 18? printf("adult\n"):printf("not adult \n");
  return 0;
 }
  
//  //Swith formet
  #include<stdio.h>
  int main(){
    int day ;
    printf("enter day (1-7):");
    scanf ("%d", &day);

    switch (day){
    case 1 : printf("monday\n");
    break;
    case 2 : printf("tuesday\n");
    break;
    case 3 : printf("wednesday\n");
   break;
    case 4 : printf ("thrsday \n");
    break;
    case 5 : printf("friday\n");
    break;
    case 6 : printf("saturday\n");
    break;
    case 7 : printf("sunday \n");
    break;
   
    default: printf("not a valid day !\n");
   
    }
    return 0;
 
   }

 //Nested switch -

 #include<stdio.h>
 int main(){
   int number;
   printf("enter number:");
   scanf("%d", &number);

   if (number >=0){
     printf("positive\n");
     if (number %2 ==0){
       printf("even\n");
     }else{
       printf("odd\n");
     }
   }
   else{
     printf("negative\n");

   }
   return 0;
 }
 //Write a program to check if a student passed or failed. MArk>=30 is PASS ;<=30 is FAIL-

 #include<stdio.h>
 int main (){
   int marks ;
   printf ("enter number (0-100):");
   scanf ("%d", &marks );
   if (marks<=30){
     printf("FAIL\n");
   } else {
     printf("PASS\n");
  }
   return 0;
 }
 //In Ternary method -

  #include<stdio.h>
 int main(){
   int marks ;
   printf("Enter the number (0-100): ");
   scanf("%d", &marks);
   marks<=30? printf("FAIL\n"):printf("PASS\n");
   return 0 ;
 }
 //write a program to give grades to a students marks <30 is c ;30<=marks<70 is B; 70<=marks <90 is A and 90<=marks <100 A+.
 
 #include <stdio.h>
 int main(){
  int marks;
  printf("Enter the number (1-100):");
scanf("%d", &marks);
 if (marks <=30){
  printf("c\n");
 }
 else if (marks >=30 && marks <=70){
  printf("B\n");
 }
 else if (marks >=70 && marks <=90){
  printf("A\n");
 }
 else {
  printf("A+\n");
 }
 return 0;
 }
 //write a program to find if a character entered by user in upper case or not-
 #include<stdio.h>
 int main(){
  char ch;
  printf(" Enter the character:");
  scanf("%c", &ch);

  if (ch>='A' && ch<='Z'){
    printf("The character is Upper case\n");
  }
  else if (ch>='a' && ch<='z'){
    printf("The character is Lower case\n");
  }
  else{
    printf("Not a valid character\n");
  }
  return 0 ;
 }