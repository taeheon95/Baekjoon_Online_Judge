# [2108 통계학](https://www.acmicpc.net/problem/2108)

|시간제한|메모리 제한|
|:------:|:---------:|
|2초     |256MB      |

## 문제

수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

1. 산술평균 : N개의 수들의 합을 N으로 나눈 값
2. 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
3. 최빈값 : N개의 수들 중 가장 많이 나타나는 값
4. 범위 : N개의 수들 중 최댓값과 최솟값의 차이

## 입력

첫째 줄에 수의 개수 N(1 <= N <= 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

## 출력

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.

## 테스트 케이스

### 테스트 케이스 1

***

<div style="display:flex">
<div style="width:45%; margin-right:5%">

입력

``` text
5
1
3
8
-2
2
```

</div>
<div style="width:45%">

출력

``` text
2
2
1
10
```

</div>
</div>

### 테스트 케이스 2

***

<div style="display:flex">
<div style="width:45%; margin-right:5%">


입력

``` text
1
4000
```

</div>
<div style="width:45%">

출력

``` text
4000
4000
4000
0
```

</div>
</div>

### 테스트 케이스 3

***

<div style="display:flex">
<div style="width:45%; margin-right:5%">

입력

``` text
5
-1
-2
-3
-1
-2
```

</div>
<div style="width:45%">

출력

``` text
-2
-2
-1
2
```

</div>
</div>

### 테스트 케이스 4

***

<div style="display:flex">
<div style="width:45%; margin-right:5%">

입력

``` text
3
0
0
-1
```

</div>
<div style="width:45%">

출력

``` text
0
0
0
1
```

</div>
</div>

## 알고리즘 분류

- 수학
- 구현
- 정렬