# CONTROL FLOW
nums = [10, 20, 30, 40, 50]
# FOR Loop
for num in nums:
    print(num)
# LEN 
n = len(nums)
# RANGE  # ex.: Range from 0 to n (exclusive) step 2
for i in range(0,n,2):
    print(num)
for i in range(n): # 
    print(num)

# WHILE Loop, Break, Continue;
i = 0
while i < 11:
    if i == 5:
        print("Continue")
        continue
    print(i) # print actual index
    i += 1
    if i == 8:
        print("Break")
        break

# 