// 0057f490 poll_drain_or_close_read

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_drain_or_close_read */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_drain_or_close_read(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 local_e9;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  if (*(int *)(param_1 + 0x150) == 1) {
    uVar3 = *(ulonglong *)(param_1 + 0x158);
    lVar2 = 1;
    if (1 < uVar3) {
      lVar2 = uVar3 - 2;
    }
    uVar4 = (uint)uVar3;
    if (lVar2 == 0) {
      uVar5 = *(ulonglong *)(param_1 + 0x160);
      uVar3 = uVar5 & 0xffffffffffffff00;
      uVar6 = 2;
LAB_0057f5b5:
      uVar5 = uVar5 & 0xff | uVar3;
      if (uVar4 < 2) {
LAB_0057f5c2:
        if (*(longlong *)(param_1 + 0x188) != 0) goto LAB_0057f5d6;
      }
    }
    else {
      if (lVar2 != 1) {
        uVar5 = (ulonglong)*(byte *)(param_1 + 0x160);
        uVar6 = 4;
        uVar3 = 0;
        goto LAB_0057f5b5;
      }
      local_e9 = *(undefined1 *)(param_1 + 0x1b0);
      local_b8 = *(undefined4 *)(param_1 + 0x178);
      uStack_b4 = *(undefined4 *)(param_1 + 0x17c);
      uStack_b0 = *(undefined4 *)(param_1 + 0x180);
      uStack_ac = *(undefined4 *)(param_1 + 0x184);
      if (*(longlong *)(param_1 + 0x188) == 0) {
        local_e0 = *(undefined8 *)(param_1 + 0x1a8);
        uVar5 = *(ulonglong *)(param_1 + 0x160);
        uVar3 = *(ulonglong *)(param_1 + 0x168);
        uVar6 = (ulonglong)(uVar4 & 1);
        unaff_RBP = *(undefined8 *)(param_1 + 0x170);
        local_e8 = 0;
joined_r0x0057f613:
        if (1 < uVar4) goto LAB_0057f618;
        goto LAB_0057f5c2;
      }
      (*(code *)PTR_clone_00799df8)();
      local_e8 = local_90;
      local_d8 = local_88;
      uStack_d4 = uStack_84;
      uStack_d0 = uStack_80;
      uStack_cc = uStack_7c;
      local_c8 = local_78;
      local_e0 = *(undefined8 *)(param_1 + 0x1a8);
      uVar5 = *(ulonglong *)(param_1 + 0x160);
      uVar6 = (ulonglong)(uVar4 & 1);
      uVar3 = *(ulonglong *)(param_1 + 0x168);
      unaff_RBP = *(undefined8 *)(param_1 + 0x170);
      if (*(longlong *)(param_1 + 0x150) != 2) {
        if ((int)*(longlong *)(param_1 + 0x150) == 1) {
          uVar4 = (uint)*(undefined8 *)(param_1 + 0x158);
          goto joined_r0x0057f613;
        }
        goto LAB_0057f618;
      }
      if ((1 < *(uint *)(param_1 + 0x158)) || (*(longlong *)(param_1 + 0x188) == 0))
      goto LAB_0057f618;
LAB_0057f5d6:
      (*(code *)PTR_drop_007994e8)();
    }
LAB_0057f618:
    *(undefined8 *)(param_1 + 0x150) = 2;
    *(ulonglong *)(param_1 + 0x158) = uVar6;
    *(ulonglong *)(param_1 + 0x160) = uVar5;
    *(ulonglong *)(param_1 + 0x168) = uVar3;
    *(undefined8 *)(param_1 + 0x170) = unaff_RBP;
    *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_b4,local_b8);
    *(ulonglong *)(param_1 + 0x180) = CONCAT44(uStack_ac,uStack_b0);
    *(longlong *)(param_1 + 0x188) = local_e8;
    *(uint *)(param_1 + 400) = local_d8;
    *(undefined4 *)(param_1 + 0x194) = uStack_d4;
    *(undefined4 *)(param_1 + 0x198) = uStack_d0;
    *(undefined4 *)(param_1 + 0x19c) = uStack_cc;
    *(undefined8 *)(param_1 + 0x1a0) = local_c8;
    *(undefined8 *)(param_1 + 0x1a8) = local_e0;
    *(undefined1 *)(param_1 + 0x1b0) = local_e9;
  }
  uVar7 = poll_read_body(&local_90,param_1,param_2);
  if ((local_90 != 3) && (iVar1 = (int)local_90, iVar1 != -3)) {
    if (iVar1 == -2) {
      if ((1 < (local_88 & 3) - 2) && ((local_88 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
        lVar2 = *(longlong *)(param_1 + 0x150);
        goto joined_r0x0057f701;
      }
    }
    else {
      if (iVar1 == -1) {
        (**(code **)(CONCAT44(uStack_84,local_88) + 0x20))(uVar7,local_78);
        lVar2 = *(longlong *)(param_1 + 0x150);
        goto joined_r0x0057f701;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
                (&local_90);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x150);
joined_r0x0057f701:
  if ((lVar2 != 0) && ((int)lVar2 != 3)) {
    (*(code *)PTR_close_read_00799568)();
  }
  return;
}


