# Sample Problem

## Problem

You have gathered N bags of candy and you want to distribute the candy
amongst M kids. The i-th bag contains C_i pieces of candy.

> N 個のバッグのキャンディを持ってます
> あなたは M 人のガキに キャンディを配布している
> i-th バッグ には C_i キャンディ が含まれています

You want to make sure that every kid get the same amount of candy
and that the number of pieces of candy they receive is the greatest possible.
You can open each bag and mix all pieces of candy before distributing them
to the kids.

> あなたはすべての子供に同じ量のキャンディを分け与えたいです
> キャンディの数を可能な限り多くキャンディを 分け与えです
> それをやりましょう

How many pieces of candy will remain after you share the candy amongst kids,
based on the rules described above?

> 子どもたちにキャンディを分け与えたときに
> キャンディはいくつ残っていますでしょうか

## Input

The first line of the input gives the number of test cases, T.
T test cases follow.

Each test case consists of two lines.
The first line of each test case contains two integers:
integer N, the number of candy bags, and M, the number of kids.

The next line contains N non-negative integers C1,C2,…,CN representing array C,
where the i-th integer represents the number of candies in the i-th bag.

## Output

For each test case, output one line containing Case #x: y,
where x is the test case number (starting from 1)
and y is the number of candies that will remain
if you divide candies between kids according to the rules described above.
