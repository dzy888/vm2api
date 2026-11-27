// 00180de0 send

/* WARNING: Type propagation algorithm not settling */
/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send
    */

longlong * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *****ppppplVar8;
  longlong *****ppppplVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong *in_FS_OFFSET;
  bool bVar22;
  longlong *local_e0;
  longlong *******local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *******local_98;
  longlong *****ppppplStack_90;
  longlong *local_88;
  longlong lStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  uint local_50;
  longlong *******local_48;
  longlong *local_40;
  longlong *plStack_38;
  
  plVar1 = (longlong *)param_2[1];
  if (*param_2 == 0) {
    local_50 = 0xffffffff;
    local_88 = (longlong *)0x0;
    lStack_80 = 0;
    local_98 = (longlong *******)0x0;
    ppppplStack_90 = (longlong *****)0x0;
    local_78 = 0;
    uVar15 = plVar1[0x10];
    uVar12 = plVar1[0x32];
    if ((uVar12 & uVar15) == 0) {
      lVar2 = *in_FS_OFFSET;
LAB_00180f47:
      uVar20 = 0;
      uVar21 = 0;
      do {
        uVar11 = local_50;
        lVar10 = local_58;
        uVar17 = 6;
        if (uVar21 < 6) {
          uVar17 = uVar21;
        }
        uVar17 = uVar17 * uVar17;
        uVar16 = uVar17 & 5;
        uVar18 = uVar17 & 0x38;
        uVar13 = uVar12 - 1 & uVar15;
        lVar19 = uVar13 * 0x40;
        uVar12 = *(ulonglong *)(plVar1[0x33] + lVar19);
        if (uVar15 == uVar12) {
          if (uVar13 + 1 < (ulonglong)plVar1[0x30]) {
            LOCK();
            bVar22 = uVar15 == plVar1[0x10];
            if (bVar22) {
              plVar1[0x10] = uVar15 + 1;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar22 = uVar15 == plVar1[0x10];
            if (bVar22) {
              plVar1[0x10] = (-plVar1[0x31] & uVar15) + plVar1[0x31];
            }
            UNLOCK();
          }
          if (bVar22) {
            local_98 = (longlong *******)(plVar1[0x33] + lVar19);
            ppppplStack_90 = (longlong *****)(uVar15 + 1);
            local_98[5] = (longlong ******)param_3[4];
            ppppplVar8 = (longlong *****)*param_3;
            ppppplVar9 = (longlong *****)param_3[1];
            uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
            lVar2 = param_3[3];
            uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
            *(int *)(local_98 + 3) = (int)param_3[2];
            *(undefined4 *)((longlong)local_98 + 0x1c) = uVar6;
            *(int *)(local_98 + 4) = (int)lVar2;
            *(undefined4 *)((longlong)local_98 + 0x24) = uVar7;
            local_98[1] = (longlong ******)ppppplVar8;
            local_98[2] = (longlong ******)ppppplVar9;
            uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
            lVar2 = param_3[6];
            uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
            *(int *)(local_98 + 6) = (int)param_3[5];
            *(undefined4 *)((longlong)local_98 + 0x34) = uVar6;
            *(int *)(local_98 + 7) = (int)lVar2;
            *(undefined4 *)((longlong)local_98 + 0x3c) = uVar7;
            *local_98 = (longlong ******)ppppplStack_90;
            <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(plVar1 + 0x28);
            goto LAB_00181311;
          }
          if (uVar21 != 0) {
            if (7 < uVar17) {
              do {
                uVar18 = uVar18 - 8;
              } while (uVar18 != 0);
              if ((uVar17 & 7) == 0) goto LAB_00180f60;
            }
            do {
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else if (uVar12 + plVar1[0x31] == uVar15 + 1) {
          LOCK();
          UNLOCK();
          if (*plVar1 + plVar1[0x31] == uVar15) goto LAB_0018112b;
          if (uVar21 != 0) {
            if (7 < uVar17) {
              do {
                uVar18 = uVar18 - 8;
              } while (uVar18 != 0);
              if ((uVar17 & 7) == 0) goto LAB_00180f60;
            }
            do {
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else if (uVar21 < 7) {
          if (uVar21 != 0) {
            uVar11 = uVar20 & 7;
            if (6 < uVar20 - 1) {
              uVar17 = uVar20 & 0xfffffff8;
              do {
                uVar17 = uVar17 - 8;
              } while (uVar17 != 0);
              if (uVar11 == 0) goto LAB_00180f60;
            }
            do {
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          (*(code *)PTR_yield_now_00219ff8)();
        }
LAB_00180f60:
        iVar5 = uVar21 * 2;
        uVar15 = plVar1[0x10];
        uVar21 = uVar21 + 1;
        uVar12 = plVar1[0x32];
        uVar20 = uVar20 + iVar5 + 1;
        if ((uVar12 & uVar15) != 0) break;
      } while( true );
    }
LAB_00180e95:
    local_a8 = param_3[5];
    if (local_a8 == -2) goto LAB_00181311;
    uStack_a0 = param_3[6];
    uStack_b0 = param_3[4];
    plStack_d0 = (longlong *)*param_3;
    local_c8 = (longlong *)param_3[1];
    lStack_c0 = param_3[2];
    local_b8 = param_3[3];
    local_d8 = (longlong *******)0x1;
  }
  else {
    if ((int)*param_2 == 1) {
      local_68 = param_3[6];
      local_98 = (longlong *******)*param_3;
      ppppplStack_90 = (longlong *****)param_3[1];
      local_88 = (longlong *)param_3[2];
      lStack_80 = param_3[3];
      local_78 = param_3[4];
      uStack_70 = (undefined4)param_3[5];
      uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send(&local_d8,plVar1,&local_98,param_4,0xffffffff);
    }
    else {
      local_68 = param_3[6];
      local_98 = (longlong *******)*param_3;
      ppppplStack_90 = (longlong *****)param_3[1];
      local_88 = (longlong *)param_3[2];
      lStack_80 = param_3[3];
      local_78 = param_3[4];
      uStack_70 = (undefined4)param_3[5];
      uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send(&local_d8,plVar1,&local_98,param_4,0xffffffff);
    }
    if ((int)local_d8 == 2) {
LAB_00181311:
      param_1[5] = -2;
      return param_1;
    }
  }
LAB_00181354:
  local_98 = local_d8;
  ppppplStack_90 = (longlong *****)plStack_d0;
  local_68 = local_a8;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_78 = local_b8;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  local_88 = local_c8;
  lStack_80 = lStack_c0;
  if (((ulonglong)local_d8 & 1) == 0) {
    (*(code *)PTR_panic_00219ca8)((int)local_d8,&PTR_s__rustc_48a229ceaefd4985c50990b14_002159d8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  param_1[6] = uStack_a0;
  param_1[4] = uStack_b0;
  param_1[5] = local_a8;
  param_1[2] = lStack_c0;
  param_1[3] = local_b8;
  *param_1 = (longlong)plStack_d0;
  param_1[1] = (longlong)local_c8;
  return param_1;
LAB_0018112b:
  if (local_50 != 0xffffffff) {
    lVar19 = (*(code *)PTR_now_00219fc8)();
    if (lVar19 == lVar10) {
      if (uVar11 <= uVar16) {
LAB_0018131e:
        uStack_a0 = param_3[6];
        plStack_d0 = (longlong *)*param_3;
        local_c8 = (longlong *)param_3[1];
        lStack_c0 = param_3[2];
        local_b8 = param_3[3];
        uStack_b0 = param_3[4];
        local_a8 = param_3[5];
        local_d8 = (longlong *******)0x0;
        goto LAB_00181354;
      }
    }
    else if (lVar10 <= lVar19) goto LAB_0018131e;
  }
  local_48 = (longlong *******)&local_98;
  plStack_38 = &local_58;
  puVar14 = (undefined8 *)(lVar2 + -0x20);
  local_40 = plVar1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar14 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          ((undefined8 *)(lVar2 + -0x20),0), puVar14 != (undefined8 *)0x0)) {
    plVar3 = (longlong *)*puVar14;
    *puVar14 = 0;
    if (plVar3 == (longlong *)0x0) {
      local_e0 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_48 = (longlong *******)0x0;
      local_d8 = (longlong *******)&local_98;
      local_c8 = &local_58;
      plStack_d0 = plVar1;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send::_closure_0_(&local_d8,local_e0);
      LOCK();
      *local_e0 = *local_e0 + -1;
      UNLOCK();
      if (*local_e0 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_e0);
      }
    }
    else {
      plVar3[3] = 0;
      plVar3[4] = 0;
      local_48 = (longlong *******)0x0;
      local_d8 = (longlong *******)&local_98;
      plStack_d0 = local_40;
      local_c8 = plStack_38;
      local_e0 = plVar3;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send::_closure_0_(&local_d8,plVar3);
      local_d8 = (longlong *******)*puVar14;
      *puVar14 = plVar3;
      if (local_d8 != (longlong *******)0x0) {
        LOCK();
        *local_d8 = (longlong ******)((longlong)*local_d8 + -1);
        UNLOCK();
        if (*local_d8 == (longlong ******)0x0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_d8);
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},()>
    ::_closure_2_();
  }
  uVar15 = plVar1[0x10];
  uVar12 = plVar1[0x32];
  if ((uVar12 & uVar15) != 0) goto LAB_00180e95;
  goto LAB_00180f47;
}


