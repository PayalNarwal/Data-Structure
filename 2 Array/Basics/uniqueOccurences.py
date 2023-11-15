def func():
    arr = [-3,0,1,-3,1,1,1,-3,10,0]
    arr.sort()
    print(arr)
    arr2=[]
    for i in arr:
        count = 0
        for j in arr:
            if i==j:
                count+=1
        if i not in arr2:
            arr2.append(i)
    occ=[]
    for i in arr2:
        count=0
        for j in arr:
            if i==j:
                count+=1
        occ.append(count)
            
    print(arr2)
    print(occ)
    
    for i in range(0,len(occ)):
        for j in occ[i:]:
            if i==j:
                return False
                   
    return True
    
  
        
    
print(func())