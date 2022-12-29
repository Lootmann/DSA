# Day 6: Tuning Trouble

The preparations are finally complete;
you and the Elves leave camp on foot and begin to make your way toward the star fruit grove.

> 事前準備は完成した
> あなたとエルフたちはキャンプをあとにし、スターフルーツの森へと進んでいくことになった

As you move through the dense undergrowth, one of the Elves gives you a handheld device.
He says that it has many fancy features,
but the most important one to set up right now is the communication system.

> 深い茂みを進んでいくと 一人のエルフがあなたに小型のデバイスを与えられました
> 彼はそのデバイスには色々と面白い機能があると言い
> 最も重要なものは 通信システムであるそうです

However, because he's heard you have significant experience dealing with signal-based systems,
he convinced the other Elves that it would be okay to give you their one malfunctioning device
`-` surely you'll have no problem fixing it.

> しかしながら 彼エルフは あなたが シグナルベースシステムで重要な商取引の経験を持っていると聞き
> 彼エルフは他のエルフを説得して、1つの故障した装置をあなたに渡しても良いと言いました
> きっとあなたなら問題なく直せるでしょう

As if inspired by comedic timing, the device emits a few colorful sparks.

> もし喜劇的なタイミングで, デバイスはカラフルなスパークが放出されます

To be able to communicate with the Elves, the device needs to lock on to their signal.
The signal is a series of seemingly-random characters that the device receives one at a time.

> エルフたちとの通信を可能にするように デバイスはそのシグナルにロックオンする必要がある
> シグナルは、一旦デバイスが信号を受け取ると、一見ランダムな文字列の羅列に見えます

To fix the communication system,
you need to add a subroutine to the device that detects a start-of-packet marker in the datastream.
In the protocol being used by the Elves,
the start of a packet is indicated by a sequence of four characters that are all different.

> 通信システムを復旧させるために
> デバイスのためのサブルーティンを追加する必要があります
> サブルーチンとは datastream 中に スタートパケットマーカーを検知する
> エルフたちの使っていたプロトコルは
> スタートのパケットは すべて異なっている4文字の文字列の羅列を指し締めてしている

The device will send your subroutine a datastream buffer (your puzzle input);
your subroutine needs to identify the first position
where the four most recently received characters were all different.
Specifically, it needs to report the number of characters from the beginning of the buffer
to the end of the first such four-character marker.

> サブルーチンは最初の位置の同定を必要とし
> 最も直近で受け取った、相異なる4つの文字列の位置です
> 具体的には、バッファの先頭から最初の4文字マーカの終わりまでの文字数を報告する必要がある


For example, suppose you receive the following datastream buffer:

> 例えば以下のような datastream buffer を受け取ったとしましょう

```
mjqjpqmgbljsphdztnvjfqwrcgsmlb
```

After the first three characters (`mjq`) have been received,
there haven't been enough characters received yet to find the marker.
The first time a marker could occur is after the fourth character is received,
making the most recent four characters `mjqj`. Because `j` is repeated, this isn't a marker.

> `mjq` を受け取った後
> それらは marker としては不十分です 4文字じゃないからね
> 最初のマーカーは よん文字目を受け取った後に発生します
> 直近の4文字は mjqj です j が繰り返されており マーカーにはなっていません

The first time a marker appears is after the `seventh` character arrives.
Once it does, the last four characters received are `jpqm`, which are all different.
In this case, your subroutine should report the value 7,
because the first start-of-packet marker is complete after 7 characters have been processed.

>    mjqjpqmgbljsphdztnvjfqwrcgsmlb
> 1: mjqjpqmgb...
> 2: jqjpqmgbl...
> 3: qjpqmgblj...
> 4: jpqmgbljs... ! これがマーカー直近の4文字が全て異なっているので
> mjqjpqmgb 最後の mは 7文字目なので マーカーのポジションは 7 です

Here are a few more examples:

- `bvwbjplbgvbhsrlpgdmjqwftvncz`: first marker after character 5
- `nppdvjthqldpwncqszvftbrmjlhg`: first marker after character 6
- `nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg`: first marker after character 10
- `zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw`: first marker after character 11

How many characters need to be processed before the first start-of-packet marker is detected?


## Part Two

Your device's communication system is correctly detecting packets, but still isn't working.
It looks like it also needs to look for messages.

A start-of-message marker is just like a start-of-packet marker,
except it consists of 14 distinct characters rather than 4.

Here are the first positions of start-of-message markers for all of the above examples:

- mjqjpqmgbljsphdztnvjfqwrcgsmlb: first marker after character 19
- bvwbjplbgvbhsrlpgdmjqwftvncz: first marker after character 23
- nppdvjthqldpwncqszvftbrmjlhg: first marker after character 23
- nznrnfrfntjfmvfwmzdfjlvtqnbhcprsg: first marker after character 29
- zcfzfwzzqfrljwzlrfnpqdbhtmscgvjw: first marker after character 26

How many characters need to be processed before the first start-of-message marker is detected?
