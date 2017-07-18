
def checkOrder(arr2):
    outOfOrder = False
    for idx in range(len(arr2)-1):
        if arr2[idx] <= arr2[idx+1]:
            continue
        else:
            outOfOrder = True
    return outOfOrder


def organize(arr):
    for idx in range(len(arr)-1):
        if arr[idx] > arr[idx+1]:
            arr[idx],arr[idx+1] = arr[idx+1],arr[idx]
            # print arr
    if(checkOrder(arr) == True):
        return organize(arr)
    else:
        return arr

print organize([3,5,4,7,9,1,0,2,8,6])
