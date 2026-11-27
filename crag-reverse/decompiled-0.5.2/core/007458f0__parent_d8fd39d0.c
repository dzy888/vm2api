// 007458f0 parent

/* <std[6c98fd8553dbae28]::path::Path>::parent */

void __rustcall <std[6c98fd8553dbae28]::path::Path>::parent(void)

{
  char cVar1;
  byte local_80;
  
  (*(code *)PTR_next_back_0079a1d8)();
  if (local_80 != 0xff) {
    cVar1 = local_80 - 5;
    if (local_80 < 5) {
      cVar1 = '\0';
    }
    if ((byte)(cVar1 - 2U) < 3) {
      (*(code *)PTR_as_path_0079ac00)();
      return;
    }
  }
  return;
}


