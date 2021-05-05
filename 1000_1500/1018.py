N,M=map(int,input().split())
board=[input() for _ in range(N)]
black=[	
    "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",	"WBWBWBWB",
	"BWBWBWBW",	"WBWBWBWB",	"BWBWBWBW",	"WBWBWBWB"
    ]
white=[
    "WBWBWBWB",	"BWBWBWBW",	"WBWBWBWB",	"BWBWBWBW",
	"WBWBWBWB",	"BWBWBWBW",	"WBWBWBWB",	"BWBWBWBW",
    ]
cnt=0
for i in range(N-7):
    for j in range(M-7):
        for k in range(i,i+8):
            for l in range(j, j+8):
                if board[k][l] != white[k-i][l-j]:
                    cnt+=1