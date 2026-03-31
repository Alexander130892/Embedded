# 🛠️ Embedded Systems — Phase 1 Study Tracker
**C Foundations + Bare-Metal STM32 | Months 1–3 | ~10 hrs/week**

> **Goal:** Get comfortable writing and debugging C on real hardware without IDE abstractions.
> **Strategy:** Solid C first (Weeks 1–5), then bare-metal STM32 (Weeks 6–12).

## 📅 Weekly Schedule

---

### 🔵 BLOCK 1 — C Foundations (Weeks 1–5)

---

#### Week 1 — Environment Setup + C Basics
> ~10 hrs | R1 Chapters 1–4, R4 R5 R6

**Setup tasks**
- [x] Install ARM GCC toolchain (R4) and verify with `arm-none-eabi-gcc --version`
- [x] Install OpenOCD (R5) and confirm it detects your STM32 board --> NEED STM Board --> Ordered
- [x] Set up GDB (R6) and step through a simple Hello World on host
- [x] Configure editor (VS Code recommended: C/C++ extension + Cortex-Debug)
- [x] Create GitHub repo `embedded-phase1` with initial README

**Study tasks**
- [x] R1 Ch.1 — An Overview of C: compilation model, first program
- [x] R1 Ch.2 — Lexical elements, operators, the C system
- [x] R1 Ch.3 — Fundamental data types: integers, chars, floats, type conversion
- [x] R1 Ch.4 — Flow of control: if/else, switch, for/while/do-while
- [x] Write 3 small programs: factorial (loop), FizzBuzz, simple calculator

> 🏁 **M1 checkpoint:** GCC, OpenOCD, and GDB all verified working.

---

#### Week 2 — Functions + Arrays
> ~10 hrs | R1 Chapters 5–6

- [x] R1 Ch.5 — Functions: prototypes, scope, call stack, recursion (draw it out)
- [x] R1 Ch.6 — Arrays, pointers, and strings: declaration, initialization, pointer decay
- [x] Exercise: implement `strlen`, `strcpy`, `memset`, EXTRA: strcat from scratch
- [x] EXTRA: NeuralNet -- map 2 inputs to 5 outputs (logic gates)
- [x] Commit all exercises to GitHub under `week02/`

---

#### Week 3 — Pointers + Bit Manipulation
> ~10 hrs | R1 Chapter 6 +7 (deep dive)

- [x] R1 Ch.6 — Revisit: pointer arithmetic, multi-dimensional arrays, pointers to pointers
- [x] R1 Ch.7 — Bitwise operators and enumerations: `&`, `|`, `^`, `~`, `<<`, `>>`
- [x] **R7 (Barr Group)** — Read sections on `stdint.h` fixed-width types (`uint8_t`, `uint32_t`, etc.) — these are ubiquitous in embedded C and not covered in Kelley & Pohl
- [x] GDB practice: set breakpoints, inspect variables, step through pointer code
- [x] Exercise: pack/unpack a sensor value into a byte using shifts and masks
- [x] Exercise: swap two integers using pointers, without a temp variable
- [x] Commit exercises to GitHub under `week03/`

---

#### Week 4 — Structs + Memory Lay-out
> ~10 hrs | R1 Chapters 8 + 9
- [x] R1 Ch.8 — The preprocessor: `#define`, `#include`, macros with arguments
- [x] R1 Ch.9 — Structures and list processing: declaration, nested structs, struct pointers
- [ ] Practice: set bit N, clear bit N, toggle bit N, read bit N — write macros
- [ ] Exercise: model a hardware register using a struct with bitfields
- [ ] Exercise: implement a simple stack (push/pop) using a fixed-size array + pointer
- [ ] Commit exercises to GitHub under `week04/`

---

