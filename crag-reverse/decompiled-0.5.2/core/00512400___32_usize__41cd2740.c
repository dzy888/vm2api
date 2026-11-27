// 00512400 <32:usize>

/* craggemini_core[66f3c71560d70857]::license::decode::<32usize> */

void __rustcall
craggemini_core[66f3c71560d70857]::license::decode::<32:usize>
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  longlong local_30;
  
  base64[729f3f786a952ed7]::engine::Engine::decode::inner::
  <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>(&local_40,"",param_2,param_3);
  lVar4 = CONCAT44(uStack_3c,local_40);
  if (lVar4 == -1) {
    uVar6 = 1;
    uVar5 = 3;
    lVar7 = 1;
  }
  else if (local_30 == 0x20) {
    local_40 = *local_38;
    uStack_3c._0_3_ = (undefined3)((uint)*(undefined4 *)((longlong)local_38 + 3) >> 8);
    uVar1 = *(undefined8 *)((longlong)local_38 + 7);
    uVar2 = *(undefined8 *)((longlong)local_38 + 0xf);
    uVar3 = *(undefined8 *)((longlong)local_38 + 0x17);
    uVar5 = *(undefined1 *)((longlong)local_38 + 0x1f);
    if (lVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(*(undefined4 *)((longlong)local_38 + 3),1);
    }
    *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_3c,local_40._3_1_);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    lVar7 = 0x20;
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    uVar5 = 3;
    lVar7 = 1;
    if (lVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  param_1[lVar7] = uVar5;
  *param_1 = uVar6;
  return;
}


