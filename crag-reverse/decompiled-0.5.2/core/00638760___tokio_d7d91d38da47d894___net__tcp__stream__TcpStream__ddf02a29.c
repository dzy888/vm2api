// 00638760 <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>

/* <tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::poll_fill_buf::<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::poll_fill_buf::
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>(undefined8 *param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *unaff_RBP;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined1 local_40;
  longlong local_38;
  
  local_60 = *param_1;
  local_58 = param_1[1];
  uVar1 = param_1[3];
  local_48 = local_58;
  if (local_58 < uVar1) {
    uVar5 = 0x5d;
    (*(code *)PTR_panic_fmt_007991a8)(local_58,&PTR_s__vendor_tokio_1_54_1_src_io_util_0078f8a0);
LAB_006388ee:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_d3057478e380898db632effa827bd31f_622_llvm_2674179329317868992_0078f8b8);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
              (unaff_RBP,uVar5);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  unaff_RBP = &local_60;
  local_50 = uVar1;
  uVar3 = (*(code *)PTR_poll_read_00799788)();
  bVar7 = unaff_RBP == (undefined8 *)0x0;
  if ((uVar3 & 1) == 0 && !bVar7) {
    do {
      uVar6 = (uint)unaff_RBP & 3;
      switch(uVar6) {
      case 0:
        if (*(char *)(unaff_RBP + 2) == '#') goto LAB_0063887c;
        goto LAB_006387f6;
      case 1:
        cVar2 = *(char *)((longlong)unaff_RBP + 0x1f);
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar4 + 8))();
        break;
      case 3:
        cVar2 = (char)((ulonglong)unaff_RBP >> 0x20);
      }
      if (cVar2 != '#') goto LAB_006387f6;
LAB_0063887c:
      if ((1 < uVar6 - 2) && (((ulonglong)unaff_RBP & 3) != 0)) {
        local_38 = (longlong)unaff_RBP + -1;
        local_40 = 3;
        (*(code *)PTR_drop_00799040)();
      }
      unaff_RBP = &local_60;
      uVar3 = (*(code *)PTR_poll_read_00799788)();
      bVar7 = unaff_RBP == (undefined8 *)0x0;
    } while (((uVar3 & 1) == 0) && (unaff_RBP != (undefined8 *)0x0));
  }
  if ((~(byte)uVar3 & bVar7) != 0) {
    uVar5 = local_50;
    if (local_58 < local_50) goto LAB_006388ee;
    *(bool *)(param_1 + 5) = uVar1 == local_50;
    param_1[3] = local_50;
  }
LAB_006387f6:
  auVar8._8_8_ = unaff_RBP;
  auVar8._0_8_ = uVar3;
  return auVar8;
}


