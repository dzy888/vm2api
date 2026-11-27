// 000369a0 read_go_string

/* agy_bridge[64a9e9deac6c45ce]::read_go_string */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::read_go_string
          (longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int local_40;
  longlong local_30;
  
  if ((param_2 == 0 || param_4 <= param_3 - 1U) ||
     ((*(code *)PTR_from_utf8_000c3bd8)(), local_40 == 1)) {
    *param_1 = -1;
  }
  else {
    uVar2 = local_30 == 0;
    if (-1 < local_30) goto LAB_00036a04;
    do {
      uVar2 = 1;
      (*(code *)PTR_handle_error_000c3a98)();
LAB_00036a04:
      if ((bool)uVar2) {
        lVar1 = 1;
        goto LAB_00036a44;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar1 = (*(code *)PTR___rust_alloc_000c3a90)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_000c3aa8)();
LAB_00036a44:
    *param_1 = local_30;
    param_1[1] = lVar1;
    param_1[2] = local_30;
  }
  return;
}


