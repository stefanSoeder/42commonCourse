
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((start + len) > (ft_strlen(s)))
		len = ft_strlen(s + start);
	sub = malloc(sizeof (char) *(len + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i == (size_t)start)
		{
			while (j < len)
			{
				sub[j] = s[j + i];
				j++;
			}
			sub[j] = '\0';
		}
		i++;
	}
	return (sub);
}
