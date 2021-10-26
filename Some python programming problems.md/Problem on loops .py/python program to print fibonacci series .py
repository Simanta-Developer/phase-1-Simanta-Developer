n = int(input("Please Enter the Range : "))
count = 0
first_num = 0
second_num = 1
while(count < n):
    if(count <= 1):
        Next = count
    else:
        Next = first_num + second_num
        first_num = second_num
        second_num = Next
    print(Next)
    count +=1
