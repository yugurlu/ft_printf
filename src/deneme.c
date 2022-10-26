



#include <stdio.h>


/*void yazdir(char c)
{
	printf("%c", c);
	if ()
	{
		printf("\n\n\n%%");
		printf("\n\ngirdi");
		return ;
	}
	printf("girmedi");
}

int main()
{
	char str[] = "mer%haba";
	//printf("%d\n\n", ft_strlen(str));
	//printf("%d\n\n\n", ft_strlen(str) - ft_strlen(ft_strchr(str,'%')));
	//write(1, ft_strchr(str,'%'), 5);
	char a;

	unsigned int z = -1;
	printf("\n\n%u\n\n", z);

	//a = (char)ft_strchr(str, '%');
	//yazdir(a);
	//write(1, &a, 5);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}


size_t	ft_int_len(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_int_to_asci(long nb, size_t count, int flag)
{
	int		s;
	int		i;
	char	*str;

	i = 0;
	s = 1;
	str = ft_calloc(count, sizeof(char));
	if (!str)
		return (0);
	if (flag == -1)
	{
		str[i] = '-';
		i++;
	}
	while (s <= nb / 10)
		s *= 10;
	while (s != 0)
	{
		str[i] = (nb / s % 10 + '0');
		s /= 10;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_int_len(nb) + 1;
	if (nb < 0)
	{
		len++;
		nb *= -1;
		return (ft_int_to_asci(nb, len, -1));
	}
	else if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
		str[1] = 0;
		return (str);
	}
	return (ft_int_to_asci(nb, len, 1));
}


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_num_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
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

int	ft_print_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_length += ft_printstr(num);
		free(num);
	}
	return (print_length);
}


int main()
{
	unsigned int a = -2;

	ft_print_unsigned(a);
}
