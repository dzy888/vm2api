// 001818a0 recv

/* WARNING: Removing unreachable block (ram,0x00181cee) */
/* <std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *in_FS_OFFSET;
  longlong *local_120;
  longlong **local_118;
  ulonglong *local_110;
  longlong *plStack_108;
  longlong local_100;
  uint local_f8;
  longlong **local_f0;
  ulonglong *local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  puVar4 = PTR_yield_now_00219ff8;
  puVar1 = (ulonglong *)param_2[1];
  if (*param_2 != 0) {
    if ((int)*param_2 == 1) {
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv();
    }
    else {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv(&local_d8,puVar1,param_3,0xffffffff);
    }
    if ((int)lStack_b0 == -2) {
LAB_00181d36:
      param_1[5] = 0xfffffffffffffffe;
    }
    else {
LAB_00181d55:
      param_1[6] = local_a8;
      param_1[4] = local_b8;
      param_1[5] = lStack_b0;
      param_1[2] = local_c8;
      param_1[3] = uStack_c0;
      *param_1 = local_d8;
      param_1[1] = uStack_d0;
    }
    return param_1;
  }
  local_f8 = 0xffffffff;
  local_a0 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (longlong *)0x0;
  lStack_90 = 0;
  local_78 = 0;
LAB_00181931:
  uVar9 = *puVar1;
  uVar16 = 0;
  uVar11 = 0;
  do {
    uVar6 = local_f8;
    lVar5 = local_100;
    uVar12 = 6;
    if (uVar11 < 6) {
      uVar12 = uVar11;
    }
    uVar12 = uVar12 * uVar12;
    uVar10 = uVar12 & 5;
    uVar13 = uVar12 & 0x38;
    uVar15 = puVar1[0x32] - 1 & uVar9;
    lVar14 = uVar15 * 0x40;
    uVar7 = *(ulonglong *)(puVar1[0x33] + lVar14);
    if (uVar9 + 1 == uVar7) {
      if (puVar1[0x30] <= uVar15 + 1) {
        uVar7 = (-puVar1[0x31] & uVar9) + puVar1[0x31];
      }
      LOCK();
      uVar15 = *puVar1;
      if (uVar9 == uVar15) {
        *puVar1 = uVar7;
      }
      UNLOCK();
      if (uVar9 == uVar15) {
        local_98 = (longlong *)(puVar1[0x33] + lVar14);
        lStack_90 = uVar9 + puVar1[0x31];
        local_68 = (undefined4)local_98[1];
        uStack_64 = *(undefined4 *)((longlong)local_98 + 0xc);
        uStack_60 = (undefined4)local_98[2];
        uStack_5c = *(undefined4 *)((longlong)local_98 + 0x14);
        local_58 = (undefined4)local_98[3];
        uStack_54 = *(undefined4 *)((longlong)local_98 + 0x1c);
        uStack_50 = (undefined4)local_98[4];
        uStack_4c = *(undefined4 *)((longlong)local_98 + 0x24);
        local_48 = (undefined4)local_98[5];
        uStack_44 = *(undefined4 *)((longlong)local_98 + 0x2c);
        iStack_40 = (int)local_98[6];
        uStack_3c = *(undefined4 *)((longlong)local_98 + 0x34);
        local_38 = local_98[7];
        *local_98 = lStack_90;
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(puVar1 + 0x20);
        lStack_b0 = CONCAT44(uStack_3c,iStack_40);
        if (lStack_b0 == -2) goto LAB_00181d36;
        local_d8 = CONCAT44(uStack_64,local_68);
        uStack_d0 = CONCAT44(uStack_5c,uStack_60);
        local_c8 = CONCAT44(uStack_54,local_58);
        uStack_c0 = CONCAT44(uStack_4c,uStack_50);
        local_b8 = CONCAT44(uStack_44,local_48);
        local_a8 = local_38;
        if (iStack_40 != -2) goto LAB_00181d55;
        goto LAB_00181d36;
      }
      if (uVar11 != 0) {
        if (7 < uVar12) {
          do {
            uVar13 = uVar13 - 8;
          } while (uVar13 != 0);
          if ((uVar12 & 7) == 0) goto LAB_00181940;
        }
        do {
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else if (uVar7 == uVar9) {
      LOCK();
      UNLOCK();
      if ((~puVar1[0x32] & puVar1[0x10]) == uVar9) break;
      if (uVar11 != 0) {
        if (7 < uVar12) {
          do {
            uVar13 = uVar13 - 8;
          } while (uVar13 != 0);
          if ((uVar12 & 7) == 0) goto LAB_00181940;
        }
        do {
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else if (uVar11 < 7) {
      if (uVar11 != 0) {
        uVar6 = uVar16 & 7;
        if (6 < uVar16 - 1) {
          uVar12 = uVar16 & 0xfffffff8;
          do {
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
          if (uVar6 == 0) goto LAB_00181940;
        }
        do {
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      (*(code *)puVar4)();
    }
LAB_00181940:
    iVar3 = uVar11 * 2;
    uVar9 = *puVar1;
    uVar11 = uVar11 + 1;
    uVar16 = uVar16 + iVar3 + 1;
  } while( true );
  if ((puVar1[0x32] & puVar1[0x10]) != 0) goto LAB_00181d36;
  if (local_f8 != 0xffffffff) {
    lVar14 = (*(code *)PTR_now_00219fc8)();
    if (lVar14 == lVar5) {
      if (uVar6 <= uVar10) goto LAB_00181d36;
    }
    else if (lVar5 <= lVar14) goto LAB_00181d36;
  }
  local_f0 = &local_98;
  plStack_e0 = &local_100;
  puVar8 = local_a0;
  local_e8 = puVar1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar8 = (undefined8 *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), puVar8 != (undefined8 *)0x0)) {
    plVar2 = (longlong *)*puVar8;
    *puVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      local_120 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_f0 = (longlong **)0x0;
      local_118 = &local_98;
      plStack_108 = &local_100;
      local_110 = puVar1;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_118,local_120);
      LOCK();
      *local_120 = *local_120 + -1;
      UNLOCK();
      if (*local_120 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_120);
      }
    }
    else {
      plVar2[3] = 0;
      plVar2[4] = 0;
      local_f0 = (longlong **)0x0;
      local_118 = &local_98;
      local_110 = local_e8;
      plStack_108 = plStack_e0;
      local_120 = plVar2;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_118,plVar2);
      local_118 = (longlong **)*puVar8;
      *puVar8 = plVar2;
      if (local_118 != (longlong **)0x0) {
        LOCK();
        *local_118 = (longlong *)((longlong)*local_118 + -1);
        UNLOCK();
        if (*local_118 == (longlong *)0x0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_118);
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_00181931;
}


