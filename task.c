

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
    """
    在下方编写你的代码
    """
    
    while(1)
    {
        P0=0xFE;//1111 1110
        Delay1ms(500);
        P0=0xFD;//1111 1101
        Delay1ms(500);
        P0=0xFB;//1111 1011
        Delay1ms(500);
        P0=0xF7;//1111 0111
        Delay1ms(500);
        P0=0xEF;//1110 1111
        Delay1ms(500);
        P0=0xDF;//1101 1111
        Delay1ms(500);
        P0=0xBF;//1011 1111
        Delay1ms(500);
        P0=0x7F;//0111 1111
        Delay1ms(500);
    }
 

    return 0;
}

