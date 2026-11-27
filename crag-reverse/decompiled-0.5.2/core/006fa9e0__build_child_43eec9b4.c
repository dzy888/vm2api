// 006fa9e0 build_child

/* tokio[d7d91d38da47d894]::process::imp::build_child */

longlong * __rustcall
tokio[d7d91d38da47d894]::process::imp::build_child(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  uint extraout_EDX;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong unaff_R15;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  int iStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  ulonglong uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar6 = param_2[2];
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  lVar8 = 2;
  if ((int)lVar6 == -1) {
    lVar6 = 2;
  }
  else {
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
    (*(code *)PTR_try_from_0079a990)();
    local_108 = (uint)local_b8;
    uStack_104 = local_b8._4_4_;
    uStack_100 = (undefined4)uStack_b0;
    uStack_fc = uStack_b0._4_4_;
    if (local_c8 == 2) {
      param_1[1] = uStack_c0;
      *param_1 = -1;
      goto LAB_006faeed;
    }
    local_128 = local_b8;
    uStack_120 = uStack_b0;
    in_RAX = uStack_c0;
    lVar6 = local_c8;
  }
  local_138 = (int)local_128;
  uStack_134 = local_128._4_4_;
  iStack_130 = (int)uStack_120;
  uStack_12c = uStack_120._4_4_;
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  local_148 = lVar6;
  uStack_140 = in_RAX;
  if (iVar1 != -1) {
    uVar4 = (*(code *)PTR_from_0079a998)();
    auVar10 = set_nonblocking::<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>(uVar4);
    uVar7 = auVar10._8_8_;
    uVar9 = auVar10._0_8_;
    if (uVar9 == 0) {
      uVar5 = (*(code *)PTR_current_00799480)();
      local_108 = uVar4;
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::
      new_with_interest_and_handle::<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>
                (&local_c8,&local_108,1,uVar5,uVar7,
                 &anon_4a510ad2c2ece6409108a5920cec5cc2_34_llvm_1700297362806677381);
      uVar9 = uStack_c0;
      if (local_c8 != 2) {
        in_RAX = (ulonglong)local_108;
        lVar6 = local_b8;
        lVar8 = local_c8;
        unaff_R15 = uStack_c0;
        param_3 = extraout_EDX;
        goto LAB_006fab47;
      }
    }
    (*(code *)PTR_close_00799030)();
    param_1[1] = uVar9;
    *param_1 = -1;
    if ((int)local_148 != 2) {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_148);
      if (iStack_130 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_148);
    }
    goto LAB_006faeed;
  }
