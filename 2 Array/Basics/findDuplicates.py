nums = [1,1]
arr=[]
nums.sort()
print(nums)
for i in range(0,len(nums)-1):
    if nums[i]==nums[i+1]:
        arr.append(nums[i])
print(arr)


    