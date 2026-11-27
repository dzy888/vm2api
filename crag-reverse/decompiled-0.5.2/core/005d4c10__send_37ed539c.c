// 005d4c10 send

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::send */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::send
          (longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RBX;
  undefined7 uVar11;
  ulonglong uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *in_FS_OFFSET;
  bool bVar18;
  longlong local_98;
  uint local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar4 = PTR_yield_now_00799b28;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0;
  uVar8 = param_1[0x10];
  uVar15 = param_1[0x32];
  uVar11 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if ((uVar15 & uVar8) != 0) {
LAB_005d4c52:
    return uVar10 & 0xffffffff;
  }
  lVar1 = *in_FS_OFFSET;
  local_98 = param_2;
  local_90 = param_3;
LAB_005d4c7d:
  uVar17 = 0;
  uVar12 = 0;
  do {
    uVar5 = local_90;
    lVar2 = local_98;
    uVar13 = 6;
    if (uVar12 < 6) {
      uVar13 = uVar12;
    }
    uVar13 = uVar13 * uVar13;
    uVar9 = uVar13 & 5;
    uVar14 = uVar13 & 0x38;
    uVar16 = uVar15 - 1 & uVar8;
    lVar6 = param_1[0x33];
    uVar15 = *(ulonglong *)(lVar6 + uVar16 * 8);
    if (uVar8 == uVar15) {
      if (uVar16 + 1 < (ulonglong)param_1[0x30]) {
        LOCK();
        bVar18 = uVar8 == param_1[0x10];
        if (bVar18) {
          param_1[0x10] = uVar8 + 1;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar18 = uVar8 == param_1[0x10];
        if (bVar18) {
          param_1[0x10] = (-param_1[0x31] & uVar8) + param_1[0x31];
        }
        UNLOCK();
      }
      if (bVar18) {
        local_58 = lVar6 + uVar16 * 8;
        lStack_50 = uVar8 + 1;
        *(longlong *)(lVar6 + uVar16 * 8) = lStack_50;
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_1 + 0x28);
        uVar10 = CONCAT71(uVar11,2);
        goto LAB_005d4c52;
      }
      if (uVar12 != 0) {
        if (7 < uVar13) {
          do {
            uVar14 = uVar14 - 8;
          } while (uVar14 != 0);
          if ((uVar13 & 7) == 0) goto LAB_005d4c90;
        }
        do {
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (uVar15 + param_1[0x31] == uVar8 + 1) {
      LOCK();
      UNLOCK();
      if (*param_1 + param_1[0x31] == uVar8) break;
      if (uVar12 != 0) {
        if (7 < uVar13) {
          do {
            uVar14 = uVar14 - 8;
          } while (uVar14 != 0);
          if ((uVar13 & 7) == 0) goto LAB_005d4c90;
        }
        do {
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (uVar12 < 7) {
      if (uVar12 != 0) {
        uVar5 = uVar17 & 7;
        if (6 < uVar17 - 1) {
          uVar13 = uVar17 & 0xfffffff8;
          do {
            uVar13 = uVar13 - 8;
          } while (uVar13 != 0);
          if ((uVar17 & 7) == 0) goto LAB_005d4c90;
        }
        do {
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      (*(code *)puVar4)();
    }
LAB_005d4c90:
    iVar3 = uVar12 * 2;
    uVar8 = param_1[0x10];
    uVar12 = uVar12 + 1;
    uVar15 = param_1[0x32];
    uVar17 = uVar17 + iVar3 + 1;
    if ((uVar15 & uVar8) != 0) goto LAB_005d4c52;
  } while( true );
  if (local_90 != 0xffffffff) {
    lVar6 = (*(code *)PTR_now_00799250)();
    if (lVar6 == lVar2) {
      if (uVar5 <= uVar9) {
LAB_005d4fe9:
        uVar10 = 0;
        goto LAB_005d4c52;
      }
    }
    else if (lVar2 <= lVar6) goto LAB_005d4fe9;
  }
  local_70 = &local_58;
  plStack_60 = &local_98;
  plVar7 = (longlong *)(lVar1 + -0x20);
  local_68 = param_1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar7 = (longlong *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), plVar7 != (longlong *)0x0)) {
    lVar2 = *plVar7;
    *plVar7 = 0;
    if (lVar2 == 0) {
      plVar7 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_70 = (longlong *)0x0;
      local_88 = &local_58;
      plStack_78 = &local_98;
      local_80 = param_1;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send::_closure_0_(&local_88,plVar7);
      LOCK();
      *plVar7 = *plVar7 + -1;
      lVar2 = *plVar7;
      UNLOCK();
    }
    else {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      local_70 = (longlong *)0x0;
      local_88 = &local_58;
      local_80 = local_68;
      plStack_78 = plStack_60;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::send::_closure_0_(&local_88,lVar2);
      local_88 = (longlong *)*plVar7;
      *plVar7 = lVar2;
      if (local_88 == (longlong *)0x0) goto LAB_005d4f20;
      LOCK();
      *local_88 = *local_88 + -1;
      lVar2 = *local_88;
      UNLOCK();
    }
    if (lVar2 == 0) {
      (*(code *)PTR_drop_slow_007995f0)();
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},()>
    ::_closure_2_();
  }
LAB_005d4f20:
  uVar8 = param_1[0x10];
  uVar15 = param_1[0x32];
  if ((uVar15 & uVar8) != 0) goto LAB_005d4c52;
  goto LAB_005d4c7d;
}


