// 000a6500 read

/* <std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Read>::read */

bool __rustcall <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Read>::read(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_read_000c3d20)();
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_000c3cf0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600)) {
    (*(code *)PTR_set_functions_inner_000c3d08)();
  }
  return lVar1 == -1;
}


