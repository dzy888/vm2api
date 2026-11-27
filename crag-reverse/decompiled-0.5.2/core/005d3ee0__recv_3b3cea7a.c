// 005d3ee0 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv(undefined8 *param_1,ulonglong *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *in_FS_OFFSET;
  longlong local_e0;
  uint local_d8;
  longlong **local_d0;
  ulonglong *local_c8;
  longlong *plStack_c0;
  longlong **local_b8;
  ulonglong *local_b0;
  longlong *plStack_a8;
  longlong *local_a0;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  puVar2 = PTR_yield_now_00799b28;
  local_a0 = (longlong *)(*in_FS_OFFSET + -0x20);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (longlong *)0x0;
  lStack_90 = 0;
  local_78 = 0;
  local_e0 = param_3;
  local_d8 = param_4;
LAB_005d3f32:
  uVar6 = *param_2;
  uVar14 = 0;
  uVar9 = 0;
  do {
    uVar3 = local_d8;
    lVar7 = local_e0;
    uVar10 = 6;
    if (uVar9 < 6) {
      uVar10 = uVar9;
    }
    uVar10 = uVar10 * uVar10;
    uVar8 = uVar10 & 5;
    uVar11 = uVar10 & 0x38;
    uVar13 = param_2[0x32] - 1 & uVar6;
    lVar12 = uVar13 * 0x40;
    uVar4 = *(ulonglong *)(param_2[0x33] + lVar12);
    if (uVar6 + 1 == uVar4) {
      if (param_2[0x30] <= uVar13 + 1) {
        uVar4 = (-param_2[0x31] & uVar6) + param_2[0x31];
      }
      LOCK();
      uVar13 = *param_2;
      if (uVar6 == uVar13) {
        *param_2 = uVar4;
      }
      UNLOCK();
      if (uVar6 == uVar13) {
        local_98 = (longlong *)(param_2[0x33] + lVar12);
        lStack_90 = uVar6 + param_2[0x31];
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
        uStack_40 = (undefined4)local_98[6];
        uStack_3c = *(undefined4 *)((longlong)local_98 + 0x34);
        local_38 = local_98[7];
        *local_98 = lStack_90;
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(param_2 + 0x20);
        if (CONCAT44(uStack_3c,uStack_40) == -2) goto LAB_005d42aa;
        param_1[4] = CONCAT44(uStack_44,local_48);
        param_1[2] = CONCAT44(uStack_54,local_58);
        param_1[3] = CONCAT44(uStack_4c,uStack_50);
        *param_1 = CONCAT44(uStack_64,local_68);
        param_1[1] = CONCAT44(uStack_5c,uStack_60);
        param_1[5] = CONCAT44(uStack_3c,uStack_40);
        lVar7 = 0x30;
        goto LAB_005d42ef;
      }
      if (uVar9 != 0) {
        if (7 < uVar10) {
          do {
            uVar11 = uVar11 - 8;
          } while (uVar11 != 0);
          if ((uVar10 & 7) == 0) goto LAB_005d3f40;
        }
        do {
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (uVar4 == uVar6) {
      LOCK();
      UNLOCK();
      if ((~param_2[0x32] & param_2[0x10]) == uVar6) break;
      if (uVar9 != 0) {
        if (7 < uVar10) {
          do {
            uVar11 = uVar11 - 8;
          } while (uVar11 != 0);
          if ((uVar10 & 7) == 0) goto LAB_005d3f40;
        }
        do {
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (uVar9 < 7) {
      if (uVar9 != 0) {
        uVar3 = uVar14 & 7;
        if (6 < uVar14 - 1) {
          uVar10 = uVar14 & 0xfffffff8;
          do {
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
          if ((uVar14 & 7) == 0) goto LAB_005d3f40;
        }
        do {
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else {
      (*(code *)puVar2)();
    }
LAB_005d3f40:
    iVar1 = uVar9 * 2;
    uVar6 = *param_2;
    uVar9 = uVar9 + 1;
    uVar14 = uVar14 + iVar1 + 1;
  } while( true );
  if ((param_2[0x32] & param_2[0x10]) != 0) {
LAB_005d42aa:
    *(undefined1 *)param_1 = 1;
    goto LAB_005d42ad;
  }
  if (local_d8 != 0xffffffff) {
    lVar12 = (*(code *)PTR_now_00799250)();
    if (lVar12 == lVar7) {
      if (uVar3 <= uVar8) goto LAB_005d4308;
    }
    else if (lVar7 <= lVar12) {
LAB_005d4308:
      *(undefined1 *)param_1 = 0;
LAB_005d42ad:
      local_38 = -2;
      lVar7 = 0x28;
LAB_005d42ef:
      *(longlong *)((longlong)param_1 + lVar7) = local_38;
      return param_1;
    }
  }
  local_b8 = &local_98;
  plStack_a8 = &local_e0;
  plVar5 = local_a0;
  local_b0 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar5 = (longlong *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), plVar5 != (longlong *)0x0)) {
    lVar7 = *plVar5;
    *plVar5 = 0;
    if (lVar7 == 0) {
      plVar5 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_b8 = (longlong **)0x0;
      local_d0 = &local_98;
      plStack_c0 = &local_e0;
      local_c8 = param_2;
      recv::_closure_1_(&local_d0,plVar5);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      local_b8 = (longlong **)0x0;
      local_d0 = &local_98;
      local_c8 = local_b0;
      plStack_c0 = plStack_a8;
      recv::_closure_1_(&local_d0,lVar7);
      local_d0 = (longlong **)*plVar5;
      *plVar5 = lVar7;
      if (local_d0 != (longlong **)0x0) {
        LOCK();
        *local_d0 = (longlong *)((longlong)*local_d0 + -1);
        UNLOCK();
        if (*local_d0 == (longlong *)0x0) {
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
  goto LAB_005d3f32;
}


