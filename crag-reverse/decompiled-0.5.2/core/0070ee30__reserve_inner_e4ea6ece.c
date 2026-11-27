// 0070ee30 reserve_inner

/* <bytes[e9829e187354639b]::bytes_mut::BytesMut>::reserve_inner */

undefined8 __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut>::reserve_inner
          (ulonglong *param_1,ulonglong param_2,char param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  uVar6 = param_1[1];
  puVar2 = (ulonglong *)param_1[3];
  if (((ulonglong)puVar2 & 1) != 0) {
    uVar7 = (ulonglong)puVar2 >> 5;
    local_48 = param_1[2] + uVar7;
    if (uVar6 <= uVar7 && param_2 <= local_48 - uVar6) {
      uVar6 = *param_1;
      (*(code *)PTR_memcpy_00799008)();
      *param_1 = uVar6 - uVar7;
      param_1[3] = (ulonglong)((uint)puVar2 & 0x1f);
      param_1[2] = local_48;
      return 1;
    }
    if (param_3 == '\0') {
      return 0;
    }
    local_40 = *param_1 - uVar7;
    local_38 = uVar7 + uVar6;
    if (param_1[2] - uVar6 < param_2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,param_2,1,1);
    }
    *param_1 = local_40 + uVar7;
    param_1[2] = local_48 - uVar7;
    return 1;
  }
  uVar7 = param_2 + uVar6;
  if (CARRY8(param_2,uVar6)) {
    if (param_3 == '\0') {
      return 0;
    }
    param_3 = (*(code *)PTR_panic_fmt_007991a8)
                        (param_4,&
                                 PTR_anon_d4d3cd51d1d91a17bb767b00236b3a9b_125_llvm_17589326713533067298_00795998
                        );
LAB_0070f0be:
    if (param_3 == '\0') {
      return 0;
    }
    (*(code *)PTR_panic_fmt_007991a8)();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  if (puVar2[4] == 1) {
    uVar10 = puVar2[1];
    uVar12 = *param_1 - uVar10;
    uVar9 = uVar12 + uVar7;
    if (CARRY8(uVar12,uVar7)) goto LAB_0070f0be;
    uVar8 = *puVar2;
    if (uVar8 < uVar9) {
      if (uVar7 <= uVar8 && uVar6 <= uVar12) {
        (*(code *)PTR_memcpy_00799008)();
        *param_1 = uVar10;
        param_1[2] = *puVar2;
        return 1;
      }
      if (param_3 == '\0') {
        return 0;
      }
      uVar7 = uVar8 * 2;
      if (uVar8 * 2 < uVar9) {
        uVar7 = uVar9;
      }
      uVar6 = uVar6 + uVar12;
      puVar2[2] = uVar6;
      if (uVar8 - uVar6 < uVar7 - uVar6) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(puVar2,uVar6,uVar7 - uVar6,1,1);
        uVar8 = *puVar2;
        uVar10 = puVar2[1];
      }
      *param_1 = uVar10 + uVar12;
      param_1[2] = uVar8 - uVar12;
      return 1;
    }
    goto LAB_0070ef91;
  }
  if (param_3 == '\0') {
    return 0;
  }
  puVar1 = puVar2 + 4;
  uVar6 = puVar2[3];
  local_40 = 1;
  uVar10 = 1L << ((char)uVar6 + 9U & 0x3f);
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  if (uVar6 == 0) {
    uVar10 = uVar7;
  }
  uVar7 = uVar10;
  if ((longlong)uVar7 < 0) {
    puVar4 = (ulonglong *)0x0;
LAB_0070ef85:
    param_1 = puVar4;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0070ef91:
    param_1[2] = uVar7;
    return 1;
  }
  if (uVar7 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_40 = (*(code *)PTR___rust_alloc_00799000)();
    puVar4 = (ulonglong *)0x1;
    if (local_40 == 0) goto LAB_0070ef85;
  }
  local_38 = 0;
  uVar10 = param_1[1];
  local_48 = uVar7;
  if (uVar7 < uVar10) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_48,0,uVar10,1,1);
  }
  else {
    lVar11 = 0;
    if (uVar10 == 0) goto LAB_0070f03e;
  }
  lVar11 = local_38;
  (*(code *)PTR_memcpy_00799008)();
LAB_0070f03e:
  local_38 = lVar11 + uVar10;
  LOCK();
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    if (*puVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  param_1[3] = uVar6 * 4 + 1;
  *param_1 = local_40;
  param_1[2] = local_48;
  return 1;
}


