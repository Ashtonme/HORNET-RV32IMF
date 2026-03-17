# 🐝 HORNET-RV32IMF: A High-Performance RISC-V SoC for Edge AI

**HORNET-RV32IMF** is an academic-grade, 5-stage pipelined RISC-V soft-core processor designed for high-efficiency floating-point arithmetic and Edge AI applications. It implements the **RV32IMF** Instruction Set Architecture (ISA) and is optimized for deployment on Xilinx FPGAs, specifically the Nexys-4-DDR.



---

## 👥 Contributors & Research

This project is the result of collaborative engineering at the **Istanbul Technical University (ITU)** and the **GSTL Lab**.

### 🎓 Academic Advisor & Principal Investigator
* **Prof. Dr. Sıddıka Berna Örs Yalçın** - [ITU Academic Profile](https://web.itu.edu.tr/~orssi/)

### 🏛️ Core Creators
* **Yavuz Selim Tozlu** - [GitHub](https://github.com/yavuz650)
* **Yasin Yılmaz** - [GitHub](https://github.com/yasinxyz)

### 📐 FPU Design & Implementation
* **Salih Daysal**
* **Mehmet Emin Tuzcu**

### 🧪 Verification & Organization
* **Deniz Zakir Eroglu** - [GitHub](https://github.com/dezariye)
* **Mete Kaan Özden**

* **Yusuf Tekin** - [GitHub](https://github.com/jsphtkn)

### ✏️ Organization
* **Deniz Zakir Eroglu** - [GitHub](https://github.com/dezariye)
* **Yusuf Tekin** - [GitHub](https://github.com/jsphtkn)

### 📎 Projects
* **Yusuf Tekin** & **Ahmet Tolga Özkan**- 
🔗 **[HORNET-RV32IMF-For-AI-Applications](https://github.com/GSTL-ITU/HORNET-RV32IMF-For-AI-Applications)**

### 📚 Academic Publications
The verification methodologies used in this core are detailed in the following symposium paper:
> D. Z. Eroglu, M. K. Ozden, B. Ors, “Creating Verification Environment Using RISCV-DV With Open and Closed Source Tools”, 9th International Symposium on Multidisciplinary Studies and Innovative Technologies (ISMSIT), 2025.

---

## ⚙️ Hardware Specifications

| Parameter | Specification |
| :--- | :--- |
| **ISA** | RV32IMF (Integer, Multiply/Divide, Single-Precision Floating Point) |
| **Pipeline** | 5-Stage In-Order |
| **FPU** | IEEE-754 Single-Precision Hardware Unit |
| **Max Frequency** | 26.25 MHz (Target: Nexys-4-DDR) |
| **Interconnect** | Wishbone B4 Compliant |
| **Peripherals** | UART (Interrupt-driven), GPIO, MTIME, Debug Interface |

---

## 🛠️ Toolchain & Setup

### **Software Requirements**
* **Toolchain:** `riscv32-unknown-elf-gcc` (RV32IMF / ILP32F)
* **Simulation:** Vivado Simulator / Verilator
* **Python:** 3.x (with `pyserial` for hardware-in-the-loop tests)

### **Hardware Requirements**
* **FPGA:** Nexys-4-DDR (Artix-7)
* **Vivado Version:** Verified on **Vivado 2025.2**

---

## 📂 Project Structure

* **`source/`**: RTL Verilog files for the core, FPU, and Wishbone peripherals.
* **`drivers/`**: Bare-metal C drivers for UART, GPIO, and Interrupt handling.
* **`test/`**: Comprehensive test suites including FPU arithmetic, Bubble Sort, and MLP Neural Network inference.
* **`rom_gen/`**: Custom tools to convert compiled binaries into FPGA-ready `.mem` files.

---

## 🚀 Quick Start

1.  **Generate Firmware:** Navigate to `test/gpio` or `test/uart-fpu-fpga` and run `make build`.
2.  **Synthesis:** Load the `source/` files into Vivado 2025.2. Ensure the generated `memory_init.mem` is linked to the BRAM initialization.
3.  **Deploy:** Program the Nexys-4-DDR and monitor the output via the USB-UART bridge (Baud: 115200).

---

## 👤 Contact & Support

For technical inquiries or bug reports, please open an issue in this repository or contact the organizers:
* **Yusuf Tekin:** [tekiny20@itu.edu.tr](mailto:tekiny20@itu.edu.tr) - [GitHub Profile](https://github.com/jsphtkn)
* **Deniz Zakir Eroglu:** [eroglud20@itu.edu.tr](mailto:eroglud20@itu.edu.tr) - [GitHub Profile](https://github.com/dezariye)

---
*Developed at Istanbul Technical University. 🐝*