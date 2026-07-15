import random
#计算1-100的和
total=0
for i in range(1,101):
    total+=i
print(f"1-100的和为：{total}")
#输出九九乘法表
for i in range(1,10):
    for j in range(1,i+1):
        print(f"{i}x{j}={i*j}")
#输出一组分数的最高分和平均分
scores=[80,95,78,90,88]
max_scores=max(scores)
sum_scores=sum(scores)
len_scores=len(scores)
avg_score=sum_scores/len_scores
print(f"最高分为{max_scores}")
print(f"平均分为{avg_score}")
#字典应用
student={"name":"Tom","math":90,"english":95,"python":100}
print(student["name"])
sum_Tom=student['english']+student["math"]+student['python']
print(f"总分为：{sum_Tom}")
avg_Tom=sum_Tom/3
print(f"平均分为：{avg_Tom}")
#猜数字游戏
num=random.randint(1,100)
while True:
    num1=int(input("请输入一个数:"))
    if num==num1:
        print("猜对了！")
        break
    else:
        print("猜错了！")
#成绩等级
score=int(input("请输入成绩："))
if score>=90 and score<=100:
    print("优秀")
elif score>=80 and score<90:
    print("良好")
elif score>=70 and score<80:
    print("中等")
elif score>=60 and score<70:
    print("及格")
elif score<60:
    print("不及格")
#函数练习
def average(scores):
    total=0
    for score in scores:
        total+=score
    #或简洁写法total=sum(scores)
    return total/len(scores)