#### Week 5 — C Consolidation + Toolchain Deep Dive
> ~10 hrs | R1 Ch.10 review + R7 
- [ ] R1 Ch.10 Draw memory layout diagrams: stack, heap, BSS, data, text segments
- [ ] Review any chapters that felt weak (common gaps: pointer-to-pointer, function pointers, `const` correctness)
- [ ] Study `volatile` keyword — why it matters in embedded C
- [ ] Study `static` — file scope vs function scope meanings
- [ ] Learn `Makefile` basics: targets, rules, variables, `$(CC)`, `$(CFLAGS)`
- [ ] Write a Makefile that compiles a multi-file C project on the host
- [ ] Complete one practice problem set from R2 (UT Austin exercises)

> 🏁 **M2 checkpoint:** C fundamentals solid. Can write, compile, and debug multi-file C projects from the command line.

---

### 🔴 BLOCK 2 — Bare-Metal STM32 (Weeks 6–12)

> From here: no HAL, no CubeMX. Register writes only. Reference: STM32 Reference Manual + R3.

---

#### Week 6 — STM32 Architecture + GPIO
> ~10 hrs | R3 Part I + STM32 Reference Manual (GPIO chapter)

- [ ] R3 Ch.1–2 — STM32 family overview, Cortex-M architecture basics
- [ ] Study the memory map: Flash, SRAM, peripheral base addresses
- [ ] Understand the RCC (Reset and Clock Control) peripheral — how to enable GPIO clocks
- [ ] Read the GPIO chapter of your board's Reference Manual
- [ ] Write bare-metal blink: enable RCC clock → configure MODER → toggle ODR
- [ ] No HAL, no CubeMX — hex values only, with comments explaining each register field
- [ ] Commit to `week06/gpio_blink/`

> 🏁 **M3 checkpoint:** LED blinking via direct register writes.

---

#### Week 7 — UART (Transmit)
> ~10 hrs | R3 UART chapter + Reference Manual USART section

