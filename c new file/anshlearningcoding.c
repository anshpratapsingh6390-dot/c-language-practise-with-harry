// #include<stdio.h>

// int main(){
//     int length, width , area ;
//     printf(" enter  your length : ");
//     printf(" enter  your width : ");
//     scanf("%d,%d",&length,&width);

//     area = length*width;

//     printf("The Area of the Given values = %d",area);

// }

// #include <stdio.h>
// int main() {
// float r= 1.0,height=1.0;
// printf("areaof circle of radius %.2f is %.2f/n" , r,3.14*r*r);
// printf("vol of cylinder with radius %.2f and height %f is %f/n",r,height,3.14*r*r*height);

// return 0;
// }

// #include <stdio.h>
// int  main() {
// int a ;
// printf("enter a = ");
// scanf("%d",&a);

// switch(a) {
// case 1:
// printf("you enter 1/n");
// break;
// case 2:
// printf("you enter 2/n");
// break;
// case 3:
// printf(" your enter 3/n");
// break;

// case 4:
// printf("you enter 4/n");
// break;

// default :
// printf("stop it here/n");

// }

// }

// write a program toassingh marks to the student of the class in the exam.

// #include<stdio.h>
// int main() {
// char grade;
// int marks = 73;

// if ( marks >=90 && marks <=100)
//     printf("grade = A");

// else if(marks >=80 && marks <=90)
//     printf(" grade = B");

// else if (marks >=70 && marks <=80)
//     printf("grade = C");

// else if(marks >=60 && marks <=70)
//     printf("grade = D");

// else if(marks >=50 && marks <=60)
//     printf("grade = E");

// else
//     printf("fail/n");

// }

// Question that is puzzling

// #include<stdio.h>
// int main()
// { int a = 10;
//     if ( a = 11)
//          printf("iam 11");

//     else
//         printf("i am  not 11");

// out put ayega i am 11 kyuki a= 11 bss true hai yeh darshata hai

// }

// #include<stdio.h>
// int main()
// { int a = 10;
//     if ( a == 11)
//          printf("iam 11");

//     else
//         printf("i am  not 11");

// }

// ab jo output bo hoga i am not 11 bcz ab maine a == 11 value assign kr dia hai jo ki pjhle nhi ki thi

// #include <stdio.h>
// int main(){
//     float marks1, marks2 , marks3 , total , percentage;

//     printf("enter your marks for subject1:\n");
//     scanf("%f",&marks1);

//     printf("enter your marks for subject2:\n");
//     scanf("%f",&marks2);

//     printf("enter your marks for subject3:\n");
//     scanf("%f",&marks3);

//     printf("marks entered are  %.2f,%.2f,%.2f\n", marks1, marks2, marks3 );

// total = marks1 + marks2 +marks3 ;
// percentage = total/3;

//     if ( marks1 <33 || marks2 <33 || marks3 <33 )
//    { printf("you are fail due to less marks in indivisual subjects\n");}

//     else if((marks1 + marks2 + marks3 )/3 <40 )
//    { printf("you are failed due to less percentage\n");}

//     else {
//         printf("passed with %.2f\n");

//      }

//     }

// QUES CALCULATE Tax ?

// #include<stdio.h>
// int main(){
//     double income, tax =0;

// printf("enter income = \n");
// scanf("%lf", &income);

// if (income<=250000)
// {  tax = 0;   }

// else if ( income>250000 && income<=500000 )
// {  tax = 0.05*(income-250000); }

// else if ( income>500000 && income <=1000000)
// {    tax = 0.05*(500000 -250000) + 0.2*(income -500000);  }

// else
// {    tax = 0.05*(500000-250000) +0.2*(1000000 -500000) +0.3*(income -1000000);     }
//  printf(" the total tax you need to pay is %.2f ", tax );

// }

// CHAPTER 4  - LOOPS CONTROL INSTRUCTIONS
// QUES PRINT 1 TO 9 USING WHILE LOOP
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     while (i <= 9)
//     {
//         printf("%d\n", i);
//         i++;
//     }
// }

// question 2 - write a program to write natueral numbers from 10 to 20 with initilization  of 0 ?

// #include<stdio.h>
// int main() {
//     int i = 0;
//     while ( i <=20)
//     { if ( i >=10)
//         printf(" natural number value is %d\n",i);
//         i++;
//     }
// }

// DO WHILE LOOP PRACTISE

// #include <stdio.h>
// int main()
// {  int i;
//     i =0;
//  do
//  {
//     printf("the value of i is %d\n ", i);
//     i++;
//  } while (i<4);
// }

