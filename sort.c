void sort(int n,int number[]){
    int a,i,j;
for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
        for(i=0;i<n;i++){
             printf( "%d\n", number[i]);
 }
    }