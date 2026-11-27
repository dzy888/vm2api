// 006c8aa0 select

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>::select
    */

void __rustcall
<curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
::select(undefined1 (*param_1) [16],longlong param_2)

{
  undefined1 auVar1 [12];
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar13;
  undefined1 auVar12 [16];
  ulonglong uVar14;
  undefined1 auVar15 [16];
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_78 = ZEXT816(0);
  local_98 = ZEXT416(DAT_0018e028);
  uVar7 = 0;
  lVar4 = 0;
  uVar8 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  auVar15 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_88 = local_98;
  do {
    bVar2 = (*(code *)PTR_<u8>_00799268)();
    uVar3 = -(ulonglong)bVar2;
    uVar8 = (*(ulonglong *)(param_2 + 0x20 + lVar4) ^ uVar8) & uVar3 ^ uVar8;
    auVar18._8_4_ = (int)uVar3;
    auVar18._0_8_ = uVar3;
    auVar18._12_4_ = (int)(uVar3 >> 0x20);
    local_98 = *(undefined1 (*) [16])(param_2 + lVar4) & auVar18 | ~auVar18 & local_98;
    local_88 = *(undefined1 (*) [16])(param_2 + 0x28 + lVar4) & auVar18 | ~auVar18 & local_88;
    local_a8 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar4) & auVar18 | ~auVar18 & local_a8;
    local_78 = *(undefined1 (*) [16])(param_2 + 0x38 + lVar4) & auVar18 | ~auVar18 & local_78;
    uVar7 = (*(ulonglong *)(param_2 + 0x48 + lVar4) ^ uVar7) & uVar3 ^ uVar7;
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar4) & auVar18 | ~auVar18 & auVar15;
    local_68 = *(undefined1 (*) [16])(param_2 + 0x58 + lVar4) & auVar18 | ~auVar18 & local_68;
    local_58 = ~auVar18 & local_58 | *(undefined1 (*) [16])(param_2 + 0x68 + lVar4) & auVar18;
    lVar4 = lVar4 + 0x78;
  } while (lVar4 != 0x3c0);
  uVar5 = auVar15._0_8_;
  bVar2 = (*(code *)PTR_<u8>_00799268)();
  lStack_b0 = auVar15._8_8_;
  uVar14 = _DAT_001833f0 - uVar5;
  uVar16 = _UNK_001833f8 - lStack_b0;
  uVar11 = _DAT_001848c0 - local_68._0_8_;
  uVar13 = _UNK_001848c8 - local_68._8_8_;
  uVar9 = _DAT_001848c0 - local_58._0_8_;
  uVar10 = _UNK_001848c8 - local_58._8_8_;
  uVar3 = -(ulonglong)bVar2;
  uVar6 = (uVar7 ^ uVar8) & uVar3;
  auVar17._8_4_ = (int)uVar3;
  auVar17._0_8_ = uVar3;
  auVar17._12_4_ = (int)(uVar3 >> 0x20);
  auVar18 = (local_88 ^ local_98) & auVar17;
  *param_1 = local_98 ^ auVar18;
  auVar15 = (local_78 ^ local_a8) & auVar17;
  param_1[1] = local_a8 ^ auVar15;
  *(ulonglong *)param_1[2] = uVar8 ^ uVar6;
  *(undefined1 (*) [16])(param_1[2] + 8) = auVar18 ^ local_88;
  *(undefined1 (*) [16])(param_1[3] + 8) = auVar15 ^ local_78;
  *(ulonglong *)(param_1[4] + 8) = uVar6 ^ uVar7;
  *(ulonglong *)param_1[5] =
       ((uVar10 >> 0x33) * 0x13 + (0x7fffffffffed0 - uVar5 & 0x7ffffffffffff) ^ uVar5) & uVar3 ^
       uVar5;
  uVar8 = _UNK_00183e28;
  uVar7 = _DAT_00183e20;
  auVar19._0_8_ = (uVar11 & _DAT_00183e20) + (uVar14 >> 0x33);
  auVar19._8_8_ = (uVar13 & _UNK_00183e28) + (uVar16 >> 0x33);
  *(undefined1 (*) [16])(param_1[5] + 8) = ~auVar17 & local_68 | auVar19 & auVar17;
  auVar1._4_8_ = uVar13;
  auVar1._0_4_ = (int)(uVar13 >> 0x20);
  auVar12._0_8_ = auVar1._0_8_ << 0x20;
  auVar12._8_4_ = (int)uVar9;
  auVar12._12_4_ = (int)(uVar9 >> 0x20);
  auVar15._0_8_ = (uVar9 & uVar7) + ((auVar1._0_8_ & 0xffffffff) >> 0x13);
  auVar15._8_8_ = (uVar10 & uVar8) + (auVar12._8_8_ >> 0x33);
  *(undefined1 (*) [16])(param_1[6] + 8) = ~auVar17 & local_58 | auVar15 & auVar17;
  return;
}


