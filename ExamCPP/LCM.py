def LCM(a,n):
    i = 0
    count = 0
    lcm = max(a)
    while(True):
        if(count==n):
            return lcm
        if(lcm%a[i]==0):
            count += 1
        else:
            count = 0
            i = -1
            lcm+=1
        i+=1

def HCF(a,n):
    count = 0
    hcf = min(a)
    i = 0
    while(hcf<=min(a)):
        if(count==n):
            return hcf
        if(a[i]%hcf == 0):
            count+=1
        else:
            count = 0
            i = -1
            hcf -= 1
        i+=1
    else:
        hcf = 1
        return hcf
a = [24,4]
b = [24,4]
print(f"LCM of {a} = ", LCM(a, len(a)))
print()
print(f"HCF of {b} = ", HCF(b, len(b)))