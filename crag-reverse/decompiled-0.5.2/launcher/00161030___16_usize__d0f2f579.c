// 00161030 <16:usize>

/* craggemini[b21da2d71f2da7a3]::license::decode::<16usize> */

void __rustcall
craggemini[b21da2d71f2da7a3]::license::decode::<16:usize>
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong local_30;
  undefined8 *local_28;
  longlong local_20;
  
  base64[729f3f786a952ed7]::engine::Engine::decode::inner::
  <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>(&local_30,"",param_2,param_3);
  if (local_30 != -1) {
    if (local_20 == 0x10) {
      uVar1 = *local_28;
      uVar2 = local_28[1];
      if (local_30 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      *(undefined8 *)(param_1 + 1) = uVar1;
      *(undefined8 *)(param_1 + 9) = uVar2;
      uVar3 = 0;
      goto LAB_001610a4;
    }
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
  }
  param_1[1] = 3;
  uVar3 = 1;
LAB_001610a4:
  *param_1 = uVar3;
  return;
}


