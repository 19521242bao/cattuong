a,b= list(map(int, input().split()))
s=(a*a+b*b+2*(a*b)**0.5)**0.5
print('{:.2f}'.format(s))