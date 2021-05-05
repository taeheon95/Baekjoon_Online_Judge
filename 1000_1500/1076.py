c = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]
colors = {c[i]:i for i in range(10)}
n=[input() for _ in range(3)]
print((colors[n[0]]*10+colors[n[1]])*10**colors[n[2]])