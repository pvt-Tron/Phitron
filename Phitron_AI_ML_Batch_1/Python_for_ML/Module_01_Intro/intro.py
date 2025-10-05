def main():
	x = 42                	# int
	y = 3.14              	# float
	z = "hello"           	# str
	t = True              	# bool
	lst = [1, 2, 3]       	# list (mutable)
	 						# nested list
	lst2 = [
		1, 2, 3, ["Arif", "Rahul", 3.5, 100*2,],["X", "Y", "Z"], [10, 20, 30]
		]
							# 2D list
	lst2D = [
		[1, 2, 3],
		[4, 5, 6]
	]
	  						# 2D list (square matrix)
	lst2DM = [
		[1, 2, 3],
		[4, 5, 6],
		[7, 8, 9]
	]
	tpl = (1, 2, 3)       	# tuple (immutable)
	dct = {"a": 1, "b": 2}	# dict (mapping)
	st = {1, 2, 2, 3}       # set (unique)

	print(
		type(x), type(y),
		type(z), type(t),
		type(lst), type(tpl),
		type(dct), type(st),
		end="\n"
	)
	lst.append(4)
	print(lst)
	# tpl.append(4)  # This will raise an AttributeError
	print(tpl)
	# Accessing nested list elements
	print(lst2[3][0])  # Output: "Arif"
	print(lst2D[1][2])  # Output: 6
	print(lst2DM[2][1])  # Output: 8
	print(lst[:2])  # Slicing example
	print(lst2[3][1:3])  # Slicing nested list
	
main()