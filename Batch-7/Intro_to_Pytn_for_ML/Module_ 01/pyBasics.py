# Python Data Types and Variables
num_int = 100
num_float = 3.14
py_string = "Rahul"
py_bool = True
# multiple declaration
py_string = "Rahul"; py_bool = True

# Print
# print data types space separated and \n
print(type(num_int), type(num_float), type(py_string), type(py_bool))
# print end with '\n' by default
print(num_int)
# print num_int a space and not '\n' using end=""
print(num_int, end="") 
print(num_int)


# Formatted Print
print(f"\n{num_float}\n{py_string}\n{py_bool}\n")

# input in python
a = input() # default is string "a line of AscII"
num_inpt_int = int(input()) # get 1 number as integer
num_inpt_float = float(input()) # get 1 float number

# multiple inputs .split()
a,b,c = map(int, input.split())
strings = map(str, input.split())

# Operators in Python
sum = num_int + num_int
print(sum)
subtr = sum - num_int
print(subtr)
product = num_int * num_int
print(product)
division = product / sum
print(division)
division = product // sum
print(division)

# Precedence and Associativity
# (), ^, /, *, -, +. 
eq = 10 + 10/2 - 5*2
print(eq) # 5.0

# Comparative Operators

 # sum grater num_int ? = True
print(sum > num_int)
 # num_int grater than equal sum ? = False
print(sum <= num_int)
 # sum equal to num_int ? = False
print(sum == num_int)

# Logical Operator => AND, OR, NOT.
x = 10; y = 5; z = 3
result = (x > y) and (x > z)
print(result)

# IF
if sum > num_int or product / num_int == num_int:
    print("Yes.")
else:
    print("No.")

# P.S. => CodeForces F. Digit Summation 
a,b = map(int, input().split())
print(a%10 + b%10)

