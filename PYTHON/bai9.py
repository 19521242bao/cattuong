height,weight = list(map(float, input().split()))
BMI = weight / (height * height)
print("{:.2f}".format(BMI))
