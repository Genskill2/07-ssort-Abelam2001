int swap_max(int ar[], int l, int n){
int temp=ar[n];
int max=0;
for(int i=n;i<l;++i){
if(ar[i]<ar[i+1])
max=ar[i+1];
}
ar[n]=max;
return ar;
}
int ssort(int ar[],int l){
for(int i=0;i<l;++i){
swap_max(ar,l,i);
}
return ar;
}
