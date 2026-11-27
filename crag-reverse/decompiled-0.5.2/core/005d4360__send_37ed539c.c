// 005d4360 send

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong *in_FS_OFFSET;
  bool bVar19;
  longlong local_98;
  uint local_90;
  longlong **local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong **local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  lStack_50 = 0;
  local_38 = 0;
  uVar12 = param_2[0x10];
  uVar9 = param_2[0x32];
  if ((uVar9 & uVar12) != 0) {
LAB_005d43a7:
    lVar1 = param_3[5];
    if (lVar1 == -2) {
LAB_005d478f:
      *param_1 = 2;
    }
    else {
      lVar2 = param_3[6];
      param_1[5] = param_3[4];
      lVar16 = *param_3;
      lVar6 = param_3[1];
      lVar7 = param_3[3];
      param_1[3] = param_3[2];
      param_1[4] = lVar7;
      param_1[1] = lVar16;
      param_1[2] = lVar6;
      *param_1 = 1;
      param_1[6] = lVar1;
      param_1[7] = lVar2;
    }
    return param_1;
  }
  lVar1 = *in_FS_OFFSET;
  local_98 = param_4;
  local_90 = param_5;
LAB_005d43f9:
  uVar17 = 0;
  uVar18 = 0;
  do {
    uVar8 = local_90;
    lVar2 = local_98;
    uVar14 = 6;
    if (uVar18 < 6) {
      uVar14 = uVar18;
    }
    uVar14 = uVar14 * uVar14;
    uVar13 = uVar14 & 5;
    uVar15 = uVar14 & 0x38;
    uVar10 = uVar9 - 1 & uVar12;
    lVar16 = uVar10 * 0x40;
    uVar9 = *(ulonglong *)(param_2[0x33] + lVar16);
    if (uVar12 == uVar9) {
      if (uVar10 + 1 < (ulonglong)param_2[0x30]) {
        LOCK();
        bVar19 = uVar12 == param_2[0x10];
        if (bVar19) {
          param_2[0x10] = uVar12 + 1;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar19 = uVar12 == param_2[0x10];
        if (bVar19) {
          param_2[0x10] = (-param_2[0x31] & uVar12) + param_2[0x31];
        }
        UNLOCK();
      }
      if (bVar19) {
        local_58 = (longlong *)(param_2[0x33] + lVar16);
        lStack_50 = uVar12 + 1;
        local_58[5] = param_3[4];
        lVar1 = *param_3;
        lVar2 = param_3[1];
        uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
        lVar16 = param_3[3];
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
        *(int *)(local_58 + 3) = (int)param_3[2];
        *(undefined4 *)((longlong)local_58 + 0x1c) = uVar4;
        *(int *)(local_58 + 4) = (int)lVar16;
        *(undefined4 *)((longlong)local_58 + 0x24) = uVar5;
        local_58[1] = lVar1;
        local_58[2] = lVar2;
        uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
        lVar1 = param_3[6];
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
        *(int *)(local_58 + 6) = (int)param_3[5];
        *(undefined4 *)((longlong)local_58 + 0x34) = uVar4;
        *(int *)(local_58 + 7) = (int)lVar1;
        *(undefined4 *)((longlong)local_58 + 0x3c) = uVar5;
        *local_58 = lStack_50;
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_2 + 0x28);
        goto LAB_005d478f;
      }
      if (uVar18 != 0) {
        if (7 < uVar14) {
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if ((uVar14 & 7) == 0) goto LAB_005d4410;
        }
        do {
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if (uVar9 + param_2[0x31] == uVar12 + 1) {
      LOCK();
      UNLOCK();
      if (*param_2 + param_2[0x31] == uVar12) break;
      if (uVar18 != 0) {
        if (7 < uVar14) {
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if ((uVar14 & 7) == 0) goto LAB_005d4410;
        }
        do {
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else if (uVar18 < 7) {
      if (uVar18 != 0) {
        uVar8 = uVar17 & 7;
        if (6 < uVar17 - 1) {
          uVar14 = uVar17 & 0xfffffff8;
          do {
            uVar14 = uVar14 - 8;
          } while (uVar14 != 0);
          if (uVar8 == 0) goto LAB_005d4410;
        }
        do {
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00799b28)();
    }
LAB_005d4410:
    iVar3 = uVar18 * 2;
    uVar12 = param_2[0x10];
    uVar18 = uVar18 + 1;
    uVar9 = param_2[0x32];
    uVar17 = uVar17 + iVar3 + 1;
    if ((uVar9 & uVar12) != 0) goto LAB_005d43a7;
  } while( true );
  if (local_90 != 0xffffffff) {
    lVar16 = (*(code *)PTR_now_00799250)();
    if (lVar16 == lVar2) {
      if (uVar8 <= uVar13) {
LAB_005d47a8:
        param_1[7] = param_3[6];
        lVar1 = *param_3;
        lVar2 = param_3[1];
        lVar16 = param_3[2];
        lVar6 = param_3[3];
        lVar7 = param_3[5];
        param_1[5] = param_3[4];
        param_1[6] = lVar7;
        param_1[3] = lVar16;
        param_1[4] = lVar6;
        param_1[1] = lVar1;
        param_1[2] = lVar2;
        *param_1 = 0;
        return param_1;
      }
    }
    else if (lVar2 <= lVar16) goto LAB_005d47a8;
  }
  local_70 = &local_58;
  plStack_60 = &local_98;
  plVar11 = (longlong *)(lVar1 + -0x20);
  local_68 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar11 = (longlong *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          ((longlong *)(lVar1 + -0x20),0), plVar11 != (longlong *)0x0)) {
    lVar2 = *plVar11;
    *plVar11 = 0;
    if (lVar2 == 0) {
      plVar11 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_70 = (longlong **)0x0;
      local_88 = &local_58;
      plStack_78 = &local_98;
      local_80 = param_2;
      send::_closure_0_(&local_88,plVar11);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      local_70 = (longlong **)0x0;
      local_88 = &local_58;
      local_80 = local_68;
      plStack_78 = plStack_60;
      send::_closure_0_(&local_88,lVar2);
      local_88 = (longlong **)*plVar11;
      *plVar11 = lVar2;
      if (local_88 != (longlong **)0x0) {
        LOCK();
        *local_88 = (longlong *)((longlong)*local_88 + -1);
        UNLOCK();
        if (*local_88 == (longlong *)0x0) {
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},()>
    ::_closure_2_();
  }
  uVar12 = param_2[0x10];
  uVar9 = param_2[0x32];
  if ((uVar9 & uVar12) != 0) goto LAB_005d43a7;
  goto LAB_005d43f9;
}


