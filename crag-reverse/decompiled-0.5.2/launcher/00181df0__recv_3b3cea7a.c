// 00181df0 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::Receiver<()>>::recv */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Receiver<()>>::recv(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  char extraout_AL;
  char extraout_AL_00;
  char cVar9;
  uint uVar10;
  undefined7 extraout_var;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined7 extraout_var_00;
  undefined8 uVar14;
  undefined7 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *in_FS_OFFSET;
  longlong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong *plStack_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  ulonglong *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar7 = PTR_yield_now_00219ff8;
  puVar2 = (ulonglong *)param_1[1];
  if (*param_1 == 0) {
    local_78 = 0xffffffff;
    lVar3 = *in_FS_OFFSET;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_38 = 0;
LAB_00181e5f:
    uVar16 = *puVar2;
    uVar22 = 0;
    uVar18 = 0;
    do {
      uVar10 = local_78;
      lVar8 = local_80;
      uVar19 = 6;
      if (uVar18 < 6) {
        uVar19 = uVar18;
      }
      uVar19 = uVar19 * uVar19;
      uVar17 = uVar19 & 5;
      uVar20 = uVar19 & 0x38;
      uVar4 = puVar2[0x33];
      uVar21 = puVar2[0x32] - 1 & uVar16;
      uVar11 = *(ulonglong *)(uVar4 + uVar21 * 8);
      if (uVar16 + 1 == uVar11) {
        if (puVar2[0x30] <= uVar21 + 1) {
          uVar11 = (-puVar2[0x31] & uVar16) + puVar2[0x31];
        }
        LOCK();
        uVar1 = *puVar2;
        if (uVar16 == uVar1) {
          *puVar2 = uVar11;
        }
        UNLOCK();
        if (uVar16 == uVar1) {
          local_58 = uVar4 + uVar21 * 8;
          lStack_50 = uVar16 + puVar2[0x31];
          *(longlong *)(uVar4 + uVar21 * 8) = lStack_50;
          uVar14 = <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(puVar2 + 0x20);
          uVar15 = (undefined7)((ulonglong)uVar14 >> 8);
          cVar9 = '\x02';
          goto LAB_0018218f;
        }
        if (uVar18 != 0) {
          if (7 < uVar19) {
            do {
              uVar20 = uVar20 - 8;
            } while (uVar20 != 0);
            if ((uVar19 & 7) == 0) goto LAB_00181e70;
          }
          do {
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      else if (uVar11 == uVar16) {
        LOCK();
        UNLOCK();
        uVar4 = puVar2[0x10];
        if ((~puVar2[0x32] & uVar4) == uVar16) goto LAB_00181ffb;
        if (uVar18 != 0) {
          if (7 < uVar19) {
            do {
              uVar20 = uVar20 - 8;
            } while (uVar20 != 0);
            if ((uVar19 & 7) == 0) goto LAB_00181e70;
          }
          do {
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      else if (uVar18 < 7) {
        if (uVar18 != 0) {
          uVar10 = uVar22 & 7;
          if (6 < uVar22 - 1) {
            uVar19 = uVar22 & 0xfffffff8;
            do {
              uVar19 = uVar19 - 8;
            } while (uVar19 != 0);
            if (uVar10 == 0) goto LAB_00181e70;
          }
          do {
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        (*(code *)puVar7)();
      }
LAB_00181e70:
      iVar6 = uVar18 * 2;
      uVar16 = *puVar2;
      uVar18 = uVar18 + 1;
      uVar22 = uVar22 + iVar6 + 1;
    } while( true );
  }
  if ((int)*param_1 == 1) {
    <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::recv();
    cVar9 = extraout_AL;
    uVar15 = extraout_var;
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv(puVar2,param_2,0xffffffff);
    cVar9 = extraout_AL_00;
    uVar15 = extraout_var_00;
  }
LAB_0018218f:
  return CONCAT71(uVar15,cVar9 != '\x02');
LAB_00181ffb:
  if ((puVar2[0x32] & uVar4) != 0) {
    uVar15 = (undefined7)(uVar4 >> 8);
    cVar9 = '\x01';
    goto LAB_0018218f;
  }
  if (local_78 != 0xffffffff) {
    lVar12 = (*(code *)PTR_now_00219fc8)();
    if (lVar12 == lVar8) {
      if (uVar10 <= uVar17) goto LAB_001821a7;
    }
    else if (lVar8 <= lVar12) goto LAB_001821a7;
  }
  plStack_60 = &local_80;
  puVar13 = (undefined8 *)(lVar3 + -0x20);
  local_70 = &local_58;
  local_68 = puVar2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar13 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (*in_FS_OFFSET + -0x20,0), puVar13 != (undefined8 *)0x0)) {
    plVar5 = (longlong *)*puVar13;
    *puVar13 = 0;
    if (plVar5 == (longlong *)0x0) {
      local_a0 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_70 = (longlong *)0x0;
      plStack_88 = &local_80;
      local_98 = &local_58;
      local_90 = puVar2;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_98,local_a0);
      LOCK();
      *local_a0 = *local_a0 + -1;
      UNLOCK();
      if (*local_a0 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_a0);
      }
    }
    else {
      plVar5[3] = 0;
      plVar5[4] = 0;
      local_70 = (longlong *)0x0;
      local_90 = local_68;
      plStack_88 = plStack_60;
      local_a0 = plVar5;
      local_98 = &local_58;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_98,plVar5);
      local_98 = (longlong *)*puVar13;
      *puVar13 = plVar5;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *local_98 = *local_98 + -1;
        UNLOCK();
        if (*local_98 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_98);
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_00181e5f;
LAB_001821a7:
  cVar9 = '\0';
  uVar15 = 0;
  goto LAB_0018218f;
}


