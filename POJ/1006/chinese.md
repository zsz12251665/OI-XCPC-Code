# POJ 1006

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-1006)
- [POJ](http://poj.org/problem?id=1006)

## 解法

To solve this problem, you need to know a little about the Chinese remainder theorem. It explains how to solve congruent equations. 

First of all, we need to find out the number-theoretic reciprocal of <data value="c{23}"></data>, <data value="c{28}"></data> and <data value="c{33}"></data> at first. They are <data value="c{6}"></data>, <data value="c{19}"></data> and <data value="c{2}"></data>. And then according to the Chinese remainder theorem, the day which is <data value="o{(}o{(}c{6}o{&times;}c{28}o{&times;}c{33}o{)}o{}v{p}o{+}o{(}c{23}o{&times;}c{19}o{&times;}c{33}o{)}o{}v{e}o{+}o{(}c{23}o{&times;}c{28}o{&times;}c{2}o{)}o{}v{i}o{)}"></data> days from the first day of the year must be a triple peak occurred day. And then we deduct the days that had passed, and take the remainder which is divided with <data value="c{23}o{&times;}c{28}o{&times;}c{33}"></data>, we'll get the next triple peak occurred day. So keep it in one, the answer is <data value="o{(}c{5544}o{}v{p}o{+}c{14421}o{}v{e}o{+}c{1288}o{}v{i}o{-}v{d}o{+}c{21252}o{-}c{1}o{)}o{mod}c{21252}o{+}c{1}"></data> (to add a <data value="c{21252}"></data> is to keep the answer greater than 0, to minus 1 and then plus 1 is to keep the answer in <data value="o{[}c{1}o{,}c{21252}o{]}"></data>). 

If you have problem with some the number-theoretic reciprocal, here may give you some reference: To a pair of <data value="o{(}v{a}o{,}v{n}o{)}o{(}v{a}o{,}v{m}o{&isin;}c{&#8469;}b{o{+}}o{)}"></data>, if there is an integer <data value="v{n}"></data> which satisfies <data value="v{a}o{}v{n}o{&equiv;}c{1}o{(}o{mod}v{m}o{)}"></data>, we call <data value="v{n}"></data> the number-theoretic reciprocal of <data value="o{(}v{a}o{,}v{m}o{)}"></data>. For example, because <data value="c{6}o{&times;}c{28}o{&times;}c{33}o{&equiv;}c{1}o{(}o{mod}c{23}o{)}"></data>, so <data value="c{6}"></data> is the number-theoretic reciprocal of <data value="o{(}c{28}o{&times;}c{33}o{,}c{23}o{)}"></data>. 

## 代码

- [正解](POJ.1006.0.cpp)