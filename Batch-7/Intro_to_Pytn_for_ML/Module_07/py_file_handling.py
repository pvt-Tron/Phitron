# FILE HANDLING

''' Basic Keywords:
    1. file open:
        file_name = open(
            "[/path/name.ext]", "[mode]"
        )
    2. file read, write, append
        a. file_name.read()
        b. file_name.readlines()
        c. file_line.strip()
         ...
        c. file_name.write()
         ...
    3. pointer on cursor
        a. file_name.tell() # return cursor position
        b. file_name.seek()
        c. file_name.truncate()

    4. file close
        file_name.close()
'''
from functools import reduce

# File Read
def fl_read(path, mode):
    file = open(path, mode)
    content = file.readlines()
    content = list(map(str.strip, content))
    return content
# # using WITH
def flW_read(path):
    with open(path, "r") as file:
        content = file.readlines()
        content = list(map(str.strip, content))
    return content

# File Filter
def fl_filter(content, n):
    res = list(filter(
        lambda x: len(x) >= n, content
    ))
    return res
# Write
def flW_write(path, text):
    with open(path, "w") as file:
       file.write(text) 

# Write/Append
def write_appnd(path, text, mode):
    with open(path, mode) as file:
        file.write(text)
        # if mode is "w":
        #    file.write(text) 
        # if mode is "a":
        #    file.write(text)

def main():
    # path/file_name.ext
    file = "./sample_data/sample.txt","r"
    
    # mode = "r" READ
    content = fl_read(file)
    file_filtered = fl_filter(content)
    print(file_filtered)

    # mode = "w" WRITE
    text = "text to write in the file"
    flW_write(file, text) 
    #^It overwrite a file, 
    # or create a new one.
    # mode = "a" APPEND
    mode = "a"
    write_appnd(file, text, mode)
    
    #  
    with open(file, "w") as file:
        fl_lines = file.readlines()
        # lines count
        lines_cnt = len(fl_lines)
        # word count
        wrd_cnt0 = list(map(
            lambda x: len(x.split(),fl_lines)
        ))
        wrd_cnt = reduce(
            lambda x,y: x+y, wrd_cnt0
        )
        # text clean
        # remove \n
        fl_clean = list(map(
            str.strip ,fl_lines
        ))
        # remove " "
        fl_clean = list(map(
            lambda x,y: x.replace(" ", ""), fl_clean
        ))
        # chars cnt
        chr_cnt0 = list(map(
            lambda x: len(x), fl_clean
        ))
        chr_cnt = list(map(
            lambda x,y: x+y, chr_cnt0
        ))
        # seek, tell(), truncate()
        print(file.tell())
        file.seek(0)
        print(file.tell())
        print(file.read())
        file.truncate(5)
        file.seek(0)
        print(file.read())

main()