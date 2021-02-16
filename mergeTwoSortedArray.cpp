#include<iostream>
using namespace std;

void mergeArrays(int a1[], int a2[], int n1,
                             int n2, int a3[])
{
    int i = 0, j = 0, k = 0;

    while (i<n1 && j <n2)
    {
        
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
 
    while (i < n1)
        a3[k++] = a1[i++];
 
    while (j < n2)
        a3[k++] = a2[j++];
}

int main()
{
    int a1[] = {1, 4, 7, 8};
    int n1 = sizeof(a1) / sizeof(a1[0]);
 
    int a2[] = {2, 3, 6, 9};
    int n2 = sizeof(a2) / sizeof(a2[0]);
 
    int a3[n1+n2];
    mergeArrays(a1, a2, n1, n2, a3);
 
    cout << "Merged Array" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << a3[i] << " ";
 
    return 0;
}

