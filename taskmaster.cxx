#include<stdio.h>
struct task{
    char name[50];
    char last_date[50];
    int is_completed;
};
void add_task(struct task tasks[],int *task_counts);
void mark_complete(struct task tasks[],int task_count);
void display_tasks(struct task tasks[],int task_count);

int main()
{
    struct task tasks[100];
    int task_count=0;
    int choice;
    char name[10];
    printf("enter your name(in capital):");
    scanf("%s",&name);
    do{
        printf("#########WELCOME##########\n");
        printf("*****************%s 's TASKMASTER*******************\n",name);
        printf("1. add tasks\n");
        printf("2. mark task completed\n");
        printf("3. display tasks\n");
        printf("4. EXIT\n");
        printf("**********************************\n");
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            add_task(tasks, &task_count);
            break;
            case 2:
            mark_complete(tasks,task_count);
            break;
            case 3:
            display_tasks(tasks,task_count);
            default:
            break;
            printf("\nERROR");
            break;
        }
    }
    while(choice!=4);
    return 0;
}
void add_task(struct task tasks[],int *task_count)
{
    if(*task_count<100)
    {
        printf("enter task name:");
        scanf("%s",tasks[*task_count].name);
        printf("\nenter due date:");
        scanf("%s",tasks[*task_count].last_date);
        tasks[*task_count].is_completed=0;
        (*task_count)++;
        printf("\ntask added successfully");
    }
    else{
        printf("\nunable to add more tasks ! task list is full");
    }
        
}
void mark_complete(struct task tasks[],int task_count)
{
    if(task_count>0){
        printf("tasks");
        display_tasks(tasks,task_count);
        int task_index;
        printf("enter the index of task to mark as complete:");
        scanf("%d",&task_index);
        if(task_index>=0 && task_index<task_count){
            tasks[task_index].is_completed=1;
            printf("task marked as complete");
        }
        else{
            printf("invalid task index\n");
        }
    }else{
            printf("No tasks available");
    }
            
}
void display_tasks(struct task tasks[],int task_count)
{
    int i;
    if(task_count>0){
        printf("%-30s%-20s%s\n","task_name","last_date","status");
        for(i=0;i<task_count;i++)
        {
            printf("%-30s%-20s%s",tasks[i].name,tasks[i].last_date,
       ( tasks[i].is_completed==1)?"completed":"incomplete");
        }
    }else{
        printf("No tasks available");
    }
}