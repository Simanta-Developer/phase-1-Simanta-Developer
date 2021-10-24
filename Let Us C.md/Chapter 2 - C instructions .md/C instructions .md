## :rocket: Types of instruction : 
:point_right: **Type declaration instructions :** 
* It is used to declare type of variable used in a C program.
* It is also used at the beginning of *main()* function.
* For example :
``` c program 
int main();
char alphabet;
```
:point_right: **Arithmetic instructions :**
* It consists of a `variable name` on the left hand side of **=** and `variable names` and `constants` connected using `operators` on the right hand side of **=** .
* For example :
``` c program 
stem = 3000 ;
deta = alpha * stem / beta ;
```
* There are three types of arithmetic statements :

:fast_forward: `Integer mode arithmetic statement` : In this statement, all operands are either interger variable or integer constants. Example :
``` c program 
int i,j,k;
i = i + 1;
k = i*j;
```
:fast_forward: `Real mode arithmetic statement` : In this statement, all operands are either real variable or real constants. Example :
``` c program
float x,y,z;
x = y + 1 ;
z= y*x/2.0 ;
```
:fast_forward: `mixed mode arithmetic statement` : In this statement, some operands are integers and real. Example :
``` c program
int i,j;
float x,y ;
x = i + y;
j = x*i*9/2.0 
```
*:fire::fire: Some important points about arithmetic instructions :*
* C allows only one variable on left-hand side of **=**. That is z=k * i is legal but k * i=z is not.
* C also provide **modular division operator(%)** .It returns the remainder between two integersand it can't be applied on float. Also using % ,the sign of the remainder is same as the sign of the numerator.For example -5%2 = -1 and 5%-2 = 1.
* Arithmetic operations can be performed in int,float and chars. For chars ASCII code is used and their decimal representation is used for addition.
``` c program
	char x ='a',y ='b';
	int z = x + y;
```
* There is no operator in C to perform exponentiation operation. Exponentiation is cariied out by using pow() function as shown below.
``` c program
  float a;
  a = pow(3,4);  
```
#include<math.h> needs to be included while using pow().

:point_right: **control instructions :** It controls the order in which the instructions in a program get executed.
* There are four types of control instruction :
>> * Sequence control instruction </br>
>> * Selection control instruction </br>
>> * Repetition control instruction </br>
>> * Case control instruction

## :rocket: Type conversion in assignments :
* An operation between an integer and real always yeilds a real result. In this operation an integer is first promoted to real and then the operation is performed.
* Sometimes if the result is a float value and it needs to store in interger variable, then first the value is demoted to int type then it is stored to int type variable and vice - versa.
## :rocket: Hierchy and Associavity of operators : 
* Every operator have priority and associativity.
* Priority is :

Priority | Operators
---------|-----------
1st      | * / %
2nd      | + -
3rd      | =
* Associativity comes into play when prioity cannot be decided which operation needs to perform first. There are two types of associativity :

:fast_forward: Left to right associativity : + , - , / , %, * . </br>
:fast_forward: Right to left associativity : = .




