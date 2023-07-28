# cyclic_ecective_scheduler
Cyclic Executive Scheduling is a popular real-time scheduling technique used in embedded
systems. In this approach, the system's tasks are divided into fixed, predefined time slots or cycles,
and each task is assigned a specific slot within the cycle. The tasks are then executed in a repetitive
manner, following the assigned schedule.
1. Time Division: Cyclic Executive Scheduling divides time into fixed-size slots or cycles.
Each cycle consists of one or more time slots, and the length of each slot is typically
determined based on the requirements of the system and the tasks it needs to perform.
2. Task Assignment: Each task in the system is assigned a specific time slot within the cycle.
The assignment is based on the priority and timing constraints of the tasks. Higher priority
tasks are typically assigned shorter time slots to ensure timely execution.
3. Deterministic Execution: Cyclic Executive Scheduling follows a deterministic approach,
meaning that the execution of tasks is predictable and repeatable. Once the schedule is
defined, the system executes the tasks in the same order and for the same duration in each
cycle.
4. Fixed-Priority Scheduling: Cyclic Executive Scheduling often uses a fixed-priority
scheduling policy. Each task is assigned a priority level based on its importance or urgency.
During execution, the tasks are executed in a priority-based order, ensuring that higher
priority tasks are given precedence over lower priority ones.
5. Periodic Tasks: Cyclic Executive Scheduling is particularly useful for systems with
periodic tasks. Periodic tasks are tasks that repeat at regular intervals, such as sampling
sensor data or generating periodic output signals. By assigning dedicated time slots to these
tasks, Cyclic Executive Scheduling ensures that they are executed regularly and
predictably.
6. Determining Cycle Length: The cycle length is determined based on the worst-case
execution time of the tasks, their deadlines, and any other timing constraints. The cycle
length should be set to accommodate the longest task within the system.
7. Response Time Analysis: Cyclic Executive Scheduling allows for a straightforward
analysis of task response times. Since the execution order and timing of tasks are
deterministic, it becomes easier to calculate the maximum time taken by a task to respond
to an external event or input.
8. Trade-offs: While Cyclic Executive Scheduling provides deterministic behavior and
predictable response times, it may not be suitable for systems with a high degree of task
dynamism or where tasks have varying execution times. It works best for systems with
static task sets and well-defined timing requirements.
Overall, Cyclic Executive Scheduling is a widely used scheduling technique in embedded systems,
particularly in applications where predictability and determinism are crucial. By dividing time into
fixed cycles and assigning tasks to specific slots, it ensures that tasks are executed in a timely and
repeatable manner, making it suitable for real-time applications.

## Read the documentation for more details
