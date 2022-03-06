~/wksp_efi/edk2$ git checkout sanitizer
~/wksp_efi/edk2$ build -p OvmfPkg/OvmfPkgIa32X64.dsc -t CLANGSAN40 -a IA32 -a X64 -b NOOPT -n 5 -DDEBUG_ON_SERIAL_PORT
~/wksp_efi/edk2$ cd Build/rootfs/
~/wksp_efi/edk2$ cp ../Ovmf3264/NOOPT_CLANGSAN40/X64/TestModuleDxe.efi .
~/wksp_efi/edk2/Build/rootfs$ sudo qemu-system-x86_64  -serial file:serial.txt -m 5120 -hda fat:. -monitor stdio --enable-kvm -smp 4 -bios ../Ovmf3264/NOOPT_CLANGSAN40/FV/OVMF.fd -global e1000.romfile="" -machine q35 -cpu SandyBridge,+rdrand
In qemu, boot into shell:
Shell> reconnect -r
Shell> fs0:
FS0:\> load TestModuleDxe.efi
~/wksp_efi/edk2/Build/rootfs$ cd ../..
~/wksp_efi/edk2$ python UbsanLogCheck.py Build/rootfs/serial.txt Build/Ovmf3264/NOOPT_CLANGSAN40/
Done!
~/wksp_efi/edk2$ cat Output.txt