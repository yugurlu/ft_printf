
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_numberlennn(unsigned int a)
{
	int	len;

	len = 0;
	while (a != 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_unsigned_ditoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_numberlennn(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int ft_printunsigned(unsigned int a)
{
	if (a == 0)
		return(ft_putchar('0'));
	return(ft_printstr(ft_uitoa(a)));
}
*/


int main()
{
	unsigned int a = -2;
	printf("%x\n", 121);
	printf("%x\n", 123);
	printf("%x\n", 124);
	printf("%x\n", 125);
	printf("%x\n", 126);
	printf("%X\n", 127);
	printf("%X\n", 128);
	printf("%x\n", 129);
	printf("%x\n", 130);
	printf("%x\n", 131);
	printf("%x\n", 132);

	//ft_printunsigned(a);
}
