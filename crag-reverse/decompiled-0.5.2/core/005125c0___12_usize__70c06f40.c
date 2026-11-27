// 005125c0 <12:usize>

/* craggemini_core[66f3c71560d70857]::license::decode::<12usize> */

void __rustcall
craggemini_core[66f3c71560d70857]::license::decode::<12:usize>
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong local_30;
  undefined8 *local_28;
  longlong local_20;
  
  base64[729f3f786a952ed7]::engine::Engine::decode::inner::
  <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>(&local_30,"",param_2,param_3);
  if (local_30 != -1) {
    if (local_20 == 0xc) {
      uVar2 = *local_28;
      uVar1 = *(undefined4 *)(local_28 + 1);
      if (local_30 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined8 *)(param_1 + 1) = uVar2;
      *(undefined4 *)(param_1 + 9) = uVar1;
      uVar3 = 0;
      goto LAB_00512631;
    }
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  param_1[1] = 3;
  uVar3 = 1;
LAB_00512631:
  *param_1 = uVar3;
  return;
}


