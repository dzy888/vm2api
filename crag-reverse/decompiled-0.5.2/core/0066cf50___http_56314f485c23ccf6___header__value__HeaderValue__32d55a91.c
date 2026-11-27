// 0066cf50 <http[56314f485c23ccf6]::header::value::HeaderValue>

/* http[56314f485c23ccf6]::header::map::append_value::<http[56314f485c23ccf6]::header::value::HeaderValue>
    */

void __rustcall
http[56314f485c23ccf6]::header::map::append_value::
<http[56314f485c23ccf6]::header::value::HeaderValue>
          (undefined8 param_1,int *param_2,ulonglong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*param_2 == 1) {
    uVar2 = *(ulonglong *)(param_2 + 4);
    uVar3 = param_3[2];
    uVar8 = *param_4;
    uVar9 = param_4[1];
    uVar4 = param_4[2];
    lVar5 = param_4[3];
    uVar6 = param_4[4];
    if (uVar3 == *param_3) {
      (*(code *)PTR_grow_one_0079a388)();
    }
    uVar7 = param_3[1];
    *(undefined8 *)(uVar7 + uVar3 * 0x48) = 1;
    *(ulonglong *)(uVar7 + 8 + uVar3 * 0x48) = uVar2;
    *(undefined8 *)(uVar7 + 0x10 + uVar3 * 0x48) = 0;
    *(undefined8 *)(uVar7 + 0x18 + uVar3 * 0x48) = param_1;
    puVar1 = (undefined8 *)(uVar7 + 0x20 + uVar3 * 0x48);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    *(undefined8 *)(uVar7 + 0x30 + uVar3 * 0x48) = uVar4;
    *(longlong *)(uVar7 + 0x38 + uVar3 * 0x48) = lVar5;
    *(undefined8 *)(uVar7 + 0x40 + uVar3 * 0x48) = uVar6;
    param_3[2] = uVar3 + 1;
    if (uVar3 < uVar2) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar3 * 9,
                 &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790a38);
      (**(code **)(lVar5 + 0x20))();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar7 = param_3[1];
    *(undefined8 *)(uVar7 + 0x10 + uVar2 * 0x48) = 1;
    *(ulonglong *)(uVar7 + 0x18 + uVar2 * 0x48) = uVar3;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulonglong *)(param_2 + 4) = uVar3;
  }
  else {
    uVar2 = param_3[2];
    uVar9 = *param_4;
    uVar10 = param_4[1];
    uVar4 = param_4[2];
    uVar6 = param_4[3];
    uVar8 = param_4[4];
    if (uVar2 == *param_3) {
      (*(code *)PTR_grow_one_0079a388)();
    }
    uVar3 = param_3[1];
    *(undefined8 *)(uVar3 + uVar2 * 0x48) = 0;
    *(undefined8 *)(uVar3 + 8 + uVar2 * 0x48) = param_1;
    *(undefined8 *)(uVar3 + 0x10 + uVar2 * 0x48) = 0;
    *(undefined8 *)(uVar3 + 0x18 + uVar2 * 0x48) = param_1;
    puVar1 = (undefined8 *)(uVar3 + 0x20 + uVar2 * 0x48);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    *(undefined8 *)(uVar3 + 0x30 + uVar2 * 0x48) = uVar4;
    *(undefined8 *)(uVar3 + 0x38 + uVar2 * 0x48) = uVar6;
    *(undefined8 *)(uVar3 + 0x40 + uVar2 * 0x48) = uVar8;
    param_3[2] = uVar2 + 1;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulonglong *)(param_2 + 2) = uVar2;
    *(ulonglong *)(param_2 + 4) = uVar2;
  }
  return;
}


