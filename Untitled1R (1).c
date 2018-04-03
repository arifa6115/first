#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
    FILE *fp;
    char buf[1000];
    char split[5][20]={0};
    int i,j,k;
    fp = fopen("test.txt", "r");
    if (!fp)
        return 1;

    while (fgets(buf,1000, fp)!=NULL)
        		printf("%s",buf);
    fclose(fp);

    for(i=0;i<strlen(buf);i++){

        if(buf[i]==' '){
            if(buf[i+1]!=' '){
                split[k][j]='\0';
                j=0;
                k++;
            }
            continue;
        }
        else{
            split[k][j++]=buf[i];
        }
    }
    split[k][j]='\0';

    for(i=0;i<=k;i++){
        printf("%s\n",split[i]);
    }

    return 0;
}
