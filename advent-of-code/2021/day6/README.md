# Day 6: Lanternfish

## 1

The sea floor is getting steeper. Maybe the sleigh keys got carried this way?
A massive school of glowing lanternfish swims past.
They must spawn quickly to reach such large numbers - maybe exponentially quickly?
You should model their growth rate to be sure.

> 海底はより急勾配になっていきます
> 光るランタンフィッシュの大群が泳いでいきます
> あいつらは素早くスポーン？する必要があります そのような大群へ成長するには
> 指数関数的に素早く？
> あなたはアイツラの成長率をモデル化する必要がある

Although you know nothing about this specific species of lanternfish,
you make some guesses about their attributes.

Surely, each lanternfish creates a new lanternfish once every 7 days.
However, this process isn't necessarily synchronized between every lanternfish

> ランタンフィッシュの特定の種について あなたは何もしらないが
> あなたは彼らの性質について考える必要があります
> 間違いなく いくつかのランタンフィッシュは一週間後に新しいランタンフィッシュを生成します
> しかしながらこの生成プロセスはあらゆるランタンフィッシュの間で同期している必要はありません

one lanternfish might have 2 days left until it creates another lanternfish, while another might have 4.
So, you can model each fish as a single number that represents the number of days
until it creates a new lanternfish.

> あるランタンフィッシュは 他のランタンフィッシュを生成するまで、2 日残っているかもしれず
> 他のランタンフィッシュは 4 日間残っているかもしれません
> なので それぞれのフィッシュを 一桁の数字として、それは日数を表しており
> 新しいランタンフィッシュを作るまでの、をモデル化してもらいます

Furthermore, you reason, a new lanternfish would surely need slightly longer
before it's capable of producing more lanternfish: two more days for its first cycle.
So, suppose you have a lanternfish with an internal timer value of 3:

> さらには 新しいランタンフィッシュは他の連中よりもちょっとだけ長く生きる
> 最初のサイクルより 2 日間長生きします
> 仮定しましょう 生命タイマーが 3 のランタンフィッシュを持っているとしましょ

- After one day, its internal timer would become 2.
- After another day, its internal timer would become 1.
- After another day, its internal timer would become 0.
- After another day, its internal timer would reset to 6,
  and it would create a new lanternfish with an internal timer of 8.

> 一日過ぎたら タイマーは 2
> 一日過ぎたら タイマーは 1
> 一日過ぎたら タイマーは 0
> 一日過ぎたら 内部タイマーは 6 になります
> そしてこいつは新しいランタンフィッシュを生成し、内部タイマーは 8 になります

- After another day, the first lanternfish would have an internal timer of 5,
  and the second lanternfish would have an internal timer of 7.

> 一日過ぎたら 最初のランタンフィッシュは内部タイマーは 5
> 次のランタンフィッシュの内部タイマーは 7 になっています

- A lanternfish that creates a new fish resets its timer to 6, not 7
  (because 0 is included as a valid timer value).
  The new lanternfish starts with an internal timer of 8
  and does not start counting down until the next day.

> 新しいフィッシュを生成したランタンフィッシュは（最初にいたランタンフィッシュ）
> タイマーは 6 にリセットされます、7 ではありません（0 はれっきとしたタイマーの値です）
> 新しいランタンフィッシュは内部タイマーは 8 で始まり
> 次の日になるまで カウントは始まりません
