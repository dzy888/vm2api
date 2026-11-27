// 001926a0 <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>

/* std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
    */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::default_read_to_end::small_probe_read::
<core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
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
  
  puVar1 = PTR_read_0021a278;
  uVar6 = *(ulonglong *)(param_1 + 8);
joined_r0x001926c7:
  do {
    if (uVar6 == 0) {
      param_1 = param_2[2];
      uVar6 = 0;
LAB_001927ae:
      uVar3 = 0;
LAB_001927b0:
      param_2[2] = uVar6 + param_1;
      uVar5 = 0;
      uVar6 = uVar3;
LAB_00192811:
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
        (*(code *)PTR_panic_fmt_0021a010)
                  (extraout_XMM0_Da,
                   &PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00216070);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (uVar6,0x45);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) - uVar6;
      if (uVar6 < 0x21) {
        param_1 = param_2[2];
        uVar7 = extraout_XMM0_Da;
        if ((ulonglong)(*param_2 - param_1) < uVar6) goto LAB_0019283a;
      }
      else {
        (*(code *)PTR_slice_index_fail_00219d80)
                  (&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00215fb8,
                   0x20);
LAB_0019283a:
        uVar7 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(param_2,param_1,uVar6,1,1);
        param_1 = param_2[2];
      }
      if (uVar6 == 0) goto LAB_001927ae;
      (*(code *)PTR_memcpy_00219c60)(uVar7,uVar6);
      uVar3 = uVar6;
      goto LAB_001927b0;
    }
    switch((uint)uVar6 & 3) {
    case 0:
      cVar2 = *(char *)(uVar6 + 0x10);
      break;
    case 1:
      if (*(char *)(uVar6 + 0x1f) == '#') goto code_r0x0019277a;
      goto LAB_0019280c;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_0021a0e8)();
      cVar2 = (**(code **)(lVar4 + 0x10))();
      if (cVar2 == '\0') goto LAB_0019280c;
      goto LAB_0019270b;
    case 3:
      uVar3 = uVar6 >> 0x20;
      if (0x2a < uVar3) {
        uVar3 = 0xff;
      }
      cVar2 = (char)uVar3;
    }
    if (cVar2 != '#') {
LAB_0019280c:
      uVar5 = 1;
      goto LAB_00192811;
    }
LAB_0019270b:
    uVar6 = *(ulonglong *)(param_1 + 8);
  } while( true );
code_r0x0019277a:
  (*(code *)PTR_drop_00219c58)();
  uVar6 = *(ulonglong *)(param_1 + 8);
  goto joined_r0x001926c7;
}