// FOR LOOP PRSCTISE

// #include<stdio.h>
// int main() {
// int i ;
// for ( i = 0; i < 6; i++)
// {
//     printf("the value of i is %d\n ",i);
// }
// }

// ques = write a program to show multiplication of n number?

// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);

// for (int i = 0; i <11; i++)
// {
//     printf("%d * %d = %d\n",i,n,i*n);

// }
// }

// question = write a table of 10 in reverse order ?

// #include <stdio.h>
// int main(){
// int n;
// scanf("%d",&n);               // ALSO THE EXAMPLE OF  DECREMENT OF A LOOP

// for ( int i = 10; i ; i--)
// {
//     printf("%d * %d = %d\n",i,n,i*n);

// } }

// QUES - WRITE A PROGRAM to sum FIRST TEN NATURAL NUMBERSS USING WHILE LOOP? and also do it by do while loop .

// #include<stdio.h>
// int main(){
//     int i = 1;
// int sum = 0;
// while (i<10)
// { printf("sum of first ten natural numbers is %d\n",sum);
//     i++;
//   sum += i;

// }

// }

//  #include<stdio.h>
//  int main(){
//     int i = 1;
//  int sum = 0;

//  do{ sum += i;
//      i++; }
//      while (i<11);

//  printf("sum of first ten natural numbers is %d\n",sum);

// }

// #include<stdio.h>
// int main(){
//     int i , sum = 0 ;
// for ( i = 1; i < 11; i++)
// {
//     sum +=i;  // yaha galti sum+=1 mat likhna shai hai sum +=i
// }

// printf("sum of first ten natural numbers is %d\n",sum);

// }

// QUESTION - WRITE A PROGRAM TO CALCULATE THE SUM OF THE NUMBER OCCURING IN THE MULTIPLICATION OF EIGHT ?
// #include <stdio.h>
// int main (){
// int i,sum=0 ;
// for( i = 0; i <= 10; i++)
// {

//  sum +=(8*i); bss itna sa change nad done kaam

// }

// printf("the sum of the table of 8 is %d\n ",sum);

// }

// my first project (   " number guessing game  ")

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     srand(time(0));
//     int randomnumber = (rand() % 100) + 1;
//     int no_of_gusses = 0;
//     int gussed_number;

//     do
//     {
//         printf("guess the number( 1-100):");
//         scanf("%d", &gussed_number);

//         if (gussed_number > randomnumber)
//         {
//             printf("lower number please");
//         }

//         else if (gussed_number < randomnumber)
//         {
//             printf("higher number please ");
//         }

//         else
//         {

//             printf("congrats\n");
//         }

//         no_of_gusses++;
//     } while (gussed_number != randomnumber);
//     printf("you gussed the number in %d gusses ", no_of_gusses);
// }

// //CHAPTER 5 FUNCTION AND RECURSION
// // OUESTION 1 . write a function to print good morning , good after =noon and good evening in a sequence as given ?
// #include <stdio.h>

// void good_morning();
// void good_afternoon();
// void good_night();

// void good_morning() {
//     printf("Good morning\n");
// }

// void good_afternoon() {
//     printf("Good afternoon\n");
// }

// void good_night() {
//     printf("Good night\n");
// }

// int main() {
//     good_morning();
//     good_afternoon();
//     good_night();
//     return 0;
// }ṇ

// chapter 5 practise set

// #include<stdio.h>
// #include<math.h>

// int main() {
//     double result;
//     result = pow(7,3);
//     printf("2 to the power 3 is %f\n",result);

// return 0;
// }

// question  write a program using function to find average of 3 numbers ?

// #include<stdio.h>
// int avg( int a, int b, int c );

// int main() {
// int avg = (3+6+9) /3;
// printf("avg of three numbers is %d",avg);

// return 0;
// }

// yeh uper wala normal bina function ke kia hai ab function ka use krkr kro

// #include <stdio.h>

// int avg(int a, int b, int c); // function decleration

// int main()
// {
//     int result;
//     result = avg(6, 9, 9) ; // function call
//     printf("the average of three numbers is %d", result);
// }

// // function definition
// int avg(int a, int b, int c) {
// int average;
//     average  = ( a + b + c)/3;
//     return average ;

    
//     }
    
// ques write a function to convert celsius to farenheit ?

// #include<stdio.h>
// int main() {
// float c, f;

// printf(" enter your temperature in celcius  : ");
// scanf("%f",&c);

