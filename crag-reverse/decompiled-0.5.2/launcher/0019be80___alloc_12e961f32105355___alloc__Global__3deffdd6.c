// 0019be80 <alloc[12e961f32105355]::alloc::Global>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
<alloc[12e961f32105355]::alloc::Global>
          (undefined4 param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 extraout_XMM0_Da;
  
  lVar5 = _UNK_00216678;
  if (param_4 == 0) {
    param_2[2] = _DAT_00216670;
    param_2[3] = lVar5;
    lVar5 = _UNK_00216668;
    *param_2 = (longlong)PTR_DAT_00216660;
    param_2[1] = lVar5;
    return;
  }
  if (param_4 < 0xf) {
    uVar7 = 4;
    if (3 < param_4) {
      uVar7 = (ulonglong)((uint)param_4 & 8) + 8;
    }
LAB_0019bf0f:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    param_4 = SUB168(auVar1 * auVar2,8);
    uVar3 = SUB168(auVar1 * auVar2,0);
    if ((param_4 == 0) && (uVar3 < 0xfffffffffffffff1)) {
      uVar4 = uVar3 + 0xf & 0xfffffffffffffff0;
      uVar3 = uVar7 + 0x10;
      uVar8 = uVar4 + uVar3;
      param_4 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff0 < uVar8 || CARRY8(uVar4,uVar3));
      if (0x7ffffffffffffff0 >= uVar8 && !CARRY8(uVar4,uVar3)) {
        if (uVar8 == 0) {
          lVar5 = 0x10;
LAB_0019bfa7:
          lVar6 = (uVar7 & 0xfffffffffffffff8) - (uVar7 >> 3);
          if (uVar7 < 9) {
            lVar6 = uVar7 - 1;
          }
          (*(code *)PTR_memset_00219d00)(param_1,uVar3);
          *param_2 = lVar5 + uVar4;
          param_2[1] = uVar7 - 1;
          param_2[2] = lVar6;
          param_2[3] = 0;
          return;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        lVar5 = (*(code *)PTR___rust_alloc_00219c88)();
        param_1 = extraout_XMM0_Da;
        if (lVar5 != 0) goto LAB_0019bfa7;
        lVar5 = (*(code *)PTR_alloc_err_0021a340)();
        goto LAB_0019bf51;
      }
    }
  }
  else if (param_4 >> 0x3d == 0) {
    uVar7 = (param_4 * 8) / 7 - 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar7 = (0xffffffffffffffffU >> (~(byte)lVar5 & 0x3f)) + 1;
    goto LAB_0019bf0f;
  }
  uVar8 = param_4;
  lVar5 = (*(code *)PTR_capacity_overflow_0021a338)();
LAB_0019bf51:
  param_2[1] = lVar5;
  param_2[2] = uVar8;
  *param_2 = 0;
  return;
}


