// 006f7f10 <&std[6c98fd8553dbae28]::fs::File>

/* <tokio[d7d91d38da47d894]::io::blocking::Buf>::read_from::<&std[6c98fd8553dbae28]::fs::File> */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::io::blocking::Buf>::read_from::<&std[6c98fd8553dbae28]::fs::File>
          (char *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_R14;
  uint uVar6;
  ulonglong unaff_R15;
  undefined1 auVar7 [16];
  
  lVar4 = *(longlong *)((longlong)param_1 + 0x10);
  if (lVar4 == *(longlong *)((longlong)param_1 + 0x18)) {
    unaff_R15 = param_3;
    if (param_3 <= (ulonglong)(*(longlong *)param_1 - lVar4)) {
      if ((ulonglong)(*(longlong *)param_1 - lVar4) < param_3) goto LAB_006f80e3;
      goto LAB_006f7f47;
    }
  }
  else {
    param_1 = "assertion failed: self.is_empty()";
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_880d723ff0f66ce4ced63274bf095def_6_llvm_12887403613343987975);
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(param_1,lVar4,unaff_R15,1,1);
  unaff_R14 = (longlong *)param_1;
  if ((ulonglong)(*(longlong *)param_1 - *(longlong *)((longlong)param_1 + 0x10)) < unaff_R15) {
LAB_006f80e3:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_880d723ff0f66ce4ced63274bf095def_4_llvm_12887403613343987975);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<usize,core[c0acaeba6ab4c2e0]::io::error::Error>>
              (1,unaff_R14);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
LAB_006f7f47:
  uVar5 = unaff_R15;
  uVar3 = (*(code *)PTR_read_007999e0)();
  if (uVar3 == 1) {
    do {
      uVar6 = (uint)uVar5 & 3;
      switch(uVar6) {
      case 0:
        cVar2 = *(char *)(uVar5 + 0x10);
        break;
      case 1:
        cVar2 = *(char *)(uVar5 + 0x1f);
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar4 + 8))();
        break;
      case 3:
        cVar2 = (char)(uVar5 >> 0x20);
      }
      if (cVar2 != '#') {
        *(longlong *)((longlong)param_1 + 0x10) = 0;
        lVar4 = *(longlong *)((longlong)param_1 + 0x18);
        goto joined_r0x006f8071;
      }
      if ((1 < uVar6 - 2) && ((uVar5 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      uVar5 = unaff_R15;
      uVar3 = (*(code *)PTR_read_007999e0)();
    } while ((uVar3 & 1) != 0);
  }
  *(ulonglong *)((longlong)param_1 + 0x10) = uVar5;
  lVar4 = *(longlong *)((longlong)param_1 + 0x18);
joined_r0x006f8071:
  if (lVar4 != 0) {
    (*(code *)PTR_<usize,usize>_00799710)(0,"");
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar3;
  return auVar7;
}


