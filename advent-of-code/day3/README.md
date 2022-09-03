# Day 3

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

Use the binary numbers in your diagnostic report to calculate the gamma rate
and epsilon rate, then multiply them together. What is the power consumption
of the submarine? (Be sure to represent your answer in decimal, not binary.)
