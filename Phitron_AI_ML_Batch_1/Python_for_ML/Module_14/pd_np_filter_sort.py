'''
    df[df['column_name'].str.contains('regex_pattern')]
    df.loc[df['column_name'].str.contains('regex_pattern')]

    regex_pattern:
        Exact: r'\bNAME\b' [---> \b limit exact word ]
        Part: 'NAME' match all cases
        Multiple: 'NAME1|NAME2' match or/and cases
                 r"NAME1|NAME2"

        Start with: r"^[AEIOU]" Start with a capital Wovel
        End With:   r"end_of_word_letters$"

        Exclude: ("NAME", case=False) << not containing NAME
        
Apply also to:             
    str.extract()
    str.replace()

        str.split()
    df['First Name'] = df['FullName'].str.split(' ').str[0]
    
    Adding a Column:
        df['new_column_name'] = 'default_content'
        
        adding column from df datas
        df['sum_of_columns'] = df['col_1'] + df['col_2'] + df['col_3']
        df['sum_of_columns'] =  = df['col_1'] > 90

        adding with NumPy where:
        df['A+ in DS'] = np.where(
            df['Data Structure Marks']>90, 'A+' , 'A'
            # if > 90 A+ else A
        )
        # filtered: >90, A+, A.

    df['col_nm'].command()
    .unique() .nunique()
    .isnull() .notnull() 
    .hasnans
    df.drop_duplicates() 



'''

import numpy as np 
import pandas as pd

data = {
    "Name": ["Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hannah","Sakib"],
    "City": ["New York", "Los Angeles", "Newark", "Boston", "New Delhi", "Chicago", "New Orleans", "Houston","H Los Ang"],
    "Department": ["HR", "IT", "Finance", "IT", "HR", "Marketing", "Finance", "HR", "HR"],
    "Salary": [50000, 60000, 55000, 70000, 52000, 58000, 62000, 51000,70000]
}

df = pd.DataFrame(data)

# unique works on only series 
df['Name'].unique()
len(df['Name'].unique())
df['Name'].nunique()

# Save 'Data Frame' to .csv File
df.to_csv('new_data.csv')


df['FullName'].str # < see str .[buldin_functions_preview]
                   # str. open a dropdown...
# count duplicates
df.duplicated().sum()

# delelting duplicates values 
df.drop_duplicates()
# permanent delete
df.drop_duplicates(inplace= True)
# specified
df.drop_duplicates(subset=['Name'])
# first, last
df.drop_duplicates(subset=['Name'],keep='last')

# .dropna() .fillna()
df.dropna() 
df.dropna(how='all',inplace = True)
df.dropna(subset=['Python Marks']) 
df.dropna(subset=['Python Marks','Algorithm Marks']) 

df['FullName'].fillna('unknown') 
df['Python Marks'].fillna(df['Python Marks'].mean(),inplace=True)

# sum
df['Data Structure Marks'].sum()

# max and min 
print(df['Data Structure Marks'].min())
df['Data Structure Marks'].max()

#mean -> average 
df['Data Structure Marks'].mean()

#median 
df['Data Structure Marks'].median()

# mode -> highest frequency er number
df['Data Structure Marks'].mode()

# standard deviation -> std 
df['Data Structure Marks'].std()

# correlation matrix 
df[['Data Structure Marks','Python Marks']].corr() 

# sum in different columns row wise
df[['Data Structure Marks','Python Marks']].sum(axis=1)

df['Total Marks'] = df.iloc[::,2:5].sum(axis=1)

#min max scaling 
mn = df['Total Marks'].min() 
mx = df['Total Marks'].max() 

df['Scaled Marks'] = df['Total Marks'].apply(lambda x : (x-mn)/(mx-mn))

# custom built function 
def grading_system(marks):

    if marks >=260:
        return 'A+' 
    elif marks>=250:
        return 'A' 
    else:
        return 'A-'

df['Grade'] = df['Total Marks'].apply(grading_system)

# 
def marking_system(df): 
    a = df['Data Structure Marks'] * 2 
    b = df['Python Marks'] * 3 
    c = df['Algorithm Marks'] * 4

    return a+b+c 


df['Exceptional Marks'] = df.apply(marking_system,axis=1)

# datetime and time delta
df['EnrollmentDate'] = pd.to_datetime(df['EnrollmentDate']) 
df['EnrollmentDate']

df['Enrollment Year'] = df['EnrollmentDate'].dt.year 
df['Enrollment Date'] = df['EnrollmentDate'].dt.day

df['FinishedDate'] = pd.to_datetime(df['FinishedDate']) 
df['Total time taken to finish']= df['FinishedDate'] - df['EnrollmentDate']

# GrouBy
group = df.groupby('Instructor') 
df.drop(columns=['StudentID','FullName','CompletionStatus'],inplace=True)
group = df.groupby('Instructor') 
group.sum()

group.min()
group.max()
group.first()
group.last()

df.sort_values('Total Marks', ascending=False).groupby('Instructor').head(5)


df['Total Marks']>250
(df['Total Marks']>250).sum()
