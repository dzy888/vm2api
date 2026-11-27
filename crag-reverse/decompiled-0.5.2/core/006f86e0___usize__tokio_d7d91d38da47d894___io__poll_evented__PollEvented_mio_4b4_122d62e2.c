// 006f86e0 <usize,<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>>::poll_write_vectored::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::poll_io::<usize,
   <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>>::poll_write_vectored::{closure#0}>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::poll_io::
<usize,<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>>::poll_write_vectored::_closure_0_>
          (longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  ushort uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  int *unaff_RBP;
  bool bVar12;
  undefined1 auVar13 [16];
  int *local_70;
  undefined8 local_68;
  uint local_5c;
  int *local_58;
  longlong local_50;
  undefined8 local_48;
  int *local_40;
  longlong local_38;
  
  lVar7 = *param_4;
  local_38 = param_4[1];
  local_40 = (int *)param_4[2];
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_50 = param_1;
  local_48 = param_2;
  (*(code *)PTR_poll_ready_0079a880)(param_3);
  if (local_68._2_1_ != -1) {
    local_58 = (int *)(lVar7 + 0x18);
    local_5c = param_3 & 0xff;
    do {
      piVar4 = local_70;
      if (local_68._2_1_ == '\x02') {
        uVar9 = 1;
        goto LAB_006f88b0;
      }
      if (*local_58 == -1) {
        (*(code *)PTR_unwrap_failed_00799278)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (&local_70,param_1);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      uVar5 = (ushort)local_68;
      piVar10 = local_40;
      local_70 = local_58;
      lVar7 = (*(code *)PTR_write_vectored_0079a970)();
      if (lVar7 != 1) {
        uVar9 = 0;
        goto LAB_006f88b3;
      }
      uVar11 = (uint)piVar10 & 3;
      switch(uVar11) {
      case 0:
        if ((char)piVar10[4] == '\r') goto LAB_006f882d;
        goto LAB_006f88c9;
      case 1:
        cVar6 = *(char *)((longlong)piVar10 + 0x1f);
        break;
      case 2:
        lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar6 = (**(code **)(lVar7 + 8))();
        break;
      case 3:
        cVar6 = (char)((ulonglong)piVar10 >> 0x20);
      }
      if (cVar6 != '\r') {
LAB_006f88c9:
        uVar9 = 1;
        goto LAB_006f88b3;
      }
LAB_006f882d:
      uVar8 = *(ulonglong *)(lVar3 + 0x90);
      unaff_RBP = (int *)((ulonglong)((uint)piVar4 & 0x33) ^ 0x8000003f);
      do {
        if (((uint)(uVar8 >> 0x10) & 0x7fff) != (uint)uVar5) break;
        puVar1 = (ulonglong *)(lVar3 + 0x90);
        LOCK();
        uVar2 = *puVar1;
        bVar12 = uVar8 == uVar2;
        if (bVar12) {
          *puVar1 = (ulonglong)((uint)uVar8 & (uint)unaff_RBP | (uVar5 & 0x7fff) << 0x10);
        }
        else {
          uVar8 = uVar2;
        }
        UNLOCK();
      } while (!bVar12);
      if ((1 < uVar11 - 2) && (((ulonglong)piVar10 & 3) != 0)) {
        local_68 = (longlong)piVar10 + -1;
        local_70 = (int *)CONCAT71(local_70._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      param_1 = local_50;
      (*(code *)PTR_poll_ready_0079a880)(local_5c,local_48);
    } while (local_68._2_1_ != -1);
  }
  uVar9 = 2;
  local_70 = unaff_RBP;
LAB_006f88b0:
  piVar10 = local_70;
LAB_006f88b3:
  auVar13._8_8_ = piVar10;
  auVar13._0_8_ = uVar9;
  return auVar13;
}


