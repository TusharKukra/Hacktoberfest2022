from itertools import islice
 
# generator function
def over_slice(test_str, K):
    itr = iter(test_str)
    res = tuple(islice(itr, K))
    if len(res) == K:
        yield res   
    for ele in itr:
        res = res[1:] + (ele,)
        yield res
 
# initializing string
test_str = 'Geeksforgeeks'
 
# printing original string
print("The original string is : " + str(test_str))
 
# initializing K
K = 4
 
# calling generator function
res = ["".join(ele) for ele in over_slice(test_str, K)]
 
# printing result
print("Overlapping windows : " + str(res))
