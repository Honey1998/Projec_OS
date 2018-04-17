#include<stdlib.h>
#include<stdio.h>
int main()
{
	int Id[40],Burst_time[40], Priority[40], Waiting_time[40],Turn_around_time[40],a, b, n, Temp;
	float Average_waiting_time, Average_turn_around_time;
	printf("Enter the number of persons including (Student + teacher): ");
	scanf("%d",&n);
for(a=0;a<n;a++)
{
id[a] = a;
printf("Time taken by persons %d: ", a);
scanf("%d",&Burst_time[a]);
printf("Enter priority: Teacher/Student(0/1): ");
scanf("%d", &Priority[a]);
}

for(a=0;a<n;a++)
{
	for(b=a+1;b<n;b++)
	{
		if(Priority[a] > Priority[b])
		{
			Temp = Id[a];
	        Id[a] = Id[b];
			Id[b] = Temp;
	        Temp = Burst_time[a];
		    Burst_time[a] = Burst_time[b];
		    Burst_time [b] = Temp;
		    Temp = Priority[a];
		    Priority[a] = Priority[b];
	        Priority[b] = Temp;
		}
		Average_waiting_time = Waiting_time[0] = 0;
		Average_turn_around_time = Turn_around_time[0] = Burst_time[0];
		for(a=1;a<n;a++)
		{
			Waiting_time[a] = Waiting_time[a-1] + Burst_time[a-1];
			Turn_around_time[a] = Turn_around_time[a-1] + Burst_time[a];
			Average_waiting_time = Average_waiting_time + Waiting_time[a];
			Average_turn_around_time = Average_turn_around_time + Turn_around_time[a];
		}
	}
}
printf("\n Person \t Priority \t Allotted Time \t Waiting Time \t Turnaround Time ");
for(a=0;a<n;a++)
printf("\n %d \t\t %d \t\t %d \t\t %d \t\t %d ",Id[a],Priority[a],Burst_time[a], Waiting_time[a], Turn_around_time[a]);
printf("\n\n Average Waiting Time: %f",Average_waiting_time/n);
printf("\n Average Turnaround Time: %f",Average_turn_around_time/n);
getch();
}

