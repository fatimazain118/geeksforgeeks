int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int temp = a[i];

        while (temp > 0)
        {
            int r = temp % 10; //this gives rightmost element one by one
            temp /= 10;        //incrementing the temp
            ans = (ans * 10) + r;
        }
        if (ans != a[i])
            return 0;
    }
    return 1;
}
