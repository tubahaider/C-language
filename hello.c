

#include<stdio.h>
int main (){
  printf("Hello world ");
  return 0;
}


#include<stdio.h>
int main (){
  int age = 56;
  printf("Age is %d",age);
  return 0;

}

 //Case-Real NUmber
 #include<stdio.h>
 int main (){
  float pi = 3.14;
  printf("Value of pi is %f",pi);
  return 0;

 }
  


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
  printf("Enter age = ");
  scanf("%d", &age);
  printf("Age is %d", age);
  return 0;

 }
 
#include<stdio.h>
int main(){
  int side , area;
  printf("Enter the side of square :");
  scanf("%d", &side);
  area = side * side ;
  printf("Enter the area of square: %d/n",area);
  return 0;
}
