# HDU 2092

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2092)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2092)

## 解法

This problem is a mathematical problem. We can use the Vieta's formulas to solve the problem. 

According to the Vieta's formulas, if a quadratic equation which looks like <data value="v{x}p{2}o{-}v{p}o{}v{x}o{+}v{q}o{=}c{0}"></data> has two solutions of <data value="v{x}"></data>, which may be <data value="v{x}b{1}"></data> and <data value="v{x}b{2}"></data>, we'll have <data value="v{x}b{1}o{+}v{x}b{2}o{=}v{p}"></data> and <data value="v{x}b{1}o{}v{x}b{2}o{=}v{q}"></data>. So in the problem we're given <data value="v{p}"></data> and <data value="v{q}"></data>. According to the quadratic formula, a quadratic formula which looks like <data value="v{a}o{}v{x}p{2}o{+}v{b}o{}v{x}o{+}v{c}o{=}c{0}"></data> have two solutions of <data value="v{x}"></data>, they equal <data value="f{o{-}v{b}o{&plusmn;}o{&radic;}t{v{b}p{2}o{-}c{4}o{}v{a}o{}v{c}}l{}c{2}o{}v{a}}"></data>. That means a quadratic equation which looks like <data value="v{x}p{2}o{-}v{p}o{}v{x}o{+}v{q}o{=}c{0}"></data> with two solutions of <data value="v{x}"></data> will have the solutions <data value="f{v{p}o{&plusmn;}o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}l{}c{2}}"></data>. So we can know that if <data value="o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}"></data> is an integer, the two solutions will be integers too. You ask why? If <data value="v{p}"></data> is a odd number, <data value="o{(}v{p}p{2}o{-}c{4}o{}v{q}o{)}"></data> and <data value="o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}"></data> must be odd numbers too. So <data value="o{(}v{p}o{&plusmn;}o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}o{)}"></data> must be even numbers, and the solutions are integers. If <data value="v{p}"></data> is an even number, then <data value="o{(}v{p}p{2}o{-}c{4}o{}v{q}o{)}"></data>, <data value="o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}"></data>, <data value="o{(}v{p}o{&plusmn;}o{&radic;}t{v{p}p{2}o{-}c{4}o{}v{q}}o{)}"></data> must all be even numbers too. So the solutions are integers. In summary, we can solve the problem by judging if <data value="o{(}v{p}p{2}o{-}c{4}o{}v{q}o{)}"></data> is a square of an integer. 

## 代码

- [正解](HDU.2092.0.cpp)