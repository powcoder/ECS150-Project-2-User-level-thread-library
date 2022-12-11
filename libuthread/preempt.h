https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _PREEMPT_H
#define _PREEMPT_H

/*
 * preempt_start - Start thread preemption
 *
 * Configure a timer that must fire a virtual alarm at a frequency of 100 Hz and
 * setup a timer handler that forcefully yields the currently running thread.
 */
void preempt_start(void);

/*
 * preempt_enable - Enable preemption
 */
void preempt_enable(void);

/*
 * preempt_disable - Disable preemption
 */
void preempt_disable(void);

#endif /* _PREEMPT_H */
