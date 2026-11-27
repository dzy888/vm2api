// 00181440 send

/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>>::send */

bool __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<()>>::send(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong **pplVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *in_FS_OFFSET;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong **pplStack_88;
  longlong *local_80;
  uint local_78;
  longlong *local_70;
  longlong *local_68;
  longlong **pplStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar6 = PTR_yield_now_00219ff8;
  plVar1 = (longlong *)param_1[1];
  if (*param_1 == 0) {
    local_78 = 0xffffffff;
    uVar21 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_38 = 0;
    uVar11 = plVar1[0x10];
    uVar17 = plVar1[0x32];
    cVar7 = '\x01';
    if ((uVar17 & uVar11) == 0) {
      lVar2 = *in_FS_OFFSET;
LAB_001814c3:
      uVar19 = 0;
      uVar13 = 0;
      do {
        uVar8 = local_78;
        plVar4 = local_80;
        uVar14 = 6;
        if (uVar13 < 6) {
          uVar14 = uVar13;
        }
        uVar14 = uVar14 * uVar14;
        uVar12 = uVar14 & 5;
        uVar15 = uVar14 & 0x38;
        uVar18 = uVar17 - 1 & uVar11;
        lVar3 = plVar1[0x33];
        uVar17 = *(ulonglong *)(lVar3 + uVar18 * 8);
        if (uVar11 == uVar17) {
          if (uVar18 + 1 < (ulonglong)plVar1[0x30]) {
            LOCK();
            bVar20 = uVar11 == plVar1[0x10];
            if (bVar20) {
              plVar1[0x10] = uVar11 + 1;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar20 = uVar11 == plVar1[0x10];
            if (bVar20) {
              plVar1[0x10] = (-plVar1[0x31] & uVar11) + plVar1[0x31];
            }
            UNLOCK();
          }
          if (bVar20) {
            local_58 = lVar3 + uVar18 * 8;
            lStack_50 = uVar11 + 1;
            *(longlong *)(lVar3 + uVar18 * 8) = lStack_50;
            <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(plVar1 + 0x28);
            cVar7 = '\x02';
            uVar21 = extraout_XMM0_Da_04;
            break;
          }
          if (uVar13 != 0) {
            if (7 < uVar14) {
              do {
                uVar15 = uVar15 - 8;
              } while (uVar15 != 0);
              if ((uVar14 & 7) == 0) goto LAB_001814d0;
            }
            do {
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        else if (uVar17 + plVar1[0x31] == uVar11 + 1) {
          LOCK();
          UNLOCK();
          if (*plVar1 + plVar1[0x31] == uVar11) goto LAB_0018168b;
          if (uVar13 != 0) {
            if (7 < uVar14) {
              do {
                uVar15 = uVar15 - 8;
              } while (uVar15 != 0);
              if ((uVar14 & 7) == 0) goto LAB_001814d0;
            }
            do {
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        else if (uVar13 < 7) {
          if (uVar13 != 0) {
            uVar8 = uVar19 & 7;
            if (6 < uVar19 - 1) {
              uVar14 = uVar19 & 0xfffffff8;
              do {
                uVar14 = uVar14 - 8;
              } while (uVar14 != 0);
              if ((uVar19 & 7) == 0) goto LAB_001814d0;
            }
            do {
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else {
          uVar21 = (*(code *)puVar6)();
        }
LAB_001814d0:
        iVar5 = uVar13 * 2;
        uVar11 = plVar1[0x10];
        uVar13 = uVar13 + 1;
        uVar17 = plVar1[0x32];
        uVar19 = uVar19 + iVar5 + 1;
        if ((uVar17 & uVar11) != 0) break;
      } while( true );
    }
  }
  else if ((int)*param_1 == 1) {
    cVar7 = <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::send();
    uVar21 = extraout_XMM0_Da;
  }
  else {
    cVar7 = <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send(plVar1,param_2,0xffffffff);
    uVar21 = extraout_XMM0_Da_03;
  }
LAB_00181804:
  if (cVar7 != '\0') {
    return cVar7 != '\x02';
  }
  (*(code *)PTR_panic_00219ca8)(uVar21,&PTR_s__rustc_48a229ceaefd4985c50990b14_002159d8);
  LOCK();
  *local_a0 = *local_a0 + -1;
  UNLOCK();
  if (*local_a0 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
    drop_slow(&local_a0,0x28);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
LAB_0018168b:
  if (local_78 != 0xffffffff) {
    plVar9 = (longlong *)(*(code *)PTR_now_00219fc8)();
    if (plVar9 == plVar4) {
      if (uVar8 <= uVar12) goto LAB_00181845;
    }
    else if ((longlong)plVar4 <= (longlong)plVar9) {
LAB_00181845:
      cVar7 = '\0';
      uVar21 = extraout_XMM0_Da_00;
      goto LAB_00181804;
    }
  }
  local_70 = &local_58;
  pplStack_60 = &local_80;
  puVar10 = (undefined8 *)(lVar2 + -0x20);
  local_68 = plVar1;
  if (((char)in_FS_OFFSET[-3] != '\x01') &&
     (puVar10 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (*in_FS_OFFSET + -0x20,0), puVar10 == (undefined8 *)0x0)) {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},()>
    ::_closure_2_();
    uVar21 = extraout_XMM0_Da_02;
    goto LAB_0018175f;
  }
  plVar4 = (longlong *)*puVar10;
  *puVar10 = 0;
  if (plVar4 == (longlong *)0x0) {
    local_a0 = (longlong *)(*(code *)PTR_new_00219fc0)();
    local_70 = (longlong *)0x0;
    local_98 = &local_58;
    pplStack_88 = &local_80;
    local_90 = plVar1;
    uVar21 = <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
             ::send::_closure_0_(&local_98,local_a0);
    LOCK();
    *local_a0 = *local_a0 + -1;
    UNLOCK();
    if (*local_a0 != 0) goto LAB_0018175f;
    pplVar16 = &local_a0;
  }
  else {
    plVar4[3] = 0;
    plVar4[4] = 0;
    local_70 = (longlong *)0x0;
    local_98 = &local_58;
    local_90 = local_68;
    pplStack_88 = pplStack_60;
    local_a0 = plVar4;
    uVar21 = <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
             ::send::_closure_0_(&local_98,plVar4);
    local_98 = (longlong *)*puVar10;
    *puVar10 = plVar4;
    if (local_98 == (longlong *)0x0) goto LAB_0018175f;
    LOCK();
    *local_98 = *local_98 + -1;
    UNLOCK();
    if (*local_98 != 0) goto LAB_0018175f;
    pplVar16 = &local_98;
  }
  <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::drop_slow
            (pplVar16);
  uVar21 = extraout_XMM0_Da_01;
LAB_0018175f:
  uVar11 = plVar1[0x10];
  uVar17 = plVar1[0x32];
  if ((uVar17 & uVar11) != 0) goto LAB_00181804;
  goto LAB_001814c3;
}


