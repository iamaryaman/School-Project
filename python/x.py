l1 = None
def hello(arr):
    length = len(arr)
    subarray: list = None
    for i in range(length):
        for j in range(i,length):
            subarray.append(arr[i:j+1])
    return subarray

l1 = [2,3,4,5]

result = hello(l1)
for m in result:
    print(m)