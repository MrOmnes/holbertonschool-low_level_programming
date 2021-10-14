void reverse_array(int *a, int n)
{
	long int str[n];
	int i = 0;

	for (i = 0; i < n; i++)
	{
		str[n - 1 - i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = str[i];
	}
}