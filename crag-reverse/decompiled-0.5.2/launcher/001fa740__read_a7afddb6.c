// 001fa740 read

/* <std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Read>::read */

bool __rustcall <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Read>::read(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_read_0021a0d8)();
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_00219f18)(),
     *(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8)) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  return lVar1 == -1;
}


