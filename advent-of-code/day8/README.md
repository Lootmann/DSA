# Day 8: Seven Segment Search

## 1

You barely reach the safety of the cave
when the whale smashes into the cave mouth, collapsing it.

> 洞窟の安全な場所に到達 をしかけています
> クジラが洞門をぶっ壊して、洞窟を崩壊させる時

Sensors indicate another exit to this cave at a much greater depth,
so you have no choice but to press on.

> センサーは洞窟の他の出口を指し示しています とても深い場所で
> それを選択する以外にありませんが、押し潰れています

As your submarine slowly makes its way through the cave system,
you notice that the four-digit seven-segment displays
in your submarine are malfunctioning;
they must have been damaged during the escape.

> 洞窟システムにそってあなたの潜水艦はゆっくりとその方向に進んでいく
> と同時にあなたは潜水艦の 4 つの数字 7 つのセグメント表示システムが
> 故障していることに気付きます
> 洞窟の奥に逃げている間にダメージを受けたに違いない

You'll be in a lot of trouble without them,
so you'd better figure out what's wrong.

> このシステムがないと大変なことになる
> 何が問題なのか考えたほうが良いぞ

Each digit of a seven-segment display is rendered by turning on
or off any of seven segments named a through g:

> 7 セグメントの数値の表示は 7 セグメントの on off で
> 数値を表示します a - g まで使います

```
  0:      1:      2:      3:      4:
 aaaa    ....    aaaa    aaaa    ....
b    c  .    c  .    c  .    c  b    c
b    c  .    c  .    c  .    c  b    c
 ....    ....    dddd    dddd    dddd
e    f  .    f  e    .  .    f  .    f
e    f  .    f  e    .  .    f  .    f
 gggg    ....    gggg    gggg    ....

  5:      6:      7:      8:      9:
 aaaa    aaaa    aaaa    aaaa    aaaa
b    .  b    .  .    c  b    c  b    c
b    .  b    .  .    c  b    c  b    c
 dddd    dddd    ....    dddd    dddd
.    f  e    f  .    f  e    f  .    f
.    f  e    f  .    f  e    f  .    f
 gggg    gggg    ....    gggg    gggg
```

So, to render a 1, only segments c and f would be turned on;
the rest would be off. To render a 7, only segments a, c,
and f would be turned on.

> なので 1 をレンダーするんじは c, f のみだけ on にします
> その他は off です 7 をレンダーするのは a, c, f だけ on

The problem is that the signals which control the segments
have been mixed up on each display.

> 今回の問題はセグメントをコントロールしているシグナルが
> それぞれのディスプレイ上で混合していることです

The submarine is still trying to display numbers by producing
output on signal wires a through g,
but those wires are connected to segments randomly.

> 潜水艦は未だに数値を表示しようとしています
> a - g までの信号のワイヤーの出力を生成することによって
> それらのワイヤーは乱雑にセグメントと連結しています

Worse, the wire/segment connections are mixed up separately
for each four-digit display!
(All of the digits within a display use the same connections, though.)

> さらに悪いことに ワイヤーとセグメントの連結は 書く四桁の表示と
> ごっちゃになっている
> ディスプレイ上のすべての数値は同じ連結を使っている

So, you might know that only signal wires b and g are turned on,
but that doesn't mean segments b and g are turned on:
the only digit that uses two segments is 1,
so it must mean segments c and f are meant to be on.

> なので b, g だけが on になっている信号であることを知ることができますが
> それは segment b/g が表示されているという意味ではありません
> 2 つのセグメントだけが使われている数値は 1 のみであり
> それは c/f がセグメントに使われているということなのです

With just that information, you still can't tell which wire (b/g)
goes to which segment (c/f).
For that, you'll need to collect more information.

> ただこの情報を持って b/g が c/f につながっていると判断することは
> まだできません もっと多くの情報を集める必要があります

For each display, you watch the changing signals for a while,
make a note of all ten unique signal patterns you see,
and then write down a single four digit output value.

Using the signal patterns, you should be able to work out
which pattern corresponds to which digit.

For example, here is what you might see in a single entry in your notes:

```
acedgfb cdfbe gcdfa fbcad dab cefabd cdfgeb eafb cagedb ab |
cdfeb fcadb cdfeb cdbaf
```

(The entry is wrapped here to two lines so it fits;
in your notes, it will all be on a single line.)

Each entry consists of ten unique signal patterns,
a `|` delimiter, and finally the four digit output value.
Within an entry, the same wire/segment connections are used
(but you don't know what the connections actually are).

The unique signal patterns correspond to the ten different ways
the submarine tries to render a digit using the current wire/segment
connections. Because 7 is the only digit that uses three segments,
dab in the above example means that to render a 7, signal lines d, a,
and b are on.

Because 4 is the only digit that uses four segments,
eafb means that to render a 4, signal lines e, a, f, and b are on.

Using this information, you should be able to work out
which combination of signal wires corresponds to each of the ten digits.
Then, you can decode the four digit output value.
Unfortunately, in the above example, all of the digits in the output value
(cdfeb fcadb cdfeb cdbaf) use five segments
and are more difficult to deduce.

For now, focus on the easy digits. Consider this larger example:

```
be cfbegad cbdgef fgaecd cgeb fdcge agebfd fecdb fabcd edb |
fdgacbe cefdb cefbgd gcbe
edbfga begcd cbg gc gcadebf fbgde acbgfd abcde gfcbed gfec |
fcgedb cgb dgebacf gc
fgaebd cg bdaec gdafb agbcfd gdcbef bgcad gfac gcb cdgabef |
cg cg fdcagb cbg
fbegcd cbd adcefb dageb afcb bc aefdc ecdab fgdeca fcdbega |
efabcd cedba gadfec cb
aecbfdg fbg gf bafeg dbefa fcge gcbea fcaegb dgceab fcbdga |
gecf egdcabf bgf bfgea
fgeab ca afcebg bdacfeg cfaedg gcfdb baec bfadeg bafgc acf |
gebdcfa ecba ca fadegcb
dbcfg fgd bdegcaf fgec aegbdf ecdfab fbedc dacgb gdcebf gf |
cefg dcbef fcge gbcadfe
bdfegc cbegaf gecbf dfcage bdacg ed bedf ced adcbefg gebcd |
ed bcgafe cdgba cbgef
egadfb cdbfeg cegd fecab cgb gbdefca cg fgcdab egfdb bfceg |
gbdfcae bgc cg cgb
gcafb gcf dcaebfg ecagb gf abcdeg gaef cafbge fdbac fegbdc |
fgae cfgab fg bagce
```

Because the digits 1, 4, 7, and 8 each use a unique number of segments,
you should be able to tell which combinations of signals correspond
to those digits.

Counting only digits in the output values (the part after | on each line),
in the above example, there are 26 instances of digits
that use a unique number of segments (highlighted above).
