PEPE sample1;

    i, j as integer;
	alpha, beta5x as real;
	a, b, c, d, e, f as integer;
	g as real;
    
BO
    j = 32;
    beta5x = 12.0;
    
    PEPELOOP
    }
        i = 2 + 3*j;
	{
    TIMEPEPE (i < j + 2);
   
    CHECKPEPE (i <= j) 
    }
    	i = j;
    {;
    
    PEPEPRINT('i = %d\n', i);
    PEPEPRINT('Test\n');
    
    CHECKPEPE (j > i)
    }
    	i = 3*j;
    {
    ELSE 
    }
        alpha = 9.0;
        beta5x = alpha/3.0 - alpha*2.0;
	{;
	
	PEPEPRINT('i = %d\n', i);
	PEPEPRINT('beta5x = %f\n', beta5x);
	
	a = 2;
	b = 4;
	c = 8;
	d = 16;
	e = 32;
	f = a+c/b+d*e-a;
	PEPEPRINT('f = %d\n', f);
DY.
