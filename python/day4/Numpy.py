# a = [1, 2, 3]
# b = [4, 5, 6]

# print(a + b)
# print(a * 2)
# import numpy as np

# a = np.array([1, 2, 3])
# b = np.array([4, 5, 6])

# print(a + b)
# print(a * 2)
# import numpy as np

# a=np.array([10,20,30,40,50])
# print(a)
# print(type(a))
# print(a.shape)
# print(a.ndim)
# print(a.size)
# print(a.dtype)
# print(a+10)
# print(a*3)
# print(a/2)
# print(a**2)
# import numpy as np

# arr=np.array([15,25,35,45,55])
# print(arr.size)
# print(arr.max())
# print(arr.min())
# print(arr.mean())
# import numpy as np

# arr=np.array([2,4,6,8,10])
# print(arr+5)
# print(arr*3)
# print(arr**2)
import numpy as np

scores=np.array([80,90,100,70,60])
print(scores+5)
mask=scores>=90
res=scores[mask]#等价于res=scores[scores>=90]
print(res)
mask1=scores>=60
print(np.all(mask1))