- [ ] R3 UART chapter — understand baud rate formula, frame format, status flags
- [ ] Configure USART2 (or your board's default UART): enable RCC, set GPIO AF mode, configure BRR, CR1
- [ ] Implement `uart_send_char()` and `uart_send_string()` — polling, no interrupts yet
- [ ] Verify output with a serial terminal (minicom / PuTTY / screen)
- [ ] Commit to `week07/uart_tx/`

---

#### Week 8 — UART (Receive) + Command Parser Start
> ~10 hrs | Reference Manual + original code

- [ ] Implement `uart_receive_char()` — polling on RXNE flag
- [ ] Build a simple receive buffer (circular buffer or fixed array + index)
- [ ] Parse newline-terminated strings into a command + argument
- [ ] Commands to support: `led on`, `led off`, `status` (returns uptime or similar)
- [ ] Test interactively via serial terminal
- [ ] Commit to `week08/uart_rx/`

> 🏁 **M4 checkpoint:** UART TX and RX working; basic command echo functional.

---

#### Week 9 — Timers (Basic)
> ~10 hrs | R3 Timers chapter + Reference Manual TIM section

- [ ] R3 timers chapter — understand PSC (prescaler), ARR (auto-reload), CNT
- [ ] Configure TIM2 in up-counting mode to generate a 1 Hz tick
- [ ] Use timer compare (CCR) to generate a software delay without blocking loops
- [ ] Implement a `millis()` equivalent using the timer counter
- [ ] Replace `for`-loop delays in your blink code with timer-based delays
- [ ] Commit to `week09/timers_basic/`

---

#### Week 10 — Interrupts + NVIC
> ~10 hrs | R3 interrupts chapter + ARM Cortex-M PM0214

- [ ] Study the Cortex-M NVIC: interrupt enable, priority, pending registers
- [ ] Enable TIM2 update interrupt → toggle LED in ISR
- [ ] Enable EXTI interrupt on a button GPIO → debounce in ISR or main loop
- [ ] Study ISR best practices: keep ISRs short, use `volatile` flags, avoid blocking calls
- [ ] Refactor UART RX to use RXNE interrupt instead of polling
- [ ] Commit to `week10/interrupts/`

> 🏁 **M5 checkpoint:** Timer interrupt firing reliably; UART RX interrupt-driven.

---

#### Week 11 — PWM + Integration
> ~10 hrs | R3 PWM section + original code

- [ ] Configure a timer in PWM mode (TIM_OCMode_PWM1): set duty cycle via CCR
- [ ] Drive an LED with variable brightness (e.g. fade in/out)
- [ ] Integrate UART command parser: accept `pwm <0-100>` command to set duty cycle live
- [ ] Wire together blink, UART, timer, interrupt code into a single coherent project
- [ ] Refactor into clean modules: `gpio.c`, `uart.c`, `timer.c`, `main.c`
- [ ] Commit to `week11/pwm_integration/`

---

#### Week 12 — Deliverable + Documentation
> ~10 hrs | Polish, README, reflection

- [ ] Final integration test: all features working together on hardware
- [ ] Write `README.md` covering:
  - [ ] Project overview and feature list
  - [ ] Hardware setup (board, wiring diagram or description)
  - [ ] Build instructions (`make`, flash with OpenOCD)
  - [ ] Design decisions: why polling vs interrupts, buffer strategy, register choices
  - [ ] Lessons learned / what you'd do differently
- [ ] Add schematic or ASCII wiring diagram
- [ ] Tag the repo: `git tag v1.0-phase1`
- [ ] Review repo structure — clean up dead code, add comments where missing
- [ ] Write a short Phase 1 retrospective (add to README or a `NOTES.md`)

> 🏁 **M6 checkpoint:** GitHub repo published. Phase 1 complete. ✅

---

## 📊 Progress Summary

| Week | Topic | Status |
|------|-------|--------|
| 1 | Environment Setup + C Basics | ✅ Done |
| 2 | Functions + Arrays | ✅ Done |
| 3 | Pointers + Memory Layout | ✅ Done |
| 4 | Structs + Bit Manipulation | ⬜ Not started |
| 5 | C Consolidation + Toolchain | ⬜ Not started |
| 6 | STM32 Architecture + GPIO | ⬜ Not started |
| 7 | UART TX | ⬜ Not started |
| 8 | UART RX + Command Parser | ⬜ Not started |
| 9 | Timers | ⬜ Not started |
| 10 | Interrupts + NVIC | ⬜ Not started |
| 11 | PWM + Integration | ⬜ Not started |
| 12 | Deliverable + Docs | ⬜ Not started |

> Update statuses to: `🟡 In progress` → `✅ Done`


---

## 📦 Resources

| # | Resource | Format | Link |
|---|----------|--------|------|
| R1 | A Book on C: Programming in C | Book | Al Kelley & Ira Pohl — ISBN 978-0805316247 |
| R2 | Embedded Systems — Shape The World | Course | [edX / UT Austin (free audit)](https://www.edx.org/course/embedded-systems-shape-the-world-microcontroller-i) |
| R3 | Mastering STM32 | Book/PDF | [Leanpub (free PDF)](https://leanpub.com/mastering-stm32) |
| R4 | ARM GCC Toolchain | Tool | [developer.arm.com](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads) |
| R5 | OpenOCD | Tool | [openocd.org](https://openocd.org/) |
| R6 | GDB (arm-none-eabi-gdb) | Tool | Included with R4 |
| R7 | Embedded C Coding Standard | PDF | [Barr Group (free)](https://barrgroup.com/sites/default/files/barr_c_coding_standard_2018.pdf) — covers `stdint.h`, `volatile`, embedded conventions |

---

## 🏁 Milestone Overview

| Milestone | Target Week | Description |
|-----------|-------------|-------------|
| M1 | End of Week 2 | Dev environment fully set up (GCC, OpenOCD, GDB) |
| M2 | End of Week 5 | C fundamentals complete — mini quiz / practice problems done |
| M3 | End of Week 7 | First LED blink via bare-metal GPIO register write |
| M4 | End of Week 9 | UART TX/RX working without HAL |
| M5 | End of Week 11 | Timer interrupt firing reliably |
| **M6** | **End of Week 12** | **GitHub deliverable repo published with README** |

---

*Last updated: <!-- date -->*
