# Define the output files
KERNEL_BIN = kernel
ASM_OBJ = kasm.o
C_OBJ = kc.o

# Define the commands to be used
NASM = nasm
GCC = gcc
LD = ld

# Rule to create the kernel binary
$(KERNEL_BIN): $(ASM_OBJ) $(C_OBJ)
	$(LD) -m elf_i386 -T link.ld -o $(KERNEL_BIN) $(ASM_OBJ) $(C_OBJ)

# Rule to assemble the assembly file
$(ASM_OBJ): kernel.asm
	$(NASM) -f elf32 kernel.asm -o $(ASM_OBJ)

# Rule to compile the C file
$(C_OBJ): kernel.c
	$(GCC) -m32 -c kernel.c -o $(C_OBJ)

# Clean up the generated files
clean:
	rm -f $(KERNEL_BIN) $(ASM_OBJ) $(C_OBJ)
