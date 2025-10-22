'''
1 . Create a 1D, 2D, and 3D NumPy array and print their dimensions and shapes.

2 . Create:
- an array of zeros of shape (3,3)

- an array of ones of shape (2,5)

- an array filled with 7

3 . Create an array of even numbers between 10 and 50 using arange.

4 . Create a 4×4 matrix from 0–15. Then , extract:
the first row

- the last column

- a 2×2 subarray from the center

5 . Add a 1D array [1,2,3] to each row of a 3×3 matrix.

6 . Given two arrays A and B, compute:
- (A + B) / 2

- A**2 + B**2

'''

import numpy as np
# 1.
oneD = [1,2,3]
twoD = [[1,2,3],[1,2,3]]
threeD = [[[1,2,3],[1,2,3],[1,2,3]]]

print(np.ndim(threeD))
print(np.shape(threeD))

# 2.
arrZ = np.array.zeros(3,3)
arrO = np.array.ones(2,5)
arr7 = np.array((3,3,3), 7)

# 3.
arrEven = [x%2 == 0 for x in range(10,51)]

# 4.
arr4x4 = [x for x in range(16)]
arrNP4x4 = np.array((4,4), arr4x4)

# 5.


# 6.
a = [1,2,3]
b = [4,5,6]

c = a + b
c = c / 2
d = a**2 + b**2

