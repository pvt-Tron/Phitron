name = input("What is your name?")
print(name)

message = "Tell me about yourself"
print(message)

# Slice String[start:end:step]

message_sliced = message[0:7] # Tell me
processed_mess = message_sliced.lower()
print(processed_mess)
# String Access
print(message[0])
print(message[-1])
print(message[-2])

# String Methods len, in, .find
print(len(message))
print("Tell" in message) # True
print("Tell" in processed_mess) # False
index = processed_mess.find("tell")
print(index)
count_in_str = processed_mess.count("l")
print(count_in_str)

# Strings -> Splitting, Joining, Formatting

prompt  = "What is Phitron ?"
# SPLIT
tokens = prompt.split()
print(tokens)
# JOIN
sentence = "-".join(tokens)
print(sentence)

# Formatted Strring
name = "Alice"
age = 25
height = 4.1123445
print(f"Her nane is {name}, she is {age} years old she {height} feets")
print(
    f"Her nane is {
        name
        }, she is {
            age
            } years old she {
                height
                } feets"
        )
infos = f"Her nane is {name}, she is {age} years old she {height} feets"
print(type(infos))

# adjust formatted variables
model_accuracy = 0.83333

print(f"the model accuracy is {model_accuracy}")

print(f"the model accuracy is {model_accuracy:.2%}")

