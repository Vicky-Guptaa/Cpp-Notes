    while((rs<=re)&&(cs<=ce))
    {
        for(int rows=rs;rows<=re;rows++)
        {
            cout<<arr[cs][rows]<<" ";
        }
        rs++;

        for(int column=cs;column<=ce;column++)
        {
            cout<<arr[column][re]<<" ";
        }
        ce--;

        for(int rows=re;rs>=rs;rows--)
        {
            cout<<arr[ce][rows]<<" ";
        }
        re--;

        for(int column=ce;column>=cs;column--)
        {
            cout<<arr[column][cs]<<" ";
        }
        cs++;
    }