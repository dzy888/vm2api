// 00039490 alloc

/* WARNING: Switch with 1 destination removed at 0x0003950b */
/* <agy_bridge[64a9e9deac6c45ce]::PromptArena>::alloc */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::PromptArena>::alloc
          (undefined8 *param_1,ulonglong param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = param_3[2];
  lVar6 = uVar1 + *(longlong *)(param_2 + 0x68) + 0x10;
  if (0x4000000 < (ulonglong)(*(longlong *)(param_2 + 0x48) + lVar6 + *(longlong *)(param_2 + 0x60))
     ) {
    uVar4 = (*(code *)PTR_<&str>_000c3b30)(param_4,0x25);
    param_1[1] = uVar4;
    *param_1 = 1;
    if (*param_3 == 0) {
      return;
    }
    (*(code *)PTR_free_000c4290)();
    return;
  }
  uVar7 = *param_3;
  uVar5 = param_3[1];
  if (uVar1 < uVar7) {
    if (uVar1 != 0) {
      uVar5 = (*(code *)PTR___rust_realloc_000c3c40)(uVar1,1);
      if (uVar5 == 0) {
        (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      goto LAB_0003955f;
    }
    uVar5 = 1;
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
    *(longlong *)(param_2 + 0x68) = lVar6;
    lVar6 = *(longlong *)(param_2 + 0x28);
    if (lVar6 != *(longlong *)(param_2 + 0x18)) goto LAB_00039576;
  }
  else {
    uVar7 = param_2;
LAB_0003955f:
    *(longlong *)(param_2 + 0x68) = lVar6;
    lVar6 = *(longlong *)(param_2 + 0x28);
    if (lVar6 != *(longlong *)(param_2 + 0x18)) goto LAB_00039576;
  }
  <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<str>>>::grow_one
            (param_2 + 0x18,uVar7);
LAB_00039576:
  lVar2 = *(longlong *)(param_2 + 0x20);
  *(ulonglong *)(lVar2 + lVar6 * 0x10) = uVar5;
  *(ulonglong *)(lVar2 + 8 + lVar6 * 0x10) = uVar1;
  *(longlong *)(param_2 + 0x28) = lVar6 + 1;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  *param_1 = 0;
  return;
}


