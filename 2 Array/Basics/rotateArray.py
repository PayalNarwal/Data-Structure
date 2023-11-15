nums = [-1,-100,3,99]
k =2
n = len(nums)
l1 = nums[n-k: ]
print(l1)
l2 = nums[ :n-k]
print(l2)
temp = l1 + l2
print(temp)
nums = temp
print(nums)