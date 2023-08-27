/*
 * File: 102-zombie.c
<<<<<<< HEAD
 * Auth: Ann
=======
 * Auth: Brennan D Baraban
>>>>>>> 95aa5e19388543bb7adc09c758d8f0a7367b10e1
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates five zombie processes.
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	pid_t child_pid;
=======
	pid_t pid;
>>>>>>> 95aa5e19388543bb7adc09c758d8f0a7367b10e1
	char count = 0;

	while (count < 5)
	{
<<<<<<< HEAD
		child_pid = fork();
		if (child_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", child_pid);
=======
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
>>>>>>> 95aa5e19388543bb7adc09c758d8f0a7367b10e1
			sleep(1);
			count++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
