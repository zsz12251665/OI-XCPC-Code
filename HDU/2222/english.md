# HDU 2222

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2222)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2222)

## Solution

This is a practice of <abbr title="Aho-Corasick Automaton algorithm">ACAM</abbr>, a string searching algorithm which is able to search multi model strings at the same time with the help of a trie. It uses the same way as <abbr title="Knuth-Morris-Pratt string searching algorithm">KMP</abbr> does.

As the first step, we put all the model strings in a trie so that we can jump to the specific character according to the character we scan. Just like I mentioned, ACAM runs as same as KMP. The next step is to calculate which character I should jump to when I find a character unmatched. So without any differences, but we use the model strings trie to replace the single model string so that it will looks like an edge. Let's call it the fail edge. At the same time, you should set up a last array to mark the last model string on the fail route (the route which jump according to the fail edge to the root) so that you can find the model string quickly. Then we scan the query string and move the pointer on the trie according to the character we read. When we reach to a point, we search matched model strings according to the last array. That's how ACAM works.

## Code

- [Solution](HDU.2222.0.cpp)
