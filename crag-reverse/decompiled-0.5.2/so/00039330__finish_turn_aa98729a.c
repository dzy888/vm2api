// 00039330 finish_turn

/* <agy_bridge[64a9e9deac6c45ce]::PromptArena>::finish_turn */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::PromptArena>::finish_turn
          (longlong *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar6 = param_1[10];
    lVar1 = param_1[0xb];
    param_1[10] = 0;
    if (lVar6 != 0) {
      lVar2 = param_1[2];
      param_1[9] = param_1[9] + param_1[0xc];
      param_1[0xc] = 0;
      if (lVar2 == *param_1) {
        <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<str>>>::grow_one
                  (param_1);
      }
      lVar3 = param_1[1];
      param_4 = lVar2 * 0x10;
      *(longlong *)(lVar3 + param_4) = lVar6;
      *(longlong *)(lVar3 + 8 + param_4) = lVar1;
      param_1[2] = lVar2 + 1;
    }
  }
  if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  lVar6 = param_1[5];
  param_1[5] = 0;
  puVar4 = PTR___rust_dealloc_000c3aa0;
  if (lVar6 != 0) {
    plVar5 = (longlong *)(param_1[4] + 8);
    do {
      if (*plVar5 != 0) {
        (*(code *)puVar4)();
      }
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = param_1[8];
  param_1[8] = 0;
  puVar4 = PTR___rust_dealloc_000c3aa0;
  if (lVar6 != 0) {
    plVar5 = (longlong *)(param_1[7] + 8);
    do {
      if (*plVar5 != 0) {
        (*(code *)puVar4)();
      }
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_1[0xd] = 0;
  return;
}


