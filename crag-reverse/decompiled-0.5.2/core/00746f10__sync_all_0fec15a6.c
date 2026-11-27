// 00746f10 sync_all

/* <std[6c98fd8553dbae28]::fs::File>::sync_all */

ulonglong __rustcall <std[6c98fd8553dbae28]::fs::File>::sync_all(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  puVar2 = PTR_get_os_functions_007992e0;
  puVar1 = PTR_OS_FUNCTIONS_007990a8;
  do {
    iVar4 = (*(code *)PTR_fsync_0079af18)();
    if (iVar4 != -1) {
      return 0;
    }
    piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar4 = *piVar5;
    if (*(undefined ***)puVar1 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar6 = (*(code *)puVar2)();
    cVar3 = (**(code **)(lVar6 + 0x10))();
  } while (cVar3 != '\0');
  return (longlong)iVar4 << 0x20 | 2;
}


