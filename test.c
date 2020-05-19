#include <stdio.h>
int main(int argc, char const *argv[])
{

    FILE *fp;
    int line = 1, str = 0, word = 0, pu = 0, ch = 0;
	char *str2 = "-c";
	char *str3 = "-w";

    if ((fp = fopen("./test.txt", "r")) == NULL)
    {
        printf("can't open file");
        return 0;
    }

    ch = fgetc(fp);
    str++;
    while (ch != EOF)
    {
    
        if (ch == ' ' || ch == ',')
        {
            word++;
            
        }
        str++;
        ch = fgetc(fp);
    }
    word++;

    if(*(argv[1]+1) == 'c')
    {
        printf("×Ö·ûÊý£º%d",str);
    }
    else{
    	
    	printf("µ¥´ÊÊý£º%d",word);
	}
    fclose(fp);
  
    return 0;
}
