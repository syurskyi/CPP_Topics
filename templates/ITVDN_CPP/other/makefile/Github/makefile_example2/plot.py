import matplotlib.pyplot as plt
with open('file1.txt', 'r') as f:
    lines = f.readlines()
    x = [float(line.split()[0]) for line in lines]
    y = [float(line.split()[1]) for line in lines]
plt.plot(x, y, color='red', linestyle='dashed', linewidth = 3,marker='o', markerfacecolor='blue', markersize=12) 
plt.bar(x, y,width = 0.3, color = ['orange', 'yellow','cyan','green']) 
plt.show()


