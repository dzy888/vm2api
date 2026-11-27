// 0075aa70 exists

/* std[6c98fd8553dbae28]::sys::fs::exists */

undefined2 * __rustcall std[6c98fd8553dbae28]::sys::fs::exists(undefined2 *param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int local_188;
  longlong local_180;
  longlong local_d8;
  longlong local_d0;
  
  (*(code *)PTR_metadata_00799308)();
  if (local_188 == 2) {
    uVar3 = (uint)local_180 & 3;
    switch(uVar3) {
    case 1:
switchD_0075aad0_caseD_1:
      cVar1 = *(char *)(local_180 + 0x1f);
      goto joined_r0x0075ab47;
    case 2:
switchD_0075aad0_caseD_2:
      lVar2 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar2 + 8))();
      goto joined_r0x0075ab47;
    case 3:
switchD_0075aad0_caseD_3:
      cVar1 = (char)((ulonglong)local_180 >> 0x20);
      goto joined_r0x0075ab47;
    }
  }
  else {
    (*(code *)PTR_memcpy_00799008)();
    if (local_d8 != 2) {
      *param_1 = 0x100;
      return param_1;
    }
    uVar3 = (uint)local_d0 & 3;
    local_180 = local_d0;
    switch(uVar3) {
    case 1:
      goto switchD_0075aad0_caseD_1;
    case 2:
      goto switchD_0075aad0_caseD_2;
    case 3:
      goto switchD_0075aad0_caseD_3;
    }
  }
  cVar1 = *(char *)(local_180 + 0x10);
joined_r0x0075ab47:
  if (cVar1 == '\0') {
    *param_1 = 0;
    if ((1 < uVar3 - 2) && (uVar3 != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    *(longlong *)(param_1 + 4) = local_180;
    *(undefined1 *)param_1 = 1;
  }
  return param_1;
}


