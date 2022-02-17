## :boom: 1's complement :
* [**1's complement**](https://en.wikipedia.org/wiki/Ones%27_complement) of a binary number is the value obtained by inverting all the bits in the binary representation of the number (swapping 0s and 1s).
#### Its relevance : 
1. To represent a signed binary number. To read more about it [click here](https://www.javatpoint.com/1s-complement-in-digital-electronics).
2. To perform various arithmetic operations such as addition and subtraction.
3. It is simply **bitwise not** operation.                                                                   
 
## :boom: 2's complement :
* [**2's complement**](https://en.wikipedia.org/wiki/Two%27s_complement) of an N-bit number is defined as its complement
  with respect to 2N. That is,the sum of a number and its two's complement is 2N.  
#### Its relevance:  
1. It is used to represent the [signed binary numbers](https://www.electronicshub.org/signed-binary-numbers/). 
   For example :
>> +6 and -6
>>
>> The number +6 is represented as same as the binary number. For representing both numbers, take the 5-bit register.
>>
>> So the +6 is represented in the 5-bit register as 0 0110.
>>
>> The -6 is represented in the 5-bit register in the following ways:
>>
>> +6=0 0110
>> Now, find the 1's complement of the number 0 0110, i.e. 1 1001.
>> Now, add 1 to its LSB. When we add 1 to the LSB of 11001, the newly generated number comes out 11010. Here, the sign bit is one which means the number is the negative number.
2. To perform arithmetic operations such as subtraction, addition etc.

