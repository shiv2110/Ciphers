import math
import numpy as np
from sympy import Matrix
ct = input("Enter the cipher text : ")
key = input("Enter the key : ")
k = 0
l = 0
t = 0
n = int(math.sqrt(len(key)))
m = int(len(ct)/math.sqrt(len(key)))
key_matrix = []
ct_matrix = []
for i in range(0, n):
    a = []
    for j in range(0,n):
        a.append(key[k])
        k += 1
    key_matrix.append(a)

print("The key matrix")
for i in range(0, n):
    for j in range(0,n):
        print(key_matrix[i][j], end = " ")
    print()

for i in range(0, n):
    for j in range(0,n):
        if key_matrix[i][j] >= 'A' and key_matrix[i][j] <= 'Z':
            key_matrix[i][j] = ord(key_matrix[i][j])%65
        elif key_matrix[i][j] >= 'a' and key_matrix[i][j] <= 'z':
            key_matrix[i][j] = ord(key_matrix[i][j]) % 97

print("key matrix converted to numbers")
for i in range(0, n):
    for j in range(0,n):
        print(key_matrix[i][j], end = " ")
    print()

for i in range(0, n):
    b = []
    for j in range(0, m):
        b.append(ct[l])
        l += n
    ct_matrix.append(b)
    #print(ct_matrix[i][j], end=" ")
    t += 1
    l = t
    #print()
print("The cipher text matrix")
for i in range(0, n):
    for j in range(0, m):
        print(ct_matrix[i][j], end=" ")
    print()




for i in range(0, n):
    for j in range(0, m):
        if ct_matrix[i][j] >= 'A' and ct_matrix[i][j] <= 'Z':
            ct_matrix[i][j] = ord(ct_matrix[i][j]) % 65
        elif ct_matrix[i][j] >= 'a' and ct_matrix[i][j] <= 'z':
            ct_matrix[i][j] = ord(ct_matrix[i][j]) % 97

print("cipher text matrix converted to numbers")
for i in range(0, n):
    for j in range(0, m):
        print(ct_matrix[i][j], end=" ")
    print()

inverse_key = Matrix(key_matrix).inv_mod(26)
inverse_key = np.array(inverse_key)
inverse_key = inverse_key.astype(int)
#print(inverse_key)

result = np.dot(inverse_key, ct_matrix)
result = result%26
print("plain text matrix in numbers")
print(result)
print("The following plain text is : ",end="")

e = 0
for j in range(0, m):
    for i in range(0, n):
        if ct[e] >= 'A' and ct[e] <= 'Z':
            s = chr(result[i][j] + 65)
        elif ct[e] >= 'a' and ct[e] <= 'z':
            s = chr(result[i][j] + 97)
        print(s,end = "")
        e+=1

