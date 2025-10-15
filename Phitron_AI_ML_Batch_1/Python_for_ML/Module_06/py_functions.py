from functools import reduce
# (0)
def concat(str1, str2):
    return str1 + str2
# (0.1)
def pr_args(*args):
    return  print(args)

def pr_kwargs(**kwargs):
    for key, val in kwargs.items():
        print(f"{key} : {val}")

def give_predict(a,b):
    return a,b
# (0.2)
def type_return():
    a = {10,20,30}   # return type set  
    # a = [40,50,60] # return type list
    return a
# (0.3)
def packed_objcts():
    a = [10,20,30]
    b = [40,50,60]
    return a, b 
    # return type tuple(always)

# (1)
def data_loader(chunk_size, data):
    for i in range(0, len(data), chunk_size):
        yield data[i:i+chunk_size]
        # YIELD 
# (2)
def square_add(x, y):
    return x**2 + y **2
# (3)
def square(x):
    return x**2

def main():

# 0. FUNCTIONS
    str1 ="a b c"; str2 = "d e f"
    concat(str1,str2)
    
    # 0.1 --> args and kwargs <--
    str3 = "g h i"
    pr_args(str1,str2,str3)
    
    pr_kwargs(
        name = "adil",cl=10,roll=30,marks=30.5
    )
    a = 10; b = 20
    type(give_predict(a,b))  
    print(give_predict(a,b))
    
    # 0.2. Return type
    print(type(type_return()))
    print(type_return())

    # 0.3. Multiple returns 
    # ---> return type = tuple
    # unpacking
    print(type(packed_objcts))
    x, y = packed_objcts()
    print(x)
    print(y)

# # 0.4 Iterators iter(), next()
    s = {10,20,30,40,50}
    s_iter = iter(s)
    # iter -> yield next element
    print(next(s))
    print(next(s))
    # print..
    for i in s:
        print(i)

# 1. Dataset Genetator and yield
  # dataset
    data = [x for  x in range(500)]
  # yield
    n_chunk = 5
    x = data_loader(n_chunk, data)
    print(next(x)) # > yield next store index 
    # [0,1,2,3,4]
    print(next(x)) # > yield next store index
    # [5,6,7,8,9] <- list
    #... # > yield store next index
    # [...] <- list with n_chunk next elements 

# 2. Lambda Special Function
    # 1. (inline function)
    # 2. (anonymous)
    # lambda parameter : expression
    # kind of expressions:
    # a. single expression  
    # b. expression + object/iterable (optional)
    # x = 2; y = 3
    sq_add = lambda x,y : x**2 + y**2
    # == square_add(2, 3) see function above
    print(sq_add(2,3))
    if_even = lambda x: x%2 == 0 # single expession
    print(if_even(11)) # False

# 3. Map
    lst = [1,2,3,4,5,6]
    lst = list(map(square , lst))
    print(lst)

    str1 = "hello world, welcome to the 7th AI age"
    tmp = list(map(str.upper , str1))
    print(tmp)
    str1 = " ".join(tmp)
    print(str1)

# 4. Map with Lambda Function
    lst_lmbd = list(
        map(lambda x : x**2, lst) 
    ) # param.: expression + (iterable)
    print(lst_lmbd)

# 5. Filter
    nums = [x for x in range(100)]
    # evens
    evens = list(
        filter(lambda x : x%2==0,nums)
    )
    print(evens)
    # 
    upper50 = list(
        filter(lambda x : x > 50, nums)
    )
    print(upper50)
    #
    data_mix = [0,1,'',None,[],[1,2],None,True,False,None]
    cleaned_data = list(
        filter(None, data_mix)
    )
    print(cleaned_data)
    #
    fruits = ['aaa','bb','cccc','ddddd']
    more3units = list(
        filter(lambda x: len(x)>2,fruits)
    )
    print(more3units)

# 6. Reduce
  # lib.-> <functools>
    # lst1 = [1,2,...
    sum1 = reduce(lambda x,y: x+y, lst)
    print(sum1)
    # max(in lst1) with reduce
    max_v = reduce(
        lambda x,y: x if x > y else y, lst
    )
    str_lst = [
        "hello","world","welcome","to","the","7th","AI","age"
    ]
    # join st = " ".join(str_lst)
    # join with reduce
    str4 = reduce(
        lambda x,y: x+" "+y, str_lst
    )

main()