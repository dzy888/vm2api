// 001c0350 proc_block

/* <polyval[1df58e1208c50bb2]::backend::clmul::Polyval as
   universal_hash[1e98f6c6ee470aee]::UhfBackend>::proc_block */

void __rustcall
<polyval[1df58e1208c50bb2]::backend::clmul::Polyval_as_universal_hash[1e98f6c6ee470aee]::UhfBackend>
::proc_block(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  
  auVar9 = *param_2 ^ param_1[1];
  auVar1 = *param_1;
  auVar11._0_8_ = auVar1._8_8_;
  auVar11._8_4_ = auVar1._8_4_;
  auVar11._12_4_ = auVar1._12_4_;
  auVar12._0_8_ = auVar9._8_8_;
  auVar12._8_4_ = auVar9._8_4_;
  auVar12._12_4_ = auVar9._12_4_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar12 ^ auVar9,0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = SUB168(auVar11 ^ auVar1,0);
  auVar14 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar14 = auVar14 ^ auVar5 << uVar2;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar9._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar1._0_8_;
  auVar1 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar1 = auVar1 ^ auVar9 << uVar2;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar12._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar11._0_8_;
  auVar3 = (undefined1  [16])0x0;
  for (uVar2 = 0; uVar2 < 0x40; uVar2 = uVar2 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar2) != (undefined1  [16])0x0) {
      auVar3 = auVar3 ^ auVar7 << uVar2;
    }
  }
  auVar14 = auVar1 ^ auVar3 ^ auVar14;
  uVar10 = auVar1._0_8_;
  uVar8 = uVar10 << 0x3f ^ auVar1._8_8_ ^ auVar14._0_8_;
  uVar13 = uVar10 << 0x39 ^ uVar10 << 0x3e ^ uVar8;
  *(ulonglong *)param_1[1] =
       auVar14._8_8_ ^ uVar10 ^ auVar3._0_8_ ^
       uVar8 << 0x39 ^ uVar8 << 0x3f ^ uVar8 << 0x3e ^ uVar10 >> 7 ^ uVar10 >> 2 ^ uVar10 >> 1;
  *(ulonglong *)(param_1[1] + 8) = uVar13 >> 7 ^ uVar13 >> 1 ^ uVar13 >> 2 ^ auVar3._8_8_ ^ uVar13;
  return;
}


