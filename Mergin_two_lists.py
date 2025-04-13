list1 = [1,2,3,4]
list2 = [5,6,7,8]
list3 = []

for a,b in zip(list1,list2):
    list3.append(a)
    list3.append(b)

print(list3)