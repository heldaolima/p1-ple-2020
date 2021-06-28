#include <stdio.h>

int main()
{
    int primeiro, segundo, terceiro;
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    if (-100 <= primeiro && -100 <= segundo && - 100 <= terceiro && primeiro <= 100 && segundo <= 100 && terceiro <= 100){
        if (segundo < primeiro && terceiro >= segundo){
            printf(":)\n");
    
        } else if ((primeiro < segundo && segundo < terceiro) && (terceiro - segundo >= segundo - primeiro)){
            printf(":)\n");
        
        } else if (segundo < primeiro && terceiro < segundo && segundo - terceiro < primeiro - segundo){
            printf(":)\n"); 
        
        } else if (primeiro == segundo && segundo < terceiro){
            printf(":)\n");
        } else{
            printf(":(\n");
        }
    }    
    
}