#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[size] != '\0')
		++size;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (size - 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
int	toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int main()
{
	int	c = '1';
	char str1[] = "1234567";
	char str2[] = "abcdef";
	char str3[] = "123";
	char str4[] = "456";


	//isalpha
	printf("isalpha:\n");
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));
	//isdigit
	printf("isdigit:\n");
	printf("%d\n", isdigit(c));
	printf("%d\n", ft_isdigit(c));
	//isalnum
	printf("isalnum:\n");
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	//isascii
	printf("isascii:\n");
	printf("%d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	//isprint
	printf("isprint:\n");
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	//strlen
	printf("strlen:\n");
	printf("%lu\n", strlen(str1));
	printf("%d\n", ft_strlen(str1));
	//memset
	printf("memset:\n");
	printf("%s\n", memset(str1, 'x', 3));
	printf("%s\n", memset(str1, 'x', 3));
	//bzero
	printf("bzero:\n");
	printf("%s\n", bzero(str2, (1)));
	printf("%s\n", bzero(str2, (1)));
	//memcpy
	// printf("memcpy:\n");
	// printf("%s\n", ft_memcpy(str3, str4, 1));
	//memmove
	printf("memmove:\n");
	printf("%s\n", ft_memmove(str3, str4, 4));
	
}
