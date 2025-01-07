/*
** EPITECH PROJECT, 2024
** B-PSU-100-MPL-1-1-mytop-alexandre.grosse
** File description:
** test_top
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test (get_uptime, test_get_uptime)
{
    cr_assert_eq(get_uptime(), 0);
}

Test (display_time, test_display_time)
{
    cr_redirect_stdout();
    display_time();
    cr_assert_stdout_eq_str("00:00:00");
}

Test (display_boot_time, test_display_boot_time)
{
    cr_redirect_stdout();
    display_boot_time();
    cr_assert_stdout_eq_str("0 min");
}

Test (check_nelem, test_check_nelem)
{
    cr_assert_eq(check_nelem(0), -1);
    cr_assert_eq(check_nelem(4), -1);
    cr_assert_eq(check_nelem(2), 0);
}

Test (set_loadavg, test_set_loadavg)
{
    double loadavg[3] = {0, 0, 0};
    struct loadavg_struct loadavg_struct = {1, 2, 3};

    set_loadavg(loadavg, 3, &loadavg_struct);
    cr_assert_eq(loadavg[0], 1);
    cr_assert_eq(loadavg[1], 2);
    cr_assert_eq(loadavg[2], 3);
}

Test (my_getloadavg, test_my_getloadavg)
{
    double loadavg[3] = {0, 0, 0};

    cr_assert_eq(my_getloadavg(loadavg, 3), 3);
}

Test (get_cpu_task_run, test_get_cpu_task_run)
{
    cr_assert_eq(get_cpu_task_run(), 0);
}

Test (get_cpu_task_sleeping, test_get_cpu_task_sleeping)
{
    cr_assert_eq(get_cpu_task_sleeping(), 0);
}

Test (get_cpu_task_stopped, test_get_cpu_task_stopped)
{
    cr_assert_eq(get_cpu_task_stopped(), 0);
}

Test (get_cpu_task_zombies, test_get_cpu_task_zombies)
{
    get_cpu_task_zombies();
}

Test (get_cpu_usage, test_get_cpu_usage)
{
    get_cpu_usage();
}

Test (display_memory_info, test_display_memory_info)
{
    display_memory_info();
}

Test (head, test_head)
{
    head();
}

Test (task, test_task)
{
    task();
}
