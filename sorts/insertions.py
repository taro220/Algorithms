def insertSort(arr):

    for i in range(1,len(arr)):
        curr = arr[i]

        for j in range(0,i):
            if arr[j] >= curr:
                break;

        for k in xrange(i-1,j+1,-1):
            arr[k+1] = arr[k]

        arr[j] = curr

    return arr


print insertSort([10,9,8,7,6,5,4,3,2,1])
