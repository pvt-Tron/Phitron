'''
    .random.randint(,,)
    .shape .shape(,) .reshape(,)
    .ndim() 
    .flatten() .ravel()
    .concantenate((,), axis= )
    .array_split(,)
    .T
    .sin() .cos()
    .genfromtxt()
    .rad2deg()
    .log2() .log10()
    .where()
    .exp() .sqrt()
    .sum() .cumulative_sum()
    .linalg.det()
    .linalg.matrix_rank()
    .sort()
    .dot()
    .trace()
    .count_nonzero()
    .unique()
    .min() .max()
    np.mean(arr, axis= )
    .std(arr) .var()
    .corrcoef()


'''
import numpy as np
# SHAPE
# random create an Array from 1 to 100 of size 10x5
# sample - 10, feature - 5
arr1 = np.random.randint(1, 100, size =(10,5))
arr1.shape # Out: (10,5)
# RESHAPE
b1 = arr1.reshape(5,10)

# FLATTEN
flat1 = b1.flatten()
print(flat1.ndim) # 1 (dimension)

column_wise_flattening = np.ravel(b1,order= 'C')
print(column_wise_flattening)

# CONCATENATE .concantenate()
# index sizes must match
a = np.random.randint(1,10, size=(2,3))
b = np.random.randint(20,30, size=(2,3))
# a,b are 2 2D arrays
conc_row = np.concantenate((a,b), axis= 0) # rows wise
conc_col = np.concantenate((a,b), axis= 1) # cols wise
print(conc_row)
print(conc_col)

# TRASPOSE .T
# invert the Matrix's rows with colums
mat1 = np.array([
    [10,20,30],
    [30,40,50]  # 2 rows 3 columns
  ])
transposed = mat1.T
# Out:
# [[10 30]
#  [20 40]
#  [30 50]] # 3 row 2 columns

# SPLIT
x = np.array([ 10 , 8 , 30 , 100 ])
result = np.array_split(x,2)


# MATH operators and functions
# Standard Math Operations
# between arrays +, -, *, /, //, %
# sum of 2 matrix etc.

# uFUNCS
    # uFUNC Trigonometry 
    # sin, cos, tan (values in Radiant)
# create an Array with sine values 

a = np.array([0, np.pi/2, np.pi])
print (np.sin(a))
x = np.array([ 10 , 8 , 30 , 100 ])
print(np.sin(x)) 
# [-0.54402111  0.91294525 -0.98803162  0.74511316]
print(np.cos(x))
# [-0.83907153  0.40808206  0.15425145 -0.66693806]
print(np.rad2deg(x))
# [ 572.95779513 1145.91559026 1718.87338539 2291.83118052]
    # LOG (logaritmic)
x = np.array([ 10 , 8 , 16 , 100])
print(np.log2(x))
print(np.log10(x))

a = np.array([0, 1, 2, 3])
# exponentials arrEXP = np.exp(arr)
print (np.exp(a))
# square roots arrSQR = np.sqrt(arr) 
print (np.sqrt(a))
# get Asolute Values -> .absolute()
# remove "-" sign in an array
# result = np.absolute(arr)

# SUM (uFunc) sum all in array
print(np.sum(x)) # Out: 134
# Prefix Sum (sum array values afterward)
print(np.cumulative_sum(x)) # Out: [10 18 34 134]

# STATISTICAL uFunct
# load data form file
data = np.genfromtxt(
    'student_scores.csv' ,
    delimiter=',',
    skip_header=1
 )
math_marks = data[::,:1]
print(math_marks.T)
# np. -> max(), min(), mean(), median(), std()
# result = max(math_marks) # etc.

    # CORRELATION np.corrcoef(data) 
study_hours = np.array([2, 4, 5, 7, 8])
exam_scores = np.array([65, 75, 78, 88, 92])
data = np.array([study_hours, exam_scores])
correlation = np.corrcoef(data)
print("Correlation Matrix:\n", correlation)


# BROADCASTING
result = x + 10 # [20, 18, 26, 110]

ar1 = np.array([2, 4, 6])
ar2 = np.array([[1, 3, 5], [7, 9, 11]])
res = ar1 + ar2
print(res) # [ [ 3  7 11]
           #   [ 9 13 17] ]

# Broadcast Normalize -> Axis
#
# ...

# Broadcast -> WHERE np.where()
ages = np.array([12, 24, 35, 45, 60, 72])
age_tag = np.array(["Adult", "Less than 18"])
res = np.where(ages > 18, age_tag[0], age_tag[1])
print(res)

# where() SEARCHING
index = np.where(x==8) # returns index
print(index)
arr = np.where(x>8,x,0) # returns array 
print(arr)
# (array([0, 1]), array([0, 2]))
# [[10  0  0]
#  [ 0  0  9]]

# Counting in ndarray
a = np.random.randint(1 ,100 , size =(100,))
# crearte an array random  1 to 100
value_great_than_60 = np.count_nonzero(a==97)
print(value_great_than_60) # 2 (2 97 in array)
unique_value,count = np.unique(a,return_counts=True)
print(unique_value) # print a set fro the array
print(count) # print a list of occurencies

# SORT 
# 2d array sorting 
mat = np.array([[10,3,5],[8,4,9]])
# horizon axis = 1 
hor_sort = np.sort(mat,axis=1)
print(hor_sort)
vert_sort = np.sort(mat,axis=0)
print(vert_sort)
# [[ 3  5 10]
#  [ 4  8  9]]
# [[ 8  3  5]
#  [10  4  9]]

# aliases for dtypes
dtypes = [('name','size10'),('year', int),('mrk', float)]
input_values = [
    ('1stname', 2010, 8.9), # Input Values
    ('2ndname', 2011, 7.8),
    ('3rdname', 2009, 9.9),
    ('4thname', 2025, 6.5),
] # Create the Array
arr = np.array(input_values, dtype=dtypes)
print(np.sort(arr, order = 'name'))
# print array sorted by column 'name'

# Linear Algebra
A = np.array([
    [1, 2, 3],
    [4, 5, 6]
])

B = np.array([
    [7, 8],
    [9, 10],
    [11, 12]
])
dot_product = np.dot(A,B)
print(dot_product)
# trace 
print(np.trace(B))

sq_mat = np.array([
          [1,2,3],
          [4,5,6],
          [7,8,9]
         ])
# np.linalg.
# .det()
# .matrix_rank()
det_of_sq = np.linalg.det(sq_mat)
rank_sq = np.linalg.matrix_rank(sq_mat)
print(det_of_sq)
print(rank_sq)

