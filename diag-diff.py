def diagonalDifference(arr):
    # Write your code here
    p=0
    s=0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if i==j:
                p+=arr[i][j]
            if i==((len(arr)-1)-j):
                print(arr[i][j])
                s+=arr[i][j]
    return abs(p-s)
