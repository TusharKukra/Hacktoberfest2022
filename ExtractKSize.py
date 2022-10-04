test_list = ['gfg', 'is', 'best', 'for', 'geeks']
 
# printing original list
print("The original list : " + str(test_list))
 
# initialize K
K = 3
 
# Extract K sized strings
# using list comprehension + len()
res = [ele for ele in test_list if len(ele) == K]
 
# printing result
print("The K sized strings are : " + str(res))
