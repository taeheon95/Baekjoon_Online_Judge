def main():
    n, k = map(int, input().split())
    nation_lists = [list(map(int, input().split())) for i in range(n)]
    nation_lists.sort(key=lambda nation : nation[0])
    Rank = [0 for i in range(n)]
    compRank(Rank, nation_lists)
    print(Rank[k-1]+1)

def compRank(rank, nation):
    for i in range(len(nation)):
        for j in range(len(nation)):
            if(nation[i][1] > nation[j][1]):
                rank[j] += 1
            elif(nation[i][1] == nation[j][1]):
                if(nation[i][2] > nation[j][2]):
                    rank[j] += 1
                elif(nation[i][2] == nation[j][2]):
                    if(nation[i][3] > nation[j][3]):
                        rank[j] += 1

if __name__ == "__main__":
    main()
