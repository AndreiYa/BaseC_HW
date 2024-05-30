int find_max_array(int size, int a[]);

int main(void)
{
    int arr[] = {1,5,6,8,9};
    find_max_array(5, arr);
    return 0;
}

int find_max_array(int size, int a[])
{
    int max=a[0];
    for(int i=0; i<size; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}