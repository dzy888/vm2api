// 005d4830 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::recv */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::recv
          (ulonglong *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *in_FS_OFFSET;
  longlong local_98;
  uint local_90;
  longlong *local_88;
  ulonglong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  ulonglong *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar6 = PTR_yield_now_00799b28;
  lVar2 = *in_FS_OFFSET;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0;
  local_98 = param_2;
  local_90 = param_3;
LAB_005d487c:
  uVar11 = *param_1;
  uVar17 = 0;
  uVar13 = 0;
  do {
    uVar7 = local_90;
    lVar4 = local_98;
    uVar14 = 6;
    if (uVar13 < 6) {
      uVar14 = uVar13;
    }
    uVar14 = uVar14 * uVar14;
    uVar12 = uVar14 & 5;
    uVar15 = uVar14 & 0x38;
    uVar3 = param_1[0x33];
    uVar16 = param_1[0x32] - 1 & uVar11;
    uVar8 = *(ulonglong *)(uVar3 + uVar16 * 8);
    if (uVar11 + 1 == uVar8) {
      if (param_1[0x30] <= uVar16 + 1) {
        uVar8 = (-param_1[0x31] & uVar11) + param_1[0x31];
      }
      LOCK();
      uVar1 = *param_1;
      if (uVar11 == uVar1) {
        *param_1 = uVar8;
      }
      UNLOCK();
      if (uVar11 == uVar1) {
        local_58 = uVar3 + uVar16 * 8;
        lStack_50 = uVar11 + param_1[0x31];
        *(longlong *)(uVar3 + uVar16 * 8) = lStack_50;
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_1 + 0x20);
        return 2;
      }
      if (uVar13 != 0) {
        if (7 < uVar14) {
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if ((uVar14 & 7) == 0) goto LAB_005d4890;
        }
        do {
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else if (uVar8 == uVar11) {
      LOCK();
      UNLOCK();
      if ((~param_1[0x32] & param_1[0x10]) == uVar11) break;
      if (uVar13 != 0) {
        if (7 < uVar14) {
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if ((uVar14 & 7) == 0) goto LAB_005d4890;
        }
        do {
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else if (uVar13 < 7) {
      if (uVar13 != 0) {
        uVar7 = uVar17 & 7;
        if (6 < uVar17 - 1) {
          uVar14 = uVar17 & 0xfffffff8;
          do {
            uVar14 = uVar14 - 8;
          } while (uVar14 != 0);
          if (uVar7 == 0) goto LAB_005d4890;
        }
        do {
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      (*(code *)puVar6)();
    }
LAB_005d4890:
    iVar5 = uVar13 * 2;
    uVar11 = *param_1;
    uVar13 = uVar13 + 1;
    uVar17 = uVar17 + iVar5 + 1;
  } while( true );
  if ((param_1[0x32] & param_1[0x10]) != 0) {
    return 1;
  }
  if (local_90 != 0xffffffff) {
    lVar9 = (*(code *)PTR_now_00799250)();
    if (lVar9 == lVar4) {
      if (uVar7 <= uVar12) {
        return 0;
      }
    }
    else if (lVar4 <= lVar9) {
      return 0;
    }
  }
  plStack_60 = &local_98;
  plVar10 = (longlong *)(lVar2 + -0x20);
  local_70 = &local_58;
  local_68 = param_1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar10 = (longlong *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (*in_FS_OFFSET + -0x20,0), plVar10 != (longlong *)0x0)) {
    lVar4 = *plVar10;
    *plVar10 = 0;
    if (lVar4 == 0) {
      plVar10 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_70 = (longlong *)0x0;
      plStack_78 = &local_98;
      local_88 = &local_58;
      local_80 = param_1;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_88,plVar10);
      LOCK();
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      local_70 = (longlong *)0x0;
      local_80 = local_68;
      plStack_78 = plStack_60;
      local_88 = &local_58;
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_88,lVar4);
      local_88 = (longlong *)*plVar10;
      *plVar10 = lVar4;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        UNLOCK();
        if (*local_88 == 0) {
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_005d487c;
}


