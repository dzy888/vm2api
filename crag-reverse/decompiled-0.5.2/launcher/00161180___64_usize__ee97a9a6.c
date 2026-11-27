// 00161180 <64:usize>

/* craggemini[b21da2d71f2da7a3]::license::decode::<64usize> */

undefined1 * __rustcall
craggemini[b21da2d71f2da7a3]::license::decode::<64:usize>
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 local_4d;
  undefined3 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uVar7 = base64[729f3f786a952ed7]::engine::Engine::decode::inner::
          <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                    (&local_48,"",param_2,param_3);
  lVar4 = CONCAT44(uStack_44,local_48);
  if (lVar4 != -1) {
    puVar5 = (undefined4 *)CONCAT44(uStack_3c,uStack_40);
    if (local_38 == 0x40) {
      uVar7 = *puVar5;
      uStack_4c = (undefined3)((uint)*(undefined4 *)((longlong)puVar5 + 3) >> 8);
      uVar1 = *(undefined8 *)((longlong)puVar5 + 7);
      uVar2 = *(undefined8 *)((longlong)puVar5 + 0xf);
      uVar3 = *(undefined8 *)((longlong)puVar5 + 0x17);
      local_28 = *(undefined1 *)((longlong)puVar5 + 0x3f);
      local_38 = *(undefined8 *)((longlong)puVar5 + 0x2f);
      uStack_30 = *(undefined8 *)((longlong)puVar5 + 0x37);
      local_48 = *(undefined4 *)((longlong)puVar5 + 0x1f);
      uStack_44 = *(undefined4 *)((longlong)puVar5 + 0x23);
      uStack_40 = *(undefined4 *)((longlong)puVar5 + 0x27);
      uStack_3c = *(undefined4 *)((longlong)puVar5 + 0x2b);
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(*(undefined4 *)((longlong)puVar5 + 3),1);
      }
      local_4d = (undefined1)((uint)uVar7 >> 0x18);
      *(uint *)(param_1 + 4) = CONCAT31(uStack_4c,local_4d);
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined8 *)(param_1 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_44,local_48);
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_3c,uStack_40);
      *(longlong *)(param_1 + 0x30) = local_38;
      *(undefined8 *)(param_1 + 0x38) = uStack_30;
      param_1[0x40] = local_28;
      uVar6 = 0;
      goto LAB_00161252;
    }
    if (lVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
    }
  }
  param_1[1] = 3;
  uVar6 = 1;
LAB_00161252:
  *param_1 = uVar6;
  return param_1;
}


