# Handilng Exceptions
n = int(input())

try:
  a = 10/0
except ZeroDivisionError:
  print("you cant divide a number by 0")
print("hello world")

# try: # # N.B.: y is not defined!
#   x = y
# except ZeroDivisionError:
#   print("you cant divide a number by 0")
# except Exception as e:
#   print(e)
# print("hello world")

try:
  file = open("./sample_data/data1.txt","r")
except Exception as e:
  print(e)
else:
  # model train
  print(file.read())
finally:
  print("Gpu is stopped")

