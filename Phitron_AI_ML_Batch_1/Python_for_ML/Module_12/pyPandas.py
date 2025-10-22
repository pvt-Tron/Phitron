''' PANDAS Commands
df = pd.read_(*) *csv/excel/parquet/json
var = df['Column_Name']
df.head() df.tail() df.sample(x) df.info() df.describe()
list_df = pd.DataFrame(my_list,columns=['Name','Age'],index=[1,2,3])
df = pd.DataFrame(obj)
df.loc[:,:X,'',[,]]
df_index.iloc[:,0:5]
df.rename(columns{'origin':'new', })
df.drop(0, inplace=True)
df.head()
df.tail()
for i,series in df.iterrows():
    print( f"{i} : {series}")
for i in df.itertuples(index=False): 
    print(i)
copy = df.sort_values('Data Structure Marks')
'''

import numpy as np
import pandas as pd
# df = Data Frame
# csv file
df = pd.read_csv('student_data.csv')
# excel file
xcel_file = pd.read_excel('phitron_student_marks.xlsx')
# parquet file
parquet_file = pd.read_parquet('students.parquet')
# json file
json_file = pd.read_json('data.json')

# Copy Selected Column 
student_id = df['StudentID']

print(type(df)) # <class 'pandas.core.frame.DataFrame'>
print(type(student_id)) # <class 'pandas.core.series.Series'>
# print(student_id)
print(df)

# Print with df.head(x), df.tail(x), df.sample(x)
df.head(4)
df.tail()
df.sample(10)
# All df's Infos
df.info()
# statistical values 
df.describe()

# import numpy as np <<<<<<

# column df.columns
col = np.array(df.columns)
print(col.dtype) # object
# index  df.index
ind = np.array(df.index)
print(ind)
print(ind.dtype)


# # Transforming to df from inbuilt datas
# list_df
my_list = [['Alice', 25], ['Bob', 30], ['Charlie', 28]]

list_df = pd.DataFrame(my_list,columns=['Name','Age'],index=[1,2,3])

print(type(list_df))

my_dict = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 29,28]
}
dict_df = pd.DataFrame(my_dict)

my_data = [
    {'Name': 'Alice', 'Age': 25, 'City': 'New York'},
    {'Name': 'Bob', 'Age': 30, 'City': 'Paris'},
    {'Name': 'Charlie', 'Age': 28}
]

data_df = pd.DataFrame(my_data) 

print(type(data_df['Name'])) # <class 'pandas.core.series.Series'>

# # Accessing Data # #
df
#accessing a column
df['FullName']
type(df['FullName']) # pandas.core.series.Series

# df.loc[ind start:ind end,col_start,col_end]
# Access a group of rows and columns
#  by label(s) or a boolean array.
df.loc[0]
type(df.loc[0]) # pandas.core.series.Series <--- []
# multiple row ( normal list ) 
df.loc[[2,3,19]] 

# multiple row ( range ) 
df.loc[3:7]

# single column 
df.loc[:,'Python Marks']

#multiple column 
df.loc[:,['Python Marks','Algorithm Marks']]

type(df.loc[:,['Python Marks','Algorithm Marks']])
# Output: pandas.core.frame.DataFrame <--- [[]]

# row with columns 
df.loc[3:7,'CompletionStatus']


# DataFrame.iloc Access group of rows
# and columns by integer position(s).

# # Changing index and columns and iloc
df_index = df.set_index('StudentID')
df_index

df_index.iloc[:,0:5] 

# Rename
df.rename(columns={'FullName':'Full Name','Algorithm Marks' :'Algo Marks'},inplace=True)
df

# Delete -> drop() (Sql like)
# row deletion
df.drop(0, inplace=True)
# column deletion 
df.drop('Instructor',axis=1, inplace=True)
df

df.loc[1,'Python Marks'] = 90 
df.loc[1,'CompletionStatus'] = 'Completed'
df.loc[1:3,'Python Marks']+=2 
df.head()

for i,series in df.iterrows():
    print( f"{i} : {series}")

for i in df.itertuples(index=False): 
    print(i)

copy = df.sort_values('Data Structure Marks') 
copy
copy = df.sort_values(['Data Structure Marks'],ascending=False)
copy = df.sort_values(['Data Structure Marks','Python Marks'],ascending=False) 
copy = df.sort_values(['Data Structure Marks','Python Marks'],ascending=[0,1]) 

# # Filtering data based on condition

not_started = df.loc[df['CompletionStatus']=='Not Started']

completed = df.loc[df['CompletionStatus']=='Completed']

# completed and ds marks is greater or equal 90 
completed_ds90 = df.loc[(df['CompletionStatus']=='Completed') & (df['Data Structure Marks']>=90)]

completed_ds90
# Output:
# StudentID	    Full Name	Data Structure Marks	Algo Marks	Python Marks	CompletionStatus	EnrollmentDate	Location
# 1	 PH1002 	Fatima Akhter	92.0	            92.0	    92.0	        Completed	        2024-01-20	    Chattogram
# 16 PH1017 	Afsana Mimi    	90.0            	90.0	    93.0	        Completed	        2025-09-01	    Dhaka
