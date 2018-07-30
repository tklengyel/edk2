In VS2015 command prompt or Linux

>D:\Project\LLVM\llvmVS2015\Debug\bin\clang.exe stack.c -fsanitize=address -g -fno-common
>D:\Project\LLVM\llvmVS2015\Debug\bin\clang.exe global.c -fsanitize=address -g -fno-common
>D:\Project\LLVM\llvmVS2015\Debug\bin\clang.exe heap.c -fsanitize=address -g -fno-common


>cl stack.c /GS /Gz /Gs /guard:cf
>cl global.c /GS /Gz /Gs /guard:cf
>cl heap.c /GS /Gz /Gs /guard:cf
