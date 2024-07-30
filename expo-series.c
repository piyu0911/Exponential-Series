// e^x = 1 + x + x2/2! + x3/3! + ......
main()
{
    float term,sum = 0 ,x , nr = 1;
    int dr = 1 , i=1,n;
    clrscr();
    printf("Enter the values of x and n");
    scanf("%f %d",&x,&n);
    while(i<=n){
        term = nr / dr;
        sum = sum + term;
        nr = nr * x;
        dr = dr * 1;
        i = i+ 1;
    }
    printf("Expo = %f",sum);
    getch();
}
