// 001da440 <std[6c98fd8553dbae28]::fs::File>

/* std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<std[6c98fd8553dbae28]::fs::File>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<std[6c98fd8553dbae28]::fs::File>
          (undefined8 param_1,longlong *param_2)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong unaff_RBX;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = 0;
  uVar11 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar3 = (*(code *)PTR_read_0021a0d8)(0,0x20);
  if (uVar3 == 0xffffffffffffffff) {
    piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
    puVar1 = PTR_read_0021a0d8;
    do {
      unaff_RBX = (longlong)*piVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      uVar3 = unaff_RBX << 0x20 | 2;
      lVar5 = (*(code *)PTR_get_os_functions_0021a0e8)();
      cVar2 = (**(code **)(lVar5 + 0x10))();
      if (cVar2 == '\0') {
        uVar6 = 1;
        goto LAB_001da4bd;
      }
      uVar3 = (*(code *)puVar1)(extraout_XMM0_Da_00,0x20);
    } while (uVar3 == 0xffffffffffffffff);
    uVar7 = extraout_XMM0_Da_01;
    if (0x20 < uVar3) goto LAB_001da571;
LAB_001da484:
    unaff_RBX = param_2[2];
    if ((ulonglong)(*param_2 - unaff_RBX) < uVar3) goto LAB_001da588;
    if (uVar3 == 0) goto LAB_001da4b3;
  }
  else {
    uVar7 = extraout_XMM0_Da;
    if (uVar3 < 0x21) goto LAB_001da484;
LAB_001da571:
    (*(code *)PTR_slice_index_fail_00219d80)
              (&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00217608,0x20);
LAB_001da588:
    uVar7 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>
                      (param_2,unaff_RBX,uVar3,1,1,in_R9,uVar6,uVar9,uVar10,uVar11);
    unaff_RBX = param_2[2];
  }
  (*(code *)PTR_memcpy_00219c60)(uVar7,uVar3);
LAB_001da4b3:
  param_2[2] = unaff_RBX + uVar3;
  uVar6 = 0;
LAB_001da4bd:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar6;
  return auVar8;
}


