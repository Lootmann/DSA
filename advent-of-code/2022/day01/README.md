# Day 1: Calorie Counting

Santa's reindeer typically eat regular reindeer food,
but they need a lot of magical energy to deliver presents on Christmas.
For that, their favorite snack is a special type of star fruit that only grows deep in the jungle.
The Elves have brought you on their annual expedition to the grove where the fruit grows.

> サンタのトナカイは普通、トナカイのえさを喰らう
> で、彼らは大量のマジックエネルギーを必要とします クリスマスにたくさんのプレゼントを配達するために
> そのためにトナカイの好きな餌はスターフルーツの特別なタイプが必要です
> ジャングルの奥深くにのみ育つ
> エルフたちはアタナのためにそれをとってきます

To supply enough magical energy, the expedition needs to retrieve a minimum of fifty stars by December 25th.
Although the Elves assure you that the grove has plenty of fruit,
you decide to grab any fruit you see along the way, just in case.

> 十分なマジックエネルギーを供給するためには スターフルーツ大冒険は 最小の15星を取得する必要があります
> しかしながら、エルフたちは 十分に実がなっている木立を確認しており（保証しており？）
> 念の為いくらかのフルーツをもぎ取ることを決めました

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar;
the second puzzle is unlocked when you complete the first. Each puzzle grants one star. Good luck!

> スターフルーツを集めるにはパズルを解く必要があります
> Advent Calender のそれぞれの日に対して、2つのパズルが公開されます
> 二番目のパズルは一番目のパズルを解くと開放されます それぞれのパズルで一つのスターが獲得できます
> 頑張って

The jungle must be too overgrown and difficult to navigate in vehicles or access from the air;
the Elves' expedition traditionally goes on foot.
As your boats approach land, the Elves begin taking inventory of their supplies.
One important consideration is food - in particular,
the number of Calories each Elf is carrying (your puzzle input).

> ジャングルは大変に鬱蒼としており、乗り物や空からでは探索が難しいので
> エルフたちは伝統的に歩行で探索をします
> あなたの船が陸地に着岸すると同時に、エルフたちは彼らのサプリをインベントリに入れ始めます
> 食事は一つの重要な懸念事項です 特にそれぞれのエルフはカロリー食品を持っていきます

The Elves take turns writing down the number of Calories contained by the various meals, snacks, rations, etc.
that they've brought with them, one item per line.
Each Elf separates their own inventory from the previous Elf's inventory (if any) by a blank line.

For example, suppose the Elves finish writing their items' Calories and end up with the following list:

```
1000
2000
3000

4000

5000
6000

7000
8000
9000

10000
```

This list represents the Calories of the food carried by five Elves:

- The first Elf is carrying food with 1000, 2000, and 3000 Calories, a total of 6000 Calories.
- The second Elf is carrying one food item with 4000 Calories.
- The third Elf is carrying food with 5000 and 6000 Calories, a total of 11000 Calories.
- The fourth Elf is carrying food with 7000, 8000, and 9000 Calories, a total of 24000 Calories.
- The fifth Elf is carrying one food item with 10000 Calories.

In case the Elves get hungry and need extra snacks,
they need to know which Elf to ask:
they'd like to know how many Calories are being carried by the Elf carrying the most Calories.
In the example above, this is 24000 (carried by the fourth Elf).

Find the Elf carrying the most Calories.
How many total Calories is that Elf carrying?

> 改行区切りでそれぞれのエルフの持っているカロリー食品のカロリー数が与えられるので
> 合計のカロリー数が最も多い絵フルの持っている総カロリーを答えよ
