#include <cstdio>
#include <cstring>
using namespace std;
const int LEN_S = 1e6 + 1, LEN_T = 1e4 + 1;
char s[LEN_S], t[LEN_T];
int match[LEN_T];
int main()
{
	int q;
	for (scanf("%d", &q); q > 0; --q)
	{
		scanf("%s%s", &t, &s);
		int len_t = strlen(t), len_s = strlen(s), ans = 0;
		if (len_s < len_t)
		{
			printf("0\n");
			continue;
		}
		match[0] = 0; // Build the partial matching table
		for (int i = 1; i < len_t; ++i)
		{
			match[i] = match[i - 1];
			while (match[i] > 0 && t[i] != t[match[i]]) // If they are not matched, jump to the last match
				match[i] = match[match[i] - 1];
			if (t[i] == t[match[i]]) // If they are matched, add the matching value
				++match[i];
		}
		for (int i = 0, p = 0; i < len_s; ++i) // Scan the question string to find the model string, p is the position of the model string
		{
			while (i > p && s[i] != t[i - p]) // If they are not matched, jump to the last match
				p = i - match[i - 1 - p];
			if (s[i] == t[i - p] && i - p == len_t - 1) // The model string is found
			{
				++ans;
				p = i - match[i - p - 1];
			}
			if (s[i] != t[i - p]) // If the head is still unmatched, move the model string
				++p;
		}
		printf("%d\n", ans);
	}
	return 0;
}
