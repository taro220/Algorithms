#is the number greater than max? if it is then move on
#   if the number is smaller than max, then take the index and run a loop backwards
#   to find the first number that it is greater than. Then append behind it



def insert(arr):
    min = arr[0]
    for idx in range(1,len(arr)):
        if arr[idx] < arr[idx-1]:
            min = arr[idx]
            # print arr
            for idx2 in range(idx-1,-1,-1):
                if min < arr[idx2] and idx2 != 0:
                    continue
                elif min > arr[idx2]:
                    arr.pop(idx)
                    arr.insert(idx2,min)
                    break
                else:
                    arr.pop(idx)
                    arr.insert(0,min)
        else:
            # print arr

    return arr

print insert([6,5,3,1,8,7,2,4])
