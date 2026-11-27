// 0076ad62 push

/* <gimli[a7f20a324fd82d99]::read::abbrev::Attributes>::push */

void __rustcall
<gimli[a7f20a324fd82d99]::read::abbrev::Attributes>::push
          (undefined4 param_1,int *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  if (*param_2 == 1) {
    lVar4 = *(longlong *)(param_2 + 6);
    if (lVar4 == *(longlong *)(param_2 + 2)) {
      (*(code *)PTR_grow_one_0079b258)();
    }
    uVar2 = param_3[1];
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 4) + lVar4 * 0x10);
    *puVar3 = *param_3;
    puVar3[1] = uVar2;
    *(longlong *)(param_2 + 6) = lVar4 + 1;
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 2);
    if (uVar1 == 5) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 == (undefined8 *)0x0) {
        param_1 = (*(code *)PTR_handle_error_00798ff0)();
LAB_0076ae6a:
        uVar7 = (*(code *)PTR_panic_bounds_check_00799520)
                          (param_1,&PTR_s__rust_deps_gimli_0_32_3_src_read_007976a0);
        (*(code *)PTR_deallocate_0079b210)(uVar7,0x10);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      piVar5 = param_2 + 4;
      puVar6 = puVar3;
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *(undefined8 *)piVar5;
        piVar5 = piVar5 + 2;
        puVar6 = puVar6 + 1;
      }
      (*(code *)PTR_grow_one_0079b258)();
      uVar2 = param_3[1];
      puVar3[10] = *param_3;
      puVar3[0xb] = uVar2;
      param_2[0] = 1;
      param_2[1] = 0;
      param_2[6] = 6;
      param_2[7] = 0;
      *(ulonglong *)(param_2 + 2) = 5;
      *(undefined8 **)(param_2 + 4) = puVar3;
    }
    else {
      if (4 < uVar1) goto LAB_0076ae6a;
      uVar2 = param_3[1];
      *(undefined8 *)(param_2 + uVar1 * 4 + 4) = *param_3;
      *(undefined8 *)(param_2 + uVar1 * 4 + 4 + 2) = uVar2;
      *(ulonglong *)(param_2 + 2) = uVar1 + 1;
    }
  }
  return;
}