LAB_006fab47:
  iStack_150 = (int)in_RAX;
  lVar3 = param_2[3];
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  local_168 = lVar8;
  uStack_160 = unaff_R15;
  local_158 = lVar6;
  if ((int)lVar3 == -1) {
    local_128 = 2;
LAB_006fac30:
    uStack_120 = unaff_R15;
    local_118 = lVar6;
    uStack_110 = param_3;
    <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>>
    ::new(&local_108,param_2);
    if (local_108 != 0xffffffff) {
      local_68 = CONCAT44(uStack_104,local_108);
      uStack_60 = CONCAT44(uStack_fc,uStack_100);
      local_38 = local_d8;
      uStack_34 = uStack_d4;
      uStack_30 = uStack_d0;
      uStack_2c = uStack_cc;
      local_48 = local_e8;
      iStack_44 = iStack_e4;
      iStack_40 = iStack_e0;
      uStack_3c = uStack_dc;
      local_b8 = CONCAT44(uStack_134,local_138);
      uStack_b0 = CONCAT44(uStack_12c,iStack_130);
      local_c8 = local_148;
      uStack_c0 = uStack_140;
      uStack_90 = CONCAT44(uStack_14c,iStack_150);
      local_a8 = local_168;
      uStack_a0 = uStack_160;
      local_98 = local_158;
      local_88 = local_128;
      uStack_80 = uStack_120;
      local_78 = local_118;
      _uStack_70 = CONCAT44(uStack_10c,uStack_110);
      (*(code *)PTR_memcpy_00799008)((int)local_128,0xa0);
      return param_1;
    }
    if (CONCAT44(uStack_fc,uStack_100) == 0) {
      *(int *)((longlong)param_2 + 0xc) = iStack_ec;
      *(int *)(param_2 + 2) = local_e8;
      *(int *)((longlong)param_2 + 0x14) = iStack_e4;
      *(int *)(param_2 + 3) = iStack_e0;
      *(undefined4 *)param_2 = local_f8;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_f4;
      *(undefined4 *)(param_2 + 1) = uStack_f0;
      *(int *)((longlong)param_2 + 0xc) = iStack_ec;
      (*(code *)PTR_signal_00799498)
                (local_f8,&
                          PTR_anon_4a510ad2c2ece6409108a5920cec5cc2_3_llvm_1700297362806677381_00794af8
                );
      if (local_c8 != 0) {
        lVar6 = *param_2;
        lVar8 = param_2[1];
        uVar7 = *(undefined8 *)((longlong)param_2 + 0x14);
        *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0xc);
        *(undefined8 *)((longlong)param_1 + 0x8c) = uVar7;
        param_1[0xf] = lVar6;
        param_1[0x10] = lVar8;
        param_1[10] = local_118;
        param_1[0xb] = CONCAT44(uStack_10c,uStack_110);
        param_1[8] = local_128;
        param_1[9] = uStack_120;
        param_1[6] = local_158;
        param_1[7] = CONCAT44(uStack_14c,iStack_150);
        param_1[4] = local_168;
        param_1[5] = uStack_160;
        param_1[2] = CONCAT44(uStack_134,local_138);
        param_1[3] = CONCAT44(uStack_12c,iStack_130);
        *param_1 = local_148;
        param_1[1] = uStack_140;
        param_1[0xc] = -1;
        param_1[0xd] = local_c8;
        param_1[0xe] = uStack_c0;
        return param_1;
      }
      param_1[1] = uStack_c0;
      *param_1 = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::ChildStdout>>
                (&local_128,0x11);
      bVar2 = true;
    }
    else {
      param_1[1] = CONCAT44(uStack_fc,uStack_100);
      *param_1 = -1;
      if (iStack_ec != -1) {
        (*(code *)PTR_close_00799030)();
      }
      if (local_e8 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      if (iStack_e4 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      if (iStack_e0 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      if ((int)local_128 == 2) {
        bVar2 = false;
      }
      else {
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_128);
        if (uStack_110 != 0xffffffff) {
          (*(code *)PTR_close_00799030)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_128);
        bVar2 = false;
      }
    }
    if ((int)local_168 != 2) {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_168);
      if (iStack_150 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_168);
    }
  }
  else {
    uVar4 = (*(code *)PTR_from_0079a9a0)();
    auVar10 = set_nonblocking::<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>(uVar4);
    uVar7 = auVar10._8_8_;
    uVar9 = auVar10._0_8_;
    if (uVar9 == 0) {
      uVar5 = (*(code *)PTR_current_00799480)();
      local_108 = uVar4;
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::
      new_with_interest_and_handle::<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>
                (&local_c8,&local_108,1,uVar5,uVar7,
                 &anon_4a510ad2c2ece6409108a5920cec5cc2_35_llvm_1700297362806677381);
      uVar9 = uStack_c0;
      if (local_c8 != 2) {
        local_128 = local_c8;
        lVar6 = local_b8;
        unaff_R15 = uStack_c0;
        param_3 = local_108;
        goto LAB_006fac30;
      }
    }
    (*(code *)PTR_close_00799030)();
    param_1[1] = uVar9;
    *param_1 = -1;
    bVar2 = true;
    if ((int)local_168 != 2) {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_168);
      if (iStack_150 != -1) {
        (*(code *)PTR_close_00799030)();
      }
      bVar2 = true;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_168);
    }
  }
  if ((int)local_148 != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_148);
    if (iStack_130 != -1) {
      (*(code *)PTR_close_00799030)();
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_148);
  }
  if (!bVar2) {
    return param_1;
  }
LAB_006faeed:
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if ((int)param_2[2] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (*(int *)((longlong)param_2 + 0x14) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if ((int)param_2[3] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


