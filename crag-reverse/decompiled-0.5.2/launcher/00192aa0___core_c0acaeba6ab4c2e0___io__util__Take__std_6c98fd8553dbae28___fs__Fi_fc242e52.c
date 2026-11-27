// 00192aa0 <core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::
<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>
          (longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    lVar2 = param_2[2];
    param_2 = param_2 + 2;
    plVar4 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    goto LAB_00192c4e;
  }
  plVar7 = (longlong *)&DAT_00000020;
  if (plVar6 < &DAT_00000020) {
    plVar7 = plVar6;
  }
  plVar4 = plVar7;
  lVar2 = (*(code *)PTR_read_0021a288)();
  uVar8 = extraout_XMM0_Da;
  if (lVar2 == 1) {
    do {
      switch((uint)plVar4 & 3) {
      case 0:
        cVar1 = (char)plVar4[2];
        break;
      case 1:
        if (*(char *)((longlong)plVar4 + 0x1f) == '#') {
          (*(code *)PTR_drop_00219c58)();
          goto LAB_00192b2b;
        }
        goto LAB_00192c03;
      case 2:
        lVar2 = (*(code *)PTR_get_os_functions_0021a0e8)();
        cVar1 = (**(code **)(lVar2 + 0x10))();
        if (cVar1 == '\0') goto LAB_00192c03;
        goto LAB_00192b2b;
      case 3:
        cVar1 = (char)((ulonglong)plVar4 >> 0x20);
        if (0x2a < (ulonglong)plVar4 >> 0x20) {
          cVar1 = -1;
        }
      }
      if (cVar1 != '#') {
LAB_00192c03:
        uVar5 = 1;
        goto LAB_00192c56;
      }
LAB_00192b2b:
      plVar4 = plVar7;
      uVar3 = (*(code *)PTR_read_0021a288)();
      uVar8 = extraout_XMM0_Da_00;
    } while ((uVar3 & 1) != 0);
  }
  lVar2 = (longlong)plVar6 - (longlong)plVar4;
  if (plVar6 < plVar4) {
    (*(code *)PTR_panic_fmt_0021a010)
              (uVar8,&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00216070)
    ;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>(plVar4,0x45);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (&DAT_00000020 < plVar4) {
    (*(code *)PTR_slice_index_fail_00219d80)
              (&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00215fb8,0x20);
LAB_00192c21:
    uVar8 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar2,plVar4,1,1);
    lVar2 = plVar7[2];
    param_2 = plVar7;
  }
  else {
    lVar2 = param_2[2];
    plVar7 = param_2;
    if ((longlong *)(*param_2 - lVar2) < plVar4) goto LAB_00192c21;
  }
  param_2 = param_2 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    (*(code *)PTR_memcpy_00219c60)(uVar8,plVar4);
    plVar6 = plVar4;
  }
LAB_00192c4e:
  *param_2 = (longlong)((longlong)plVar4 + lVar2);
  uVar5 = 0;
  plVar4 = plVar6;
LAB_00192c56:
  auVar9._8_8_ = plVar4;
  auVar9._0_8_ = uVar5;
  return auVar9;
}


