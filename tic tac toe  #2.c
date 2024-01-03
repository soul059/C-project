#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

void displayb(char ch[])
{
    printf("  %c   |  %c   |  %c  \n",ch[6],ch[7],ch[8]);
    printf("______|______|______\n");
    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c  \n",ch[3],ch[4],ch[5]);
    printf("______|______|______\n");
    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c  \n",ch[0],ch[1],ch[2]);
    printf("______|______|______\n");
    printf("      |      |      \n\n");

}
int chang(char x[],char c,int z);
int win(char x[]);

int main()
{

    int i,x,w;
    int count=1;
    char c;
    char ch[10] = {'1','2','3','4','5','6','7','8','9','\0'};
    displayb(ch);

    int j=0;
    while(ch[j] != '\0')
    {
        ch[j] = ' ';
        j++;
    }

    displayb(ch);

    for(i=1;i<=9;i++)
    {
        if(i%2 != 0)
        {
            printf("player 1 enter: ");
            scanf("%d",&x);
            c = 'O';
            if(chang(ch,c,x)) i--;
            displayb(ch);
            if(count >=5)
            {
                w = win(ch);
                
                
                if(w == 1)
                {
                    printf("player 1 wins\n");
                    break;
                }
                else if(w == 2)
                {
                    printf("player 2 wins\n");
                    break;
                }
                
                 
            }
        }
        else
        {
            printf("player 2 enter: ");
            scanf("%d",&x);
            c = 'X';
            if(chang(ch,c,x)) i--;
            displayb(ch);
            if(count >=5)
            {
                w = win(ch);
                
                
                if(w == 1)
                {
                    printf("player 1 wins\n");
                    break;
                }
                else if(w == 2)
                {
                    printf("player 2 wins\n");
                    break;
                }
                
                
            }
        }
        count++;
    }
    displayb(ch);
    w = win(ch);
    if(w)
    {
        if(w == 1)
        printf("player 1 wins\n");
        if(w==2)
        printf("player 2 wins\n");
    }
    else
    {
        printf("draw\n");
    }
    return 0;
}

int chang(char x[],char c,int z)
{
    if(z == 1)
    {
        if(x[0]!='O' || x[0] != 'X')
        x[0]=c;
        else return 1;
    }
    else if(z == 2)
    {
        if(x[1] != 'O' || x[1] != 'X')
        x[1] = c;
        else return 1;
    }
    else if(z == 3)
    {
        if(x[2] != 'O' || x[2] != 'X')
        x[2] = c;
        else return 1;
    }
    else if(z == 4)
    {
        if(x[3] != 'O' || x[3] != 'X')
        x[3] = c;
        else return 1;
    }
    else if(z == 5)
    {
        if(x[4] != 'O' || x[4] != 'X')
        x[4] = c;
        else return 1;
    }
    else if(z == 6)
    {
        if(x[5] != 'O' || x[5] != 'X')
        x[5] = c;
        else return 1;
    }
    else if(z == 7)
    {
        if(x[6] != 'O' || x[6] != 'X')
        x[6] = c;
        else return 1;
    }
    else if(z == 8)
    {
        if(x[7] != 'O' || x[7] != 'X')
        x[7] = c;
        else return 1;
    }
    else if(z == 9)
    {
        if(x[8] != 'O' || x[8] != 'X')
        x[8] = c;
        else return 1;
    }
    else{
        printf("INVALID INPUT\n");
        return 1;
    }
    return 0;
}

int win(char x[])
{
    if((x[6] == x[7] && x[6] == x[8]) || (x[6] == x[3] && x[6] == x[0]) || (x[6] == x[4] && x[6] == x[2]) ) 
    {
        if(x[6] != ' ')
        {
            if(x[6]=='O') return 1;
            else if(x[6]=='X') return 2;
        }
        
        
    }
    else if((x[2] == x[1] && x[2] == x[0]) || (x[2] == x[5] && x[2] == x[8]))
    {
        if(x[2] != ' ')
        {
            
            if(x[2]=='O') return 1;
            else if(x[2]=='X') return 2;
        }
    }
    else if((x[0] == x[4] && x[0] == x[8]))   
    {
       if(x[0] != ' ')
       {
            if(x[0] == 'O') return 1;
            else if(x[0] == 'X') return 2;
       }
    }
    else if((x[1] == x[4] && x[1] == x[7]))
    {
        if(x[1] != ' ')
       {
            if(x[1]=='O') return 1;
            else if(x[1] == 'X') return 2;
       }
    }
    else if((x[3] == x[4] && x[3] == x[5]))
    {
        if(x[3] != ' ')
       {
            if(x[3] == 'O') return 1;
            else if(x[3] == 'X') return 2;
       }
    }
    return 0;
}