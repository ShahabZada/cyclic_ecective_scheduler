#pragma once

/*
 * This file was generated using SimpleSMTScheduler (https://github.com/egk696/SimpleSMTScheduler)
 * Generated schedule based on task set defined in examples/example2.csv
 * Scheduled Task Set Utilization = 94.44444444444444 %
 */

#define NUM_OF_TASKS 4
#define HYPER_PERIOD 36

#define MAPPED_CORE_COUNT 1

#define T1_ID 0
#define T1_PERIOD 6
#define T2_ID 1
#define T2_PERIOD 9
#define T3_ID 2
#define T3_PERIOD 12
#define T3_ID 3
#define T3_PERIOD 18

char* tasks_names[NUM_OF_TASKS] = {"T1", "T2", "T3", "T3"};

unsigned tasks_per_cores[MAPPED_CORE_COUNT] = {4};

unsigned cores_hyperperiods[MAPPED_CORE_COUNT] = {36};

unsigned tasks_coreids[NUM_OF_TASKS] = {0, 0, 0, 0};

unsigned long long tasks_periods[NUM_OF_TASKS] = {T1_PERIOD, T2_PERIOD, T3_PERIOD, T3_PERIOD};

#define T1_INSTS_NUM 0
#define T2_INSTS_NUM 0
#define T3_INSTS_NUM 0
#define T3_INSTS_NUM 0

unsigned tasks_insts_counts[NUM_OF_TASKS] = {T1_INSTS_NUM, T2_INSTS_NUM, T3_INSTS_NUM, T3_INSTS_NUM};

unsigned long long T1_sched_insts[0] = {};
unsigned long long T2_sched_insts[0] = {};
unsigned long long T3_sched_insts[0] = {};
unsigned long long T3_sched_insts[0] = {};

unsigned long long *tasks_schedules[NUM_OF_TASKS] = {T1_sched_insts, T2_sched_insts, T3_sched_insts, T3_sched_insts};
