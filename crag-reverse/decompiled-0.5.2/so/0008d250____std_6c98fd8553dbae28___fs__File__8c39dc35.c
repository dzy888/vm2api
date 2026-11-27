// 0008d250 <&std[6c98fd8553dbae28]::fs::File>

/* std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<&std[6c98fd8553dbae28]::fs::File>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<&std[6c98fd8553dbae28]::fs::File>
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 in_R9;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = 0;
  uVar13 = 0;
  uVar7 = 0;
  uVar11 = 0;
  lVar8 = *param_1;
  uVar4 = (*(code *)PTR_read_000c3d20)(0,0x20);
  if (uVar4 == 0xffffffffffffffff) {
    piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    puVar2 = PTR_read_000c3d20;
    do {
      iVar1 = *piVar5;
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
      uVar4 = (longlong)iVar1 << 0x20 | 2;
      lVar6 = (*(code *)PTR_get_os_functions_000c3c18)();
      cVar3 = (**(code **)(lVar6 + 0x10))();
      if (cVar3 == '\0') {
        uVar7 = 1;
        goto LAB_0008d2cc;
      }
      uVar4 = (*(code *)puVar2)(extraout_XMM0_Da_00,0x20);
    } while (uVar4 == 0xffffffffffffffff);
    uVar9 = extraout_XMM0_Da_01;
    if (0x20 < uVar4) goto LAB_0008d381;
LAB_0008d297:
    lVar8 = param_2[2];
    if ((ulonglong)(*param_2 - lVar8) < uVar4) goto LAB_0008d398;
    if (uVar4 == 0) goto LAB_0008d2c3;
  }
  else {
    uVar9 = extraout_XMM0_Da;
    if (uVar4 < 0x21) goto LAB_0008d297;
LAB_0008d381:
    (*(code *)PTR_slice_index_fail_000c3bb0)
              (&PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c1660,0x20
              );
LAB_0008d398:
    uVar9 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>
                      (param_2,lVar8,uVar4,1,1,in_R9,uVar7,uVar11,uVar12,uVar13);
    lVar8 = param_2[2];
  }
  (*(code *)PTR_memcpy_000c3aa8)(uVar9,uVar4);
LAB_0008d2c3:
  param_2[2] = lVar8 + uVar4;
  uVar7 = 0;
LAB_0008d2cc:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar7;
  return auVar10;
}


