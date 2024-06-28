#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//포인터를 2차원 배열처럼 사용하려면 이중 포인터를 선언한 뒤 세로 공간 메모리를 할당하고, 반봅문으로 가로 공간 메모리를 할당해야 함
//헤제할 때는 가로 -> 세로 순서
 
int main()
{
    int m, n;
    int count = 0;
    scanf("%d %d", &n, &m);

    char **game = malloc(sizeof(int *) * m);

    for(int i = 0; i < m; i++)
    {
        game[i] = malloc(sizeof(int) * (n + 1));
        memset(game[i], 0, sizeof(int) * (n + 1));
    }

    for(int i = 0; i < m; i++)
    {
        scanf("%s", game[i]);
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(game[i][j] =='*')
            {
                printf("%c", game[i][j]);
                continue;
            }

            else
            {
                for(int y = i - 1; y <= i + 1; y++)
                {
                    for(int x = j - 1; x <= j + 1; x++)
                    {
                        if(y < 0 || x < 0 || y >= m || x >= n)
                            continue;
                        else if(game[y][x] == '*')
                        count += 1;
                    }
                }
                game[i][j] = count;
                printf("%d", game[i][j]);
                count = 0;
            }
        } 
        printf("\n");
    }

    for(int i = 0; i < m; i++)
    {
        free(game[i]);
    }

    free(game);

    return 0;
}