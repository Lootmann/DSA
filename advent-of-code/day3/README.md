# Day 3

## 1

Binary Diagnostic

The submarine has been making some odd creaking noises,
so you ask it to produce a diagnostic report just in case.

> 潜水艦は奇妙なクラック音放ちます
> なので念の為 診断レポートを作るように依頼します

The diagnostic report (your puzzle input) consists of a list of binary numbers
which, when decoded properly, can tell you many useful things about the conditions
of the submarine. The first parameter to check is the power consumption.

> 診断レポートは ビット列のリストから構成されています
> 適切にデコードができれば 潜水艦の状態について有益な由無しを
> 知ることができます

You need to use the binary numbers in the diagnostic report to generate two new
binary numbers (called the gamma rate and the epsilon rate).

> あなたは診断レポートの中で 新たな 2 つのビット列を生成する必要があります
> これを ガンマ率 と イプシロン率と呼びます

The power consumption can then be found by multiplying the gamma rate
by the epsilon rate.

> 電源使用は イプシロン率 x ガンマ率によって算出されます

Each bit in the gamma rate can be determined by finding the most common bit
in the corresponding position of all numbers in the diagnostic report.
For example, given the following diagnostic report:

> ガンマ率のそれぞれのビット列は 診断レポート中のすべてのビット列で
> 最も出現数が多いビット値によって定義されます

```
00100
11110
10110
10111
10101
01111
00111
11100
10000
11001
00010
01010
```

Considering only the first bit of each number,
there are five 0 bits and seven 1 bits. Since the most common bit is 1,
the first bit of the gamma rate is 1.

> 一列目（縦に見よ）は 0 が 5 つ 1 が 7 つあるので
> 最初の列のガンマ率は 1

The most common second bit of the numbers in the diagnostic report is 0,
so the second bit of the gamma rate is 0.

The most common value of the third, fourth, and fifth bits are 1, 1,
and 0, respectively, and so the final three bits of the gamma rate are 110.

So, the gamma rate is the binary number 10110, or 22 in decimal.

> こんな感じで計算していけばガンマ率がわかるよ

The epsilon rate is calculated in a similar way;

> イプシロン率も同じ感じで計算されます

rather than use the most common bit, the least common bit from each position
is used. So, the epsilon rate is 01001, or 9 in decimal.

> ガンマ率の逆で 各列を見て最も出現数が少ないビットを見てね
> つまりガンマ率の反転を取れば計算できる

Multiplying the gamma rate (22) by the epsilon rate (9) produces the power
consumption, 198.

> あとはガンマ率 x イプシロン率を計算すれば終了
> 出力はビットではなくて普通のデシマル＝ 10 進数で出してね

## 2

Next, you should verify the life support rating,
which can be determined by multiplying the oxygen generator rating
by the CO2 scrubber rating.

> CO2 scrubber 率を定義します

Both the oxygen generator rating and the CO2 scrubber rating are values
that can be found in your diagnostic report - finding them is the tricky part.

> 酸素生成率と CO2 除去率はちょこっとトリッキーな方法で算出します

Both values are located using a similar process that involves filtering out
values until only one remains.

> 同じ方法で出力します

Before searching for either rating value, start with the full list of binary
numbers from your diagnostic report and consider just the first bit of those
numbers.

> それぞれのビット列の はじめのビットを取り出す

Then:

Keep only numbers selected by the bit criteria for the type of rating value
for which you are searching. Discard numbers which do not match the bit criteria.

> この最初ビットをビット基準とする

If you only have one number left, stop; this is the rating value
for which you are searching.

Otherwise, repeat the process, considering the next bit to the right.
The bit criteria depends on which type of rating value you want to find:

To find oxygen generator rating, determine the most common value (0 or 1)
in the current bit position, and keep only numbers with that bit in that position.
If 0 and 1 are equally common, keep values with a 1 in the position being
considered.

To find CO2 scrubber rating, determine the least common value (0 or 1)
in the current bit position, and keep only numbers with that bit in that position.
If 0 and 1 are equally common, keep values with a 0 in the position being
considered.

For example, to determine the oxygen generator rating value using the same
example diagnostic report from above:

Start with all 12 numbers and consider only the first bit of each number.

There are more 1 bits (7) than 0 bits (5), so keep only the 7 numbers
with a 1 in the first position:
11110, 10110, 10111, 10101, 11100, 10000, and 11001.

Then, consider the second bit of the 7 remaining numbers:

there are more 0 bits (4) than 1 bits (3),
so keep only the 4 numbers with a 0 in the second position:
10110, 10111, 10101, and 10000.

In the third position,
three of the four numbers have a 1,
so keep those three: 10110, 10111, and 10101.

In the fourth position,
two of the three numbers have a 1,
so keep those two: 10110 and 10111.

In the fifth position,
there are an equal number of 0 bits and 1 bits (one each).

So, to find the oxygen generator rating,
keep the number with a 1 in that position: 10111.

As there is only one number left, stop;
the oxygen generator rating is 10111, or 23 in decimal.

Then, to determine the CO2 scrubber rating value from the same example above:

Start again with all 12 numbers and consider only the first bit of each number.
There are fewer 0 bits (5) than 1 bits (7), so keep only the 5 numbers with a 0
in the first position: 00100, 01111, 00111, 00010, and 01010.

Then, consider the second bit of the 5 remaining numbers: there are fewer 1
bits (2) than 0 bits (3),
so keep only the 2 numbers with a 1 in the second position: 01111 and 01010.

In the third position, there are an equal number of 0 bits and 1 bits (one each).
So, to find the CO2 scrubber rating,
keep the number with a 0 in that position: 01010.

As there is only one number left, stop; the CO2 scrubber rating is 01010,
or 10 in decimal.

Finally, to find the life support rating, multiply the oxygen generator rating
(23) by the CO2 scrubber rating (10) to get 230.
