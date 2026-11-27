// 0047bda0 <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::
<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
          (longlong param_1,longlong *param_2)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_read_007999d0;
  uVar6 = *(ulonglong *)(param_1 + 8);
joined_r0x0047bdc7:
  do {
    if (uVar6 == 0) {
      param_1 = param_2[2];
      uVar6 = 0;
LAB_0047bebe:
      uVar3 = 0;
LAB_0047bec0:
      param_2[2] = uVar6 + param_1;
      uVar5 = 0;
      uVar6 = uVar3;
LAB_0047bf21:
      auVar8._8_8_ = uVar6;
      auVar8._0_8_ = uVar5;
      return auVar8;
    }
    if (0x1f < uVar6) {
      uVar6 = 0x20;
    }
    uVar3 = (*(code *)puVar1)();
    if ((uVar3 & 1) == 0) {
      if (*(ulonglong *)(param_1 + 8) < uVar6) {
        (*(code *)PTR_panic_fmt_007991a8)
                  (extraout_XMM0_Da,
                   &anon_30b5cef53457a6ea696e8d7e9f6273d6_719_llvm_8436237269785592069);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (uVar6,0x45);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) - uVar6;
      if (uVar6 < 0x21) {
        param_1 = param_2[2];
        uVar7 = extraout_XMM0_Da;
        if ((ulonglong)(*param_2 - param_1) < uVar6) goto LAB_0047bf4a;
      }
      else {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_0078ab80,
                   0x20);
LAB_0047bf4a:
        uVar7 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(param_2,param_1,uVar6,1,1);
        param_1 = param_2[2];
      }
      if (uVar6 == 0) goto LAB_0047bebe;
      (*(code *)PTR_memcpy_00799008)(uVar7,uVar6);
      uVar3 = uVar6;
      goto LAB_0047bec0;
    }
    switch((uint)uVar6 & 3) {
    case 0:
      cVar2 = *(char *)(uVar6 + 0x10);
      break;
    case 1:
      if (*(char *)(uVar6 + 0x1f) == '#') goto code_r0x0047be8a;
      goto LAB_0047bf1c;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar2 = (**(code **)(lVar4 + 0x10))();
      if (cVar2 == '\0') goto LAB_0047bf1c;
      goto LAB_0047be0b;
    case 3:
      uVar3 = uVar6 >> 0x20;
      if (0x2a < uVar3) {
        uVar3 = 0xff;
      }
      cVar2 = (char)uVar3;
    }
    if (cVar2 != '#') {
LAB_0047bf1c:
      uVar5 = 1;
      goto LAB_0047bf21;
    }
LAB_0047be0b:
    uVar6 = *(ulonglong *)(param_1 + 8);
  } while( true );
code_r0x0047be8a:
  (*(code *)PTR_drop_00799040)();
  uVar6 = *(ulonglong *)(param_1 + 8);
  goto joined_r0x0047bdc7;
}


