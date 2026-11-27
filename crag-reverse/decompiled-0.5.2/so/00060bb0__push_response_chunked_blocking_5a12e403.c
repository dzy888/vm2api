// 00060bb0 push_response_chunked_blocking

/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::push_response_chunked_blocking */

ulonglong __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::push_response_chunked_blocking
          (longlong *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
          longlong param_6,ulonglong param_7,undefined8 param_8,undefined4 param_9)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong extraout_RDX;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined8 local_98;
  uint local_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong *local_70;
  uint local_68;
  uint local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_78 = param_6;
  (*(code *)PTR_now_000c3c00)();
  lVar7 = (*(code *)PTR_add_000c3c08)(param_9,param_8,&PTR_s_adapter____src_shm_rs_000c0378);
  local_88 = *param_1;
  local_40 = param_1[5];
  param_3 = param_3 & 0x3fffffff;
  uVar14 = (ulonglong)param_3;
  local_48 = param_7 + 0x1f & 0xfffffffffffffff8;
  uVar8 = (local_40 >> 1) - 0x18;
  if (local_40 >> 1 < 0x18) {
    uVar8 = 0;
  }
  local_50 = 0x400;
  if (0x400 < (uVar8 & 0x7ffffffffffffff8)) {
    local_50 = uVar8 & 0x7ffffffffffffff8;
  }
  local_64 = param_3 + 0x80000000;
  uVar12 = (ulonglong)local_64;
  local_68 = param_3 + 0x40000000;
  lVar3 = param_1[8];
  uVar8 = 0;
  local_70 = param_1;
  local_38 = uVar14;
LAB_00060ca0:
  if (local_40 < local_48) {
    uVar13 = param_7 - uVar8;
    if (local_50 < param_7 - uVar8) {
      uVar13 = local_50;
    }
    uVar10 = uVar13 + uVar8;
    if (uVar10 < param_7) {
      bVar2 = false;
      uVar12 = (ulonglong)local_68;
      local_60 = uVar8 + local_78;
      local_80 = uVar10;
    }
    else {
      if (param_7 < uVar10) {
        (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter____src_shm_rs_000c0390,param_7);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (uVar14 << 0x20 | 2);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      bVar2 = true;
      local_60 = uVar8 + local_78;
      local_80 = uVar10;
    }
  }
  else {
    bVar2 = true;
    uVar12 = local_38 & 0xffffffff;
    local_60 = local_78;
    uVar13 = param_7;
    local_80 = uVar8;
  }
  push_response_nobell(&local_98,local_70,param_2,uVar12,param_4,param_5,local_60,uVar13);
  lVar9 = local_98;
  do {
    if ((char)local_98 != '\0') {
LAB_00060ff5:
      return CONCAT44(uStack_8c,local_90);
    }
    local_98._1_1_ = (char)((ulonglong)lVar9 >> 8);
    bVar15 = local_98._1_1_ != '\0';
    local_98 = lVar9;
    if (bVar15) goto LAB_00060f2b;
    local_98 = 1;
    (*(code *)PTR_write_000c3be8)();
    LOCK();
    *(undefined4 *)(local_88 + 0x184) = 1;
    UNLOCK();
    LOCK();
    UNLOCK();
    push_response_nobell(&local_98,local_70,param_2,(int)uVar12,param_4,param_5,local_60,uVar13);
    if ((char)local_98 != '\0') goto LAB_00060ff5;
    if (local_98._1_1_ != '\0') break;
    uVar8 = extraout_RDX;
    local_98 = lVar7;
    local_90 = (uint)param_8;
    while( true ) {
      lVar9 = (*(code *)PTR_now_000c3c00)();
      bVar15 = lVar7 <= lVar9;
      if (lVar9 == lVar7) {
        bVar15 = (uint)param_8 <= (uint)uVar8;
      }
      if (bVar15) goto LAB_00060fa2;
      uVar10 = (*(code *)PTR_duration_since_000c3d98)();
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar10;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (uVar8 & 0xffffffff) / 1000000;
      auVar1 = auVar16 * ZEXT816(1000) + auVar1;
      uVar10 = auVar1._0_8_;
      lVar9 = auVar1._8_8_;
      uVar8 = 0x7fffffff;
      if (uVar10 < 0x7fffffff) {
        uVar8 = uVar10;
      }
      uVar5 = (uint)uVar8;
      if (lVar9 != 0) {
        uVar5 = 0x7fffffff;
      }
      if (lVar9 == 0 && uVar10 == 0) {
        uVar5 = 1;
      }
      local_54 = 1;
      uVar8 = (ulonglong)uVar5;
      local_58 = (int)lVar3;
      iVar6 = (*(code *)PTR_poll_000c3c20)();
      if (-1 < iVar6) break;
      piVar11 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      uVar14 = (ulonglong)*piVar11;
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
          &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
      lVar9 = (*(code *)PTR_get_os_functions_000c3c18)();
      cVar4 = (**(code **)(lVar9 + 8))();
      if (cVar4 != '#') {
        uVar8 = uVar14 << 0x20 | 2;
        goto LAB_00060fd3;
      }
    }
    if (iVar6 == 0) {
LAB_00060fa2:
      LOCK();
      *(undefined4 *)(local_88 + 0x184) = 0;
      UNLOCK();
      uVar14 = (*(code *)PTR_<&str>_000c3b30)(local_88,0x2d);
      return uVar14;
    }
    auVar16 = agy_bridge[64a9e9deac6c45ce]::shm::drain_eventfd((int)lVar3,1);
    uVar8 = auVar16._8_8_;
    if (auVar16._0_8_ == 1) {
LAB_00060fd3:
      LOCK();
      *(undefined4 *)(local_88 + 0x184) = 0;
      UNLOCK();
      return uVar8;
    }
    LOCK();
    *(undefined4 *)(local_88 + 0x184) = 0;
    UNLOCK();
    push_response_nobell(&local_98,local_70,param_2,(int)uVar12,param_4,param_5,local_60,uVar13);
    lVar9 = local_98;
  } while( true );
  LOCK();
  *(undefined4 *)(local_88 + 0x184) = 0;
  UNLOCK();
LAB_00060f2b:
  if ((uVar12 & 0x40000000) != 0) {
    local_98 = 1;
    (*(code *)PTR_write_000c3be8)();
  }
  uVar12 = (ulonglong)local_64;
  uVar8 = local_80;
  if (bVar2) {
    local_98 = 1;
    (*(code *)PTR_write_000c3be8)(uVar12,8);
    return 0;
  }
  goto LAB_00060ca0;
}


