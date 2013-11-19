i,n,v[100];main(){scanf("%d",&n);for(i;i<n;)scanf("%d",&v[i++]);while(!(--n<0))for(i=8;i;v[n]<<=1,v[n]+=1)i--;for(i=0;i<100;)printf("%d\n",v[i++]);}
