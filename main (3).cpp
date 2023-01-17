#include<bits/stdc++.h>
using namespace std;
int **arr;

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}
void sort_column_wise(vector<vector<int>> &arr, int col)
{
    sort(arr.begin(), arr.end(), sortcol);
}

vector<vector<int>> create2D(int n,int m)
{
    srand(time(0));
    arr=new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           arr[i][j]=(rand()%100);
       }
   }
   vector<vector<int>> vect(n);
   for(int i=0;i<n;i++)
   {
       vect[i] = vector<int>(m);
       for(int j=0;j<m;j++)
       {
           vect[i][j]=(rand()%100);
       }
   }
   return vect;
}

int main()
{
    int no_of_rows,no_of_col;
    cin>>no_of_rows>>no_of_col;
    
    vector<vector<int>> arr(no_of_rows);
    for(int i=0;i<no_of_rows;i++)
    {
       arr[i] = vector<int>(no_of_col);
    }
    arr=create2D(no_of_rows,no_of_col);
    for(int i=0;i<no_of_rows;i++)
    {
        for(int j=0 ;j<no_of_col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int ind;
    cout<<"enter index for col"<<endl;
    cin>>ind;
    sort_column_wise(arr,ind);
    cout<<"array after sorting col wise"<<endl;
    for(int i=0;i<no_of_rows;i++)
    {
        for(int j=0 ;j<no_of_col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}