// f = ((9*c)/5) +32 ;

// printf("temperature in fareheit is %f",f);

// return 0;
// }




// ques write a function to calculate force of attarcrtio ona body by earth ?

// #include<stdio.h>
// int main() {
//     float force,mass;
    
//     printf(" enter your mass(kg ) : ");
//     scanf("%f",&mass);

//     force = mass*9.8 ;

//     printf(" force of attraction is : %f",force);

// return 0;
// }


// write a program using recursion to calculate nth element of fibonacci sequence ?



// #include<stdio.h>
// int ficonacci(int n) {
// 	if (n <= 1)
// 		return n;
// 	else
// 		return ficonacci(n - 1) + ficonacci(n - 2);
// }

// int main() {
// 	int n;
// 	printf("Enter the position of Fibonacci sequence: ");

// 	scanf("%d", &n);
// 	printf("The %dth Fibonacci number is %d\n", n, ficonacci(n));
// 	return 0;
// }





// chapter 6  pointer 

// #include<stdio.h>
// int main() {
// int i = 77;
// int *j = &i;
// printf("address of operator is %p ", i);
// printf("address of operator is %p ",&i);
// return 0;
// }



// #include<stdio.h>
// int main() {
// int i = 77;
// int *j = &i;

// char k ='A';
// char*k1 = &k;
// printf("address of operator is %p\n", i);
// printf("address of operator is %p\n",&i);

// printf("address of operator is %p\n",k);
// printf("address of operator is %p\n",&k);
// return 0;
// }


 


// pointer to pointer 

// #include<stdio.h>
// int main() {
// int i = 77;
// int *j = &i;

// char k ='A';
// char*k1 = &k;

// int x = i;   // y isliye use kia kyuki c lang mai ek varible ko ek bhi baar declare krte hai 
// int** y = &j; // j ek pointer hai jo i ko point krta hai to x kus pointer ka address rakhega 

// printf("value of i is  is %d\n", i);   // %p address ke liye hota hai 
// printf("address of operator is %p\n",&i);  // %d value ke liyee hota   hai 

// printf("value of k is %d\n",k);
// printf("address of operator is %p\n",&k);

// printf("value of x  is %d\n",x);
// printf("address of operator is %p\n",&i);

// return 0;
// }



// chapter 6  practise set 

// #include<stdio.h>
// int main() {
//     int i = 2;
//     int* ptr = &i;
//     printf("the address of variable is %u",&i);
//     printf(" the value  at variable is %d",*ptr);   

// return 0;
// }




//QUES write a program having a value i , print the address of i . pass this variable to a function and its addresss?
//are these aaddrreses same , why ?

// #include<stdio.h>

// int returning_5(int* ptr) {
//     printf(" the address of variable is %u ", ptr);
//     printf(" the value at variable is %d ", *ptr);
//     return 5;
// }

// int main() {
//     int i = 2;
//     int* ptr = &i;

//     printf("the address of variable is %u\n", &i);
//     returning_5(ptr);

//     return 0;
// }

// QUES  write a program to change the value of variable 10 times the current value ?



// #include<stdio.h>

// void change_to_thirty_times(int *a)  //int *a → yeh function ek pointer parameter leta hai — matlab ek aisa variable jisme kisi integer ka address store hota hai

// {
// 	*a = *a * 30;  // *a eska matlab hai value of address is stored in a 
// }
// int main() {
// 	int x = 45;
// 	printf("the value of x is %d\n", x);
// 	change_to_thirty_times(&x);           //&x means address of x
// 	printf("the value of x is %d\n", x);
// 	return 0;}  // Ab function ke andar a pointer ban gaya hai jo x ke address ko point kar raha hai.
// Toh jab hum function ke andar likhte hain: *a = *a * 30; 
// Toh wo asal mein x = x * 30; ke barabar hai.
// Matlab x ki real value change ho jaati hai.





// ques

// #include<stdio.h>
// int* sum( int a, int b){
// int s = a+b;
// int* ptr = &s;
// printf("the value of sum is %d",s);
// return ptr;
// }

// float* average( int a , int b ){
// int avg = (a+b)/2.0;
// float* ptr = &avg;
// printf("the average value is %f",avg);
// return ptr;

// }

// int main(){
//     int x = 4;
//     int y = 6;
//      int* ptr1;
//      float* ptr2;

//      ptr1 = sum( x, y);
//      ptr2 = avg( x, y);

//      printf(" the address of sum is %u and address of avg is %u", ptr1, ptr2);

//      return 0;


// }










