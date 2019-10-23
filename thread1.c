#include<stdio.h>
#include<pthread.h>
int function(v)
{
	//printf("\n%d",a);
	printf("\nHello , I am in thread function");
}
/*struct vari
{
	int m,n;
}v;*/
int main()
{
	pthread_t th;
	struct vari v;
	v.v1=154,v.v2=150;
	pthread_create(&th,NULL,function,&v);
	pthread_join(th,NULL);
	printf("\nHello");
	printf("\nClass");
	printf("\nDone\n");
	return 0;
}
