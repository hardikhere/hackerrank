void minimumBribes(vector<int> q) {
    
    int n = q.size();
    int cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(q[i] != (i + 1))
        {
            if(((i - 1) >= 0) && q[i - 1] == (i + 1))
            {
                cnt++;
                swap(q[i], q[i-1]);
            }
            else if(((i - 2) >= 0) && q[i - 2] == (i + 1))
            {
                cnt += 2;
                q[i - 2] = q[i - 1];
                q[i - 1] = q[i];
                q[i] = i + 1;
            }
            else
            {
                printf("Too chaotic\n");
                return;
            }
        }      
    }
    printf("%d\n",cnt);
    return;

}
