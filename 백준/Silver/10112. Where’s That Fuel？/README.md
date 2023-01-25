# [Silver II] Where’s That Fuel? - 10112 

[문제 링크](https://www.acmicpc.net/problem/10112) 

### 성능 요약

메모리: 3688 KB, 시간: 24 ms

### 분류

그리디 알고리즘(greedy), 정렬(sorting)

### 문제 설명

<p>The heroic Team Star Fox is on a mission to collect as much fuel as possible from various planets across the Lylat System. There are N (1 ≤ N ≤ 10<sup>5</sup>) planets, and the ith one contains A<sub>i</sub> fuel cells - but travelling there from any other planet uses up B<sub>i</sub> fuel cells (1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ 10<sup>4</sup>). Unfortunately, fuel cells are not a sustainable resource, so if a planet is visited for a second time, there will be no new fuel to collect.</p>

<p>Team Star Fox starts on planet P (1 ≤ P ≤ N) – as such, they may collect its fuel cells immediately. They may then travel to as many different planets as they’d like to, in any order, as long as they have sufficient fuel to spend on each flight (that is, their fuel cell count remains non-negative). Finally, they may choose to stop at any point (possibly even before leaving planet P), with the goal of maximizing the number of fuel cells they end up with. If this can be done in multiple ways, they’d like to maximize the number of different planets they visit as a secondary objective. Can you help our heroes?</p>

### 입력 

 <p>The first line contains two integers: N (1 ≤ N ≤ 10<sup>5</sup>), followed by a space, followed by P (1 ≤ P ≤ N), which represents the number of planets followed by the starting planet number. The next N lines contain A<sub>i</sub>, followed by a space, followed by B<sub>i</sub> (1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ 10<sup>4</sup>).</p>

### 출력 

 <p>The output consists of two lines, with each line containing one positive integer. The first line contains the largest number of fuel cells that Team Star Fox can possess once they decide to stop. The second line contains the largest number of planets that Team Star Fox can visit, such that they still end up with this maximal number of fuel cells.</p>

