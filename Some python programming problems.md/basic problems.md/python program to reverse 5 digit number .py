n = int(input("enter five digit number : "))
revnum = d1 = d2 = d3 = d4 = d5 = 0
d5 = n%10
n = n//10
d4 = n%10
n = n//10
d3 = n%10
n = n//10
d2 = n%10
n = n//10
d1 = n
revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1
print("reverse of five digit number is: ", revnum)
