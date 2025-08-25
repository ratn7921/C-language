#include<stdio.h>
#include<stdlib.h>
struct myarray
{
   int total_Size;
   int used_Size;
   int*ptr;
};
void creatarr(struct myarray *a, int tSize, int uSize){
    a->total_Size = tSize;
    a->used_Size = uSize;
    a->ptr=(int *)malloc(tSize * sizeof(int));
}
void show(struct myarray*a){
    for(int i=0; i< a->used_Size; i++)
{
    printf("%d",(a->ptr)[i]);

}
}
void setval(struct myarray *a){

    int n;
    for(int i=0;i<a->used_Size; i++){
        printf("enter element %d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
            }}
int main(){
struct myarray marks;
creatarr(&marks,10,2);
printf("we are running now setval \n");
setval(&marks);
printf("we are running now show \n");
show(&marks);




    return 0;
}