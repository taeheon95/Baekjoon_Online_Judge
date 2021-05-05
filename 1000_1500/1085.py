x, y, w, h = map(int, input().split())
way = [x, y, w-x, h-y]
way.sort()
print(way[0])