import numpy as np

lst2 = [10, 10.5, "name"]
arr = [1,2,3]
print (arr * 5)
arr1 = [ x*5 for x in arr]

# import numpy as np

# 1D NP.Array
arr1 = np.array([1,2,3])
arr1 = arr1 * 5 
print(type(arr1))
print(arr1)

# 2D NP.Array

arr2 = np.array(
    [1,2,3], # row
    [1,2,3]
    )
print(arr2.ndim)
arr3 = np.array(
    # 1st floor
    [ [1,2,3], # row
    [1,2,3] ],
    # 2nd floor
    [ [1,2,3], # row
    [4,5,6] ]
    )
# dndim
# shape
# dtype(int64, float64, <U32 upcasted)
# size
                  #  arr1  arr2  arr3
print(arr3.ndim)  #   1     2     3
print(arr3.shape) #   5    2,3  2,2,3
print(arr3.dtype) # int64   =     =  
print(arr3.size)  #   5     6    12

# upcasting 
# arr = np.array([1,2,3,'hello'])
# print(arr.dtype) # float64
# arr = np.array([1,2,3],dtype=np.int8)
# # # int8 int16... float
# arr = astype(np.int64)

# Create 
# From Existing Data 
lst1 = [10,20,30,40,40.5]
lst3 = [[1,2,3],[1,2,3]],[[1,2,3],[4,5,6]]
# np.array() << accept lists, tuples 
arrL = np.array(lst1)
arr3DL = np.array(lst3)
print(type(arrL)) # <class 'numpy.ndarray'>
print(arrL.dtype) # int32 # (mixed lst = <U32)
# sets
set1 = {11,2,3}
arrS = np.array(list(set1))
# dictionary
dic1 = {'i':1,'a':10,'b':20,'c':30}
keys1 = dic1.keys()     # select keys
values1 = dic1.values() # select values
items1 = dic1.items()   #  select all

# Create 
# From Scratch 
dicArr = np.array(list(items1))
arrZeros1 = np.zeros((2,3))
arrZeros2 = np.zeros((2,3), dtype=np.int8)
arrZerosLike = np.zeros_like((arrZeros2))
arrOnes1 = np.ones((3,4,3))
arrOnes2 = np.ones_like((arrOnes1))
arrEmpty1 = np.empty((3,4,3))
arrOnes2 = np.empty_like((arrEmpty1))
arrFULL1 = np.full((3,4,3), True) # can set content
arrFULL2 = np.full((3,4,3), np.inf)
arrFULL3 = np.full_like((arrFULL2, np.inf))

# Create 
# With Random
arrRnd = np.random.rand((2,3))
# randint start,end,shape
arrRndint = np.random.randint(1,10(10,10))
# uniform start,end,shape
arrRndUnif = np.random.uniform(50,100(3,3,4))

# With .arange() .reshape()
# np.arrange(first, end, step)
arrRnd = np.arange((1,10,1)).reshape(3,3)

# .linespace .longpace(first, end(included), precision)
arrRnd = np.longspace((1,10,15))





