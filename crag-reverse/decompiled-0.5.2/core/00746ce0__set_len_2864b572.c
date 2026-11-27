// 00746ce0 set_len

/* WARNING: Switch with 1 destination removed at 0x00725724 */
/* WARNING: Switch with 1 destination removed at 0x00746d6b */
/* <std[6c98fd8553dbae28]::fs::File>::set_len */

ulonglong __rustcall
<std[6c98fd8553dbae28]::fs::File>::set_len
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  
  puVar2 = PTR_get_os_functions_007992e0;
  if (param_2 < 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined1 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    *puVar5 = 2;
    lVar8 = (*(code *)PTR_custom_owner_from_box_00799f90)(param_4,&DAT_00797398);
    return lVar8 + 1;
  }
  do {
    iVar4 = (*(code *)PTR_ftruncate64_0079af10)();
    if (iVar4 != -1) {
      return 0;
    }
    piVar7 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar4 = *piVar7;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar8 = (*(code *)puVar2)();
    cVar3 = (**(code **)(lVar8 + 0x10))();
  } while (cVar3 != '\0');
  return (longlong)iVar4 << 0x20 | 2;
}


