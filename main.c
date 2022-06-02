#include <stdio.h>
#include <stdlib.h>
typedef enum{FALSE=0,TRUE=1} Boolean;

typedef struct list{
 int count;
 int ar[20];
}List;

void Creatlist(List *l){
 l->count=0;
}

Boolean ListFull(List *l){
  return (l->count=20);
}

Boolean ListEmpty(List *l){
 return (l->count==0);
}

void insertAt(List *l,int x,int p){
 if(ListFull(l)){
    printf("List is already full");
 }
 else if(p<0 && p>l->count){
    printf("You are going to insert an element in a wrong position");
 }else{
   for(int i=(l->count)-1;i>=p;i--){
    l->ar[i+1]=l->ar[i];
   }
   l->ar[p-1]=x;
   l->count++;
 }
}

void insertfront(List *l,int x){
  if(ListFull(l)){
    printf("List is already full");
 }
 else{
    for(i=l->count-1;i>=l->count;i--){
        l->ar[i+1]=l->ar[i];
    }
    l->ar[0]=x;
    l->count++;
 }
}
void insertrear(List *l,int x){
 if(ListFull(l)){
    printf("List is already full");
 }else{
   l->ar[l->count]=x;
   l->count++;
 }


}int removefront(List *l){
  int result;
  if(ListEmpty(l)){
    printf("List is Empty");
    exit(1);
  }
  result=l->ar[0];

  for(i=0; i<l->count;i++){
    l->ar[i]=l->ar[i+1];
  }
  l->count--;
  return result;
}

RemoveRear(List *l){
int result;
  if(ListEmpty(l)){
    printf("List is Empty");
    exit(1);
  }
  result=l->ar[(l->count)-1];
  l->count--;
  return result;
}

int removeAt(List *l,int p){
 int result;

 if(ListEmpty(l)){
    printf("List is Empty");
 }
 else if(p<0 || p>=l->count){
    printf("The position outside of the array");
 }else{
  result=l->ar[p-1];

  for(i=p-1;i<l->count;i++)
    l->ar[i]=l->ar[i+1];
  l->count--;
  return result;
 }
}

void replace(List *l,int p,int value){

}



