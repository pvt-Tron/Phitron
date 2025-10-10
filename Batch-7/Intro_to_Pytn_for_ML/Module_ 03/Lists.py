# LISTS and LIST'S METHODS

nums = [100,20,30,40,50] # int
nums_float = [10.20, 3.15, 2.4, 2.7, 3.5] # float
fruit = ['apple', 'orange', 'lichi'] # string
mix =[110, 10.2, 'apple']
lst_of_lists = [[100,20,30], [14,12,31], [13,12,12]]

# Lists's Access
print(nums[2])
nums[2] = 90
print(nums)
# Slice
new_list = nums[0:3]
print(new_list)
# append
nums.append(80)
# insert
nums.insert(0,45)
print(nums)
## delete pop(), remove()
nums.pop() # delete last value
nums.remove(100) # delete specific value
print(nums)

# Sort, Reverse
nums = nums[::-1]
nums.sort()
nums.sort(reverse=True)
nums.reverse()



# Stack & Queue form a list (Class Implementation)

class Ds:
    def __init__(self, lst = []):
        self.lst = lst
    def push(self, data):
        self.lst.append(data)
    def pop(self):
        pass
    def erase(self):
        return []

class Queue(Ds):
    def __init__(self, lst):
        super().__init__(lst)
    def pop(self):
        return self.lst.pop(0)
    def front(self):
        return self.lst[0]

class Stack(Ds):
    def __init__(self, lst):
        super().__init__(lst)
    def pop(self):
        return self.lst.pop()
    def top(self):
        return self.lst[-1]

st1 = Stack()
q1 = Queue()

# Comprehension For Loop for Lists
# [expression, for in range/iterab., condition]
random_list = [x**2 for x in range(10) if x%2 != 0]
random_list = [
    x**2
    for x in range(10)
        if x%2 != 0
    ]
print(random_list)

# Comprehension For Loop for Lists of strings
# [expression, for in range/iterab., condition]
fruits = ['apple', 'orange', 'lichi'] # string

upper_fruits = [fr.lower() for fr in fruits if fr[0] > 'h']
print(upper_fruits)

