man=0
mman=0
for i in range(10):
    m_out,m_in=map(int,input().split())
    man -= m_out;man += m_in
    mman=max(man, mman)
print(mman)