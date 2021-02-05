# HDU 2547

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2547)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2547)

## 解法

Similar to <a href="/codes/?oj=HDU&pid=2548">HDU 2548</a>, this problem is a mathematical problem too. <data value="o{f}o{(}v{x}o{,}v{y}o{,}v{m}o{,}v{n}o{)}o{=}o{&radic;}t{v{x}p{2}o{+}v{y}p{2}o{+}v{m}p{2}o{+}v{n}p{2}o{-}c{2}o{}v{m}o{}v{x}o{-}c{2}o{}v{n}o{}v{y}}o{=}o{&radic;}t{o{(}v{x}o{-}v{m}o{)}p{2}o{+}o{(}v{y}o{-}v{n}o{)}p{2}}"></data>, which refers to the distance between <data value="o{(}v{x}o{,}v{y}o{)}"></data> and <data value="o{(}v{m}o{,}v{n}o{)}"></data>. So when the hurt is reduced to minimum, the sum of the distances is reduced to minium too. It equals the distance between <data value="o{(}v{a}o{,}v{b}o{)}"></data> and <data value="o{(}v{c}o{,}v{d}o{)}"></data>, which will be <data value="o{&radic;}t{o{(}v{a}o{-}v{c}o{)}p{2}o{+}o{(}v{b}o{-}v{d}o{)}p{2}}"></data>. 

## 代码

- [正解](HDU.2547.0.cpp)