# Day 8: Treetop Tree House

The expedition comes across a peculiar patch of tall trees all planted carefully in a grid.
The Elves explain that a previous expedition planted these trees as a reforestation effort.
Now, they're curious if this would be a good location for a tree house.

First, determine whether there is enough tree cover here to keep a tree house hidden.
To do this, you need to count the number of trees that are visible from outside the grid
when looking directly along a row or column.

> まず木の家を隠すために必要な十分な木の範囲とはなにかを定義します
> これを行うために 木の数を数える必要がある グリッドの外側から見えている
>行と列に沿って直接見える（隣接している？）場所から

The Elves have already launched a quadcopter to generate a map with the height of each tree
(your puzzle input). For example:

```
30373
25512
65332
33549
35390
```

Each tree is represented as a single digit whose value is its height,
where 0 is the shortest and 9 is the tallest.

> それぞれの一桁の数字はそれぞれの木の高さを示しており
> 0 が最も低く、9が最も高いです

A tree is visible if all of the other trees between it and an edge of the grid are shorter than it.
Only consider trees in the same row or column;
that is, only look up, down, left, or right from any given tree.

> 木が見えているってのは 全ての他の樹木が 自分の木とグリッドのエッジまで比べる
> 同じ行列の場所に樹のみを考えます
> 上と下と右と下の場所です

All of the trees around the edge of the grid are visible - since they are already on the edge,
there are no trees to block the view.
In this example, that only leaves the interior nine trees to consider:

- The top-left `5` is visible from the left and top.
  (It isn't visible from the right or bottom since other trees of height 5 are in the way.)

- The top-middle `5` is visible from the top and right.

- The top-right `1` is not visible from any direction;
  for it to be visible, there would need to only be trees of height 0 between it and an edge.

- The left-middle `5` is visible, but only from the right.

- The center 3 is not visible from any direction;
  for it to be visible, there would need to be only trees of at most height 2 between it and an edge.

- The right-middle `3` is visible from the right.

- In the bottom row, the middle 5 is visible, but the 3 and 4 are not.

With 16 trees visible on the edge and another 5 visible in the interior,
a total of `21` trees are visible in this arrangement.

Consider your map; how many trees are visible from outside the grid?
