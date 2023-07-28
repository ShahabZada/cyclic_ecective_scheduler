#pragma once

/*
 * This file was generated using SimpleSMTScheduler (https://github.com/egk696/SimpleSMTScheduler)
 * Generated schedule based on task set defined in examples/demo_tasks.csv
 * Scheduled Task Set Utilization = 97.14285714285714 %
 */

#define NUM_OF_TASKS 2
#define HYPER_PERIOD 35

#define MAPPED_CORE_COUNT 1

#define T1_ID 0
#define T1_PERIOD 5
#define T2_ID 1
#define T2_PERIOD 7

char* tasks_names[NUM_OF_TASKS] = {"T1", "T2"};

unsigned tasks_per_cores[MAPPED_CORE_COUNT] = {2};

unsigned cores_hyperperiods[MAPPED_CORE_COUNT] = {35};

unsigned tasks_coreids[NUM_OF_TASKS] = {0, 0};

unsigned long long tasks_periods[NUM_OF_TASKS] = {T1_PERIOD, T2_PERIOD};

#define T1_INSTS_NUM 7
#define T2_INSTS_NUM 5

unsigned tasks_insts_counts[NUM_OF_TASKS] = {T1_INSTS_NUM, T2_INSTS_NUM};

unsigned long long T1_sched_insts[7] = {0, 6, 12, 15, 21, 27, 33};
unsigned long long T2_sched_insts[5] = {2, 8, 17, 23, 29};

unsigned long long *tasks_schedules[NUM_OF_TASKS] = {T1_sched_insts, T2_sched_insts};
