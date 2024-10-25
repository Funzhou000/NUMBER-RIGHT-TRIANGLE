# NUMBER-RIGHT-TRIANGLE
## 【Deep Foundation 4. Example 6】Digital Right Triangle

### Problem Description

Given an integer $n$, please output a right triangle whose side length is $n$. All numbers are composed of 2 digits. If there is no second digit, a leading 0 is added.

### Input Format

Input a positive integer $n$.

### Output Format

Output the digital right triangle as required by the title.

### Sample #1

### Sample Input #1

```
5
```

### Sample Output #1

```
0102030405
06070809
101112
1314
15
```

### Hint

The data is guaranteed to satisfy $1\le n\le13$.

# 【深基4.例6】数字直角三角形

## 题目描述

给出 $n$，请输出一个直角边长度是 $n$ 的数字直角三角形。所有数字都是 $2$ 位组成的，如果没有 $2$ 位则加上前导 $0$。

## 输入格式

输入一个正整数 $n$。

## 输出格式

输出如题目要求的数字直角三角形。

## 样例 #1

### 样例输入 #1

```
5
```

### 样例输出 #1

```
0102030405
06070809
101112
1314
15
```

## 提示

数据保证，$1\le n\le13$。
set fill （“0”）用于在没有两个数字时填充0.
setw（2）用于保证输出的只用两个数字
