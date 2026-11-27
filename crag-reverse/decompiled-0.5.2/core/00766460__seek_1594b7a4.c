// 00766460 seek

/* <std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Seek>::seek */

bool __rustcall
<std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Seek>::seek
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_lseek64_0079afc0)(param_4,*(undefined4 *)(&DAT_001c0e70 + param_2 * 4));
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_007990a0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return lVar1 == -1;
}


