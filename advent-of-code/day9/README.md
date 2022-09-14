# Day 9: Smoke Basin

## 1

These caves seem to be lava tubes.
Parts are even still volcanically active;
small hydrothermal vents release smoke into the caves
that slowly settles like rain.

> この洞窟は 溶岩チューブに見えます
> 部分は未だに溶岩もやもやアクティブですが
> 洞窟の中から小さな水熱のぽっこり穴から煙が出ています
> それは少しづつ放出して雨の様になっています

If you can model how the smoke flows through the caves,
you might be able to avoid it and be that much safer.

> どのようにして洞窟を通じて煙が流れていくかをモデル化できれば
> あなたはそのやばい煙を避けることができるより 安全な場所にいけるでしょう

The submarine generates a heightmap of the floor of the nearby caves
for you (your puzzle input).

> 潜水艦は 洞窟の近くにある床の 高さ MAP（？）を生成します

Smoke flows to the lowest point of the area it's in.
For example, consider the following heightmap:

> 煙はそのエリアの最も低い場所に流れていきます
> たとえば 高さ Map はこんな感じであると考えられます

```
2199943210
3987894921
9856789892
8767896789
9899965678
```

Each number corresponds to the height of a particular location,
where 9 is the highest and 0 is the lowest a location can be.

> それぞれの値は ある場所の高さに一致します
> 9 は最も高く、0 が最も引く場所という意味です

Your first goal is to find the low points
`-` the locations that are lower than any of its adjacent locations.

> あなたのゴールは最も低い点数を見つけることです
> ある場所は隣接した場所のいかなる場所よりも低い場所のことです

Most locations have four adjacent locations (up, down, left, and right);
locations on the edge or corner of the map have three
or two adjacent locations, respectively.
(Diagonal locations do not count as adjacent.)

> ほとんどの場所は 4 つの隣接箇所（上、下、左、右）があります
> エッジやコーナーは 3 つだったり 2 つだったりします
> 斜めの場所は”隣接”とカウントしません

In the above example, there are four low points,
all highlighted: two are in the first row (a 1 and a 0),
one is in the third row (a 5), and one is in the bottom row (also a 5).

> 上の例では 4 つの低いポイントがあります ハイライトされています
> Markdown だとハイライトできないけどね

All other locations on the heightmap have some lower adjacent location,
and so are not low points.

> 他のすべての場所は隣接点に、自分より低い場所があります

The risk level of a low point is 1 plus its height.
In the above example,
the risk levels of the low points are 2, 1, 6, and 6.
The sum of the risk levels of all low points in the heightmap is therefore 15.

> 引く点のリスクレベルを、自分の高さに+1 したものです
> 高さ Map のすべての低い点を合計します、したがって 15 ポイントです

Find all of the low points on your heightmap.
What is the sum of the risk levels of all low points on your heightmap?

> 問題
> 高さ Map のすべての点を探し出して 合計を出しましょう

## 2

Next, you need to find the largest basins
so you know what areas are most important to avoid.

> あなたは最も大きい窪地を探したいと思った
> 避けるために最も重要なエリアを知りたいです

A basin is all locations that eventually flow downward
to a single low point.

> 窪地は全部のロケーションです
> 最終的に最も低い場所に溜まっていきます

Therefore, every low point has a basin,
although some basins are very small.

> したがって すべての低い点が凹地になります
> ある窪地はとても小さいかもしれないが

Locations of height 9 do not count as being in any basin,
and all other locations will always be part of exactly one basin.

> 高さ 9 の場所は どの窪地にもカウントされません
> 他のすべての場所は窪地になりえます

The size of a basin is the number of locations within the basin,
including the low point. The example above has four basins.

> 窪地のサイズは 窪地の場所の数です 自分自身を含んで

The top-left basin, size 3:

```
2199943210
3987894921
9856789892
8767896789
9899965678
```

The top-right basin, size 9:

```
2199943210
3987894921
9856789892
8767896789
9899965678
```

The middle basin, size 14:

```
2199943210
3987894921
9856789892
8767896789
9899965678
```

The bottom-right basin, size 9:

```
2199943210
3987894921
9856789892
8767896789
9899965678
```

Find the three largest basins and multiply their sizes together.
In the above example, this is 9 _ 14 _ 9 = 1134.

> 窪地の中で最も大きいもの 3 つ選択して
> その掛け算で合計を算出します

What do you get if you multiply together
the sizes of the three largest basins?

> はいどうぞ
