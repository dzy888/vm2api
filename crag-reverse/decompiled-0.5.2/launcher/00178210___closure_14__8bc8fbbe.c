// 00178210 {closure#14}

/* craggemini[b21da2d71f2da7a3]::entry::{closure#14} */

void __rustcall
craggemini[b21da2d71f2da7a3]::entry::_closure_14_
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 7;
  lVar2 = (*(code *)PTR_index_into_00219dc0)(param_4,param_2);
  if (lVar2 != 0) {
    uVar5 = 6;
    pcVar3 = (char *)(*(code *)PTR_index_into_00219dc0)(param_4,lVar2);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
      lVar2 = *(longlong *)(pcVar3 + 0x18);
      if (lVar2 < 0) {
LAB_00178265:
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (lVar2 == 0) {
        lVar4 = 1;
      }
      else {
        uVar5 = *(undefined8 *)(pcVar3 + 0x10);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
        if (lVar4 == 0) goto LAB_00178265;
        (*(code *)PTR_memcpy_00219c60)(param_4,lVar2);
      }
      *param_1 = lVar2;
      param_1[1] = lVar4;
      param_1[2] = lVar2;
      goto LAB_0017827a;
    }
  }
  *param_1 = -1;
LAB_0017827a:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
            (param_2,uVar5);
  return;
}


