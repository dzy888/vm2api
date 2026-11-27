// 005441d0 valid_vm_id

/* craggemini_core[66f3c71560d70857]::license::valid_vm_id */

bool __rustcall
craggemini_core[66f3c71560d70857]::license::valid_vm_id
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong extraout_RDX;
  
  if (0xff < param_2 - 1) {
    return false;
  }
  if (param_2 < 0x10) {
    uVar2 = 0;
    do {
      if (*(char *)(param_1 + uVar2) == '\0') {
        return false;
      }
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  else {
    lVar3 = (*(code *)PTR_memchr_aligned_00799490)(param_4,param_2);
    if (lVar3 == 1) {
      return false;
    }
  }
  ::<str>::trim_matches::<<char>::is_whitespace>(param_1,param_2);
  if (extraout_RDX == param_2) {
    iVar1 = (*(code *)PTR_bcmp_00799020)();
    return iVar1 == 0;
  }
  return false;
}


