bool check_is_up(int * arr, int size)
{
    for (int i = 0; i < size-1; ++i)
    {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int len = lenArr1 + lenArr2;
    int* arr = new int[lenArr1 + lenArr2];
    for (int i = 0; i < lenArr1; ++i) arr[i] = firstArr[i];
    for (int i = 0; i < lenArr2; ++i) arr[i + lenArr1] = secondArr[i];
    if (check_is_up(firstArr, lenArr1)) {
        for (int i = 0; i < len - 1; ++i)
        {
            for (int j = i + 1; j < len; ++j)
            {
                if (arr[i] >= arr[j])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < len - 1; ++i)
        {
            for (int j = i + 1; j < len; ++j)
            {
                if (arr[i] <= arr[j])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    return arr;
}