## :rocket: The If-else statement : 
* C uses the keyword **if** and **else** to implement the decision control instruction.
* The general form of if-else construct is :
``` c program
if (this condition true)
    statement 1;
else
    statement 2 ; 
```
* Had there only one statement in if or else block, the pair of braces can be removed.
* The default scope of if-else is the statement immediately after them. To override this default scope or to execute multiple statement, a pair of braces must be used.
* **Nested if-else statement** i.e , if-else inside if or else can be used as show below as an example : 
``` c program
if (this condition true)
    statement 1;
else
    if (this condition is true)
        statement 2 ;
    else
        statement 3 ;
```
* There is no limit how deeply the **if**s and the **else**s can be nested.
* Any non - zero nuber is true, 0 is false.
* A common mistake while using the **if** statement is to write a semicolon(;) after the condition :
``` c program
if (this condition true);
    statement 1;
```
The compiler will interpret it as
``` c program
if (this condition true)
    ;
statement 1;
```
if condition evaluates to true, the **; (null statement, which does nothing on execution)** gets executed, following statement 1 to get executed. If the condition fails, then statement 1 directly gets executed. So, whether the condition is true or false, statement 1 is bound to get executed.
## :rocket: Use of logical operators - checking ranges:
* C allows usage of three logical operators, namely, &&, || and !. These are to be read as **AND**, **OR** , and **NOT** respectively.
* We can also use **else-if** clause if there are multiple possibilities as shown below :
``` c program
/* else-if ladder demo */
if (per >= 60)
    printf("First division") ;
else if (per >= 60)
    printf("First division") ;
else if (per >= 60)
    printf("First division") ;
else (per >= 60)
    printf("First division") ;  
```
## :rocket: Use of logical operators - yes/no problem:
* Logical operators are also useful when any complicated logic boils down only two answer : yes and no.
## :rocket: The ! operator :
* This operator reverses the result the expression it operates on. For example
``` c program
!(y<10)
```
if **y** is less than 10 then it will be false, since **(y < 10)** is true.
## :rocket: Hierchy of operators :
operations | Type
-----------|------------------------
!          | Logical NOT  
/ * %      | Arithmetic and modulus
 *+* *-*   | Arithmetic
< > <= >=  | Relational
 == !=     | Relational
 &&        | Logical AND
 ll        | Logical OR
  =        | Assignment
 ## :rocket: Conditional Operators :
 * Conditional operators **?** **:** are ternary operators. General form is :
 ``` c program
 expression 1 ? expression 2 : expression 3
 ```
 * They form a kind of forshortened **if-then-else**.
 * ?: always go together and can have only one statement each.
 * it is not necessary that the statement after ? or : be only arithmetic. For example:
 ``` c program
 char a = 'z';
 printf("%c",(a >= 'a' ? a : '!'));
 ```
 * The conditional operators can also ne nested as shown below :
 ``` c program
 int big, a, b, c ;
 big = (a > b ? (a > c ? 3 : 4) : (b > c 6 : 8));
 ```
 * Always parenthesize assignment operation if used with ?:. Otherwise it will give [lvalue](https://www.geeksforgeeks.org/else-without-if-and-l-value-required-error-in-c/) error.
 ``` c program
 a > b ? g = a : ( g = b) ;
 ```
 In absence of parentheses, the compiler belives that **b** is being assigned to the result of the expression to the left of second **=**. Hence it shows error.
 
