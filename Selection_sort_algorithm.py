#Hacktoberfest 2022
# function
def selection_sort(A):
    for i in range(len(A)): 
    # Finding the minimum element in remaining unsorted array 
        min_idx = i 
        for j in range(i+1, len(A)): 
            if A[min_idx] > A[j]: 
                min_idx = j 
                  
        # Swapping A[i] with minimum element         
        A[i], A[min_idx] = A[min_idx], A[i] 

#Driver Code
arr = [12,45,67,2,3,9]
selection_sort(arr)   #Calling Function

print("Final array after sorting :\n")
for i in range(len(arr)):
    print(arr[i])    #Printing array after sorting
