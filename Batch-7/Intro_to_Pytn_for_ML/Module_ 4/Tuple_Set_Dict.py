# TUPLE, SET, DICTIONARY
# Tuple # Immutable -> No Modifications -> TypeError,  
# tuple = lists types (but list is Mutable)
lst = [100, 200, 300, 400]
tupC = tuple(lst) # Tuple Constructors
new_tup = tupC[:2] # -> (10,20)
tup = (10, 20, 30, 40) 
tup2 = (10, 20, [30, 40]) # <-- [] 
# internal list can be modified(!)
# Access
a = tup[0]

# Tuple Methods: .count() .index()

cnt = tup.count(10)
pos = tup.index(10)


# Set --> # Unique Elements <--- Mutable
set1 = {10, 20}
set2 = set(lst) # {100, 200, 300, 400}
set3 = {10}
set_empty_syntax = set() # to create a empty Set
print(type(set2))
# Set Methods: 'in' 
if 10 in set1:
    print("Yes")

# set1.union(set2)
# set1.intersection(set2)
# set1.isdisjoin(set2)
# set1.issubset(set2)

# Dictionary # dic{[key]: value} # Mutable
# Dictionary # mydic {
#                   [key]: value
#                   [key2]: value
#                   [nseted_dic_key] = {
#                           [key_n] : value
#                           [key_n2] :  value
#                           ...
#                        } 
#                   }
value = 1
dots = "..."
dict1 = {} # empty dic
dict2 = {["key"]: value, ["key2"]: 2}
mydic = { # Nested Dics
    ["key"]: value,
    ["key2"]: 2,
    ["nseted_dic_key"]: {
        ["key_n"]: 'yoo',
        ["key_n2"]: [10,20,30],
        ["dots"]: "dots"
    }
}


# Dictionary # Methods: 'in', dict.get(key) 
print(["key"]) # 1
print(mydic.get("key2")) # GET
print(mydic)

# Insert new [Key]: Value
new_value = "3"
mydic["new_key"] = new_value # string*
mydic["new_key2"] = "Yahoo"  # string*

# Edit existig value directly or with .update({:})
mydic["new_key"] = "4" # *datatype canot be changed
mydic["new_key2"] = "new_value"  # *datatype canot be changed

mydic.update({"new_key2": "new_value2"})

# DELETE del
del mydic["new_key"]

# Copy
dic_2 = mydic.copy() # {} auto-initialized

# availeble keys: -> "" | (f"")?
# availeble values: -> all

# .values() .items()
values_var = mydic.values()
print(values_var)

items_var = mydic.items()
print(items_var)

# Dictionary Comprehension

print(type(list(range(1,10))))

square = {x:x**2 for x in range(1,11) if x%2 == 0}
print(square)

coord_s = [(10,10.5),(20.5,192),(101,102)]
locat_s = ["ndaka","chattogram","sylhet"]

# import zip for multiple loops
exact_loc = {coors : loc for coors, loc in zip(coord_s, locat_s)}
print(exact_loc)

## 
# PS with Build-in Structures
lst3 = [10, 20, 10 , 30, 30 , 50, 30, 10, 20, 10, 10]
print(lst3)
# count Words in given File (lorem_ipsum) 
lorem_ipsum = ""
string = f"{lorem_ipsum}"
words = {}
count = {}
for word in words:
    count[word] = count.get(word,0) + 1
print(count)
for k,v in count.items():
    print(f"count {k} is {v}")
