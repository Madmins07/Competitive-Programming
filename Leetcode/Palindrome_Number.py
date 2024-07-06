class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=str(x)
        count=0
        for i in range(len(a)):
            if(a[i]==a[-1-i]):
                count=count+1
                continue
            else:
                count=0
        if (count==len(a)):
            print("true")
            return True
        elif(count==0):
            print("false")
            return False
    
