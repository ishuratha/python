num=int(input("Enter number:"))
ans=''
while(num!=0):
         a=num%10
         if a%2!=0:
                  ans=ans+' '+str(a)
          num=num//10
 print("odd number is",ans[::-1])         
