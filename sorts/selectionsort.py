def selectionSort(arr):
    min = arr[0]
    tempidx = 0
    for idx in range(0,len(arr)-1):
        print "loop: " + str(idx)
        for idx2 in range(idx,len(arr)):
            if arr[idx2] < min:
                min = arr[idx2]
                tempidx = idx2
        arr[idx],arr[tempidx] = arr[tempidx],arr[idx]
        min = arr[idx+1]
    return arr

print selectionSort([7,6,4,5,2,1,3])
