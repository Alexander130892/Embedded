
# Embedded Systems — Phase 1

Self-study roadmap: C foundations + bare-metal STM32.
~10 hrs/week over 12 weeks.

📋 [Study Tracker](./PHASE1_TRACKER.md)



## gpio_blink
Bare-metal LED blink and button read on NUCLEO-F446RE.
No HAL, no CMSIS. Direct register writes only.

PA5 → LD2 (LED)
PC13 → B1 (user button, active low)

Build: make
Flash: OpenOCD or ST-Link