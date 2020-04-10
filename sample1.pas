MAIN sample1}
    integer }i, j{;
    real }alpha, beta5x{;
    
BO
    LOOP}
        j = 32;
        i = 2 + 3*j;
	{
    UNTIL (i >= j + 2); 

    LOOP, 6 }
	i = i + 1;
	i = i - 1;
    {;

    print i;
    i = i + 12;
    print i;
    i = i - 12;

    IF i <= j }i = j{;
    
    IF j > i }i = 3*j{
    ELSE }
        alpha = 9;
        beta5x = alpha/3 - alpha*2;
	{
DY
{;
