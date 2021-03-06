# CF 675B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-675B)
- [Luogu](https://www.luogu.com.cn/problem/CF675B)
- [Codeforces](https://codeforces.com/problemset/problem/675/B)

## Solution

This problem is interesting, but not difficult. First of all, there are only 4 squares <data value="c{2}o{&times;}c{2}"></data> which all of them has covered the cell at the center. So it doesn't matter whatever the number in this cell is. As a result, there are $n$ kinds of possible values at the center. Second, the four cells at the corner are just covered by one square <data value="c{2}o{&times;}c{2}"></data>. So when we add a number to anyone of them, we need to add the same number to the other three. That means there are <data value="o{(}v{n}o{-}v{k}o{)}"></data> kinds of possible values at the corners, which $k$ means the difference of the maximum one and the minimum one of the values at the corners in a valid square <data value="c{3}o{&times;}c{3}"></data>. We can infer that $k$ also equals the difference of the maximum value and the minimum value of <data value="v{a}o{+}v{b}"></data>, <data value="v{a}o{+}v{c}"></data>, <data value="v{b}o{+}v{d}"></data> and <data value="v{b}o{+}v{d}"></data>. Last of all, according to the rule of product, the number of distinct valid squares should be <data value="v{n}o{(}v{n}o{-}v{k}o{)}"></data>.

## Code

- [Solution](CF.675B.0.cpp)
