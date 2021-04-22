# print('Hello! \nWhats poppin?')

# if 6 > 5:
#         print("6 is greater!")
# if 6 < 5:
#         print("Yeah! fool") # This is sweet comment in python

# X = 5
# Y = "Hey, You again!"
# print(X, Y)

# a = int(3)
# b = str("Fushiguro Megumi!")
# c = float(3)
# A = "Best friend Toudou!"
# print("\n", a,b, c)

# print(type(X))

# print(A)


# anime = ['Electron', 'Proton', 'Neutron']
# x, y, z = anime
# print(x + " " + y +" "+ z)
########################################################################################################


# x = "Amusing"     ## FUnction IN PYTHON

# def fun():

#     global y
#     y = 'Right?'
#    # x = 'Amazing'
#     print("It is "  + x + " " +y)

# fun()


#################################################################################################################


# a = ['fizz', 'buzz', 'noob']   # LIST

# b = ('fizz', 'buzz', 'noob')   # TUPLE

# print(type(b))

# print( type(a))


# c = { "name": "ISHANT", "age" : "21", "Gender" : "MALE"}
# print( type(c))
# print(c)


#########################################################################################################


####### RANDOM

# import random

    
# print(random.randrange(1, 20))


###################################


# a = """lorem ipsum"""
# print(a)

# b = '''Lorem ipsum dolor sit amet,
# consectetur adipiscing elit,
# sed do eiusmod tempor incididunt
# ut labore et dolore magna aliqua.'''

# print(b)



################ STRINGS ARE ARRAYS #########################

# a = "HI PYTHON"
# print(a[1] + a[6])

### LOOPING $###############################

# s = "fizzbuzz"

# for i in s:
#     print(i)

# print(len(s))

# print("fizz" in s)
# print("a" in s)

# if "buzz" in s: 
#     print("YES it is!")
# else:
#     print("NOpe!")

#######################################################################################################3
##### SLICING


# s = "AWESOMEWORLD!"

# print(s[7:12]) # slicing

# x = s[:7] # slice from start
# print(x)

# print(s[0:]) ### SLice to the end!


# print(s[-8:-3]) ## NEgative Indexing!




# s = " RIGHT THING to do! "

# print(s.upper() + s.lower())

# print(s.strip()) #### REMOVES WHITESPACE

# print(s.replace("o", "i")) ### REplace characters // it is case sensitive

# l = s.split(" ")
 
# print(l)

# x = "WhaT's "
# y = "PoPPin?"

# z = x + y  #### concatenation

# print(z)


########################## We cannnot combine numbers with string so we need to use format method in here!###

age = 21

string = "My Name is ISHANT and My age is {}"
print(string.format(age))
### LIKE THIS USE FORMAT

#Format can take unlimited numbers of arguments

x = "HI"
y = "ISHANT"
z = "HOW ARE You?"

s = "{2} {1} {0}"

final = s.format(x,y,z)

print(final)
print(final.split(" "))




