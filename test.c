#include <stdio.h>
#include <string.h>
#include<malloc.h>
int main(int argc, char const *argv[])
{

    FILE *fp;
    int str = 0, word = 0, ch = 0;
	char *str2 = "-c";
	char *str3 = "-w";
	char *path = "./";
	char path2[20] = "";
	strcpy(path2,argv[2]);
	
	char *name = (char*)malloc(strlen(path) + strlen(path2));
	strcpy(name,path);
	strcat(name,path2);

    if ((fp = fopen(name, "r")) == NULL)
    {
        printf("can't open file");
        return 0;
    }
  	 

    ch = fgetc(fp);
    
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
