// 0048cda0 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  undefined *puVar20;
  longlong lVar21;
  undefined *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    local_88 = _DAT_0078aa80;
    lStack_80 = _UNK_0078aa88;
    local_98 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_90 = _UNK_0078aa78;
    goto LAB_0048d037;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12 + 1;
  if (SUB168(auVar2 * ZEXT816(0x38),8) == 0) {
    uVar11 = SUB168(auVar2 * ZEXT816(0x38),0) + 0xfU & 0xfffffffffffffff0;
    uVar18 = uVar11 + uVar12 + 0x11;
    if (0x7ffffffffffffff0 < uVar18 || CARRY8(uVar11,uVar12 + 0x11)) goto LAB_0048ce0d;
    if (uVar18 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar13 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar13 != 0) goto LAB_0048ce8f;
      uVar12 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048ce18;
    }
    lVar13 = 0x10;
LAB_0048ce8f:
    puVar20 = (undefined *)(lVar13 + uVar11);
    if (uVar12 < 8) {
    }
  }
  else {
LAB_0048ce0d:
    uVar12 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048ce18:
    puVar20 = (undefined *)0x0;
  }
  pauVar1 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)();
  lVar13 = param_2[3];
  if (lVar13 != 0) {
    auVar2 = *pauVar1;
    uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    pauVar15 = pauVar1 + 1;
    lVar17 = lVar13;
    pauVar19 = pauVar1;
    do {
      puVar10 = PTR_clone_00798fd0;
      if ((short)uVar16 == 0) {
        do {
          auVar2 = *pauVar15;
          pauVar19 = pauVar19 + -0x38;
          pauVar15 = pauVar15 + 1;
          uVar16 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar16 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      (*(code *)PTR_clone_00798fd0)();
      lVar21 = (ulonglong)uVar3 * -0x38 + (longlong)pauVar19;
      (*(code *)puVar10)();
      uVar16 = uVar16 - 1 & uVar16;
      lVar17 = lVar17 + -1;
      lVar14 = ((longlong)pauVar1 - lVar21 >> 3) * -8;
      *(undefined8 *)(puVar20 + lVar14 + -8) = *(undefined8 *)(lVar21 + -8);
      auVar9._8_8_ = uStack_90;
      auVar9._0_8_ = local_98;
      *(undefined8 *)(puVar20 + lVar14 + -0x18) = local_78;
      *(undefined8 *)((longlong)(puVar20 + lVar14 + -0x18) + 8) = uStack_70;
      *(undefined8 *)(puVar20 + lVar14 + -0x28) = local_88;
      *(longlong *)((longlong)(puVar20 + lVar14 + -0x28) + 8) = lStack_80;
      *(undefined1 (*) [16])(puVar20 + lVar14 + -0x38) = auVar9;
    } while (lVar17 != 0);
  }
  local_88 = param_2[2];
  local_98 = puVar20;
  uStack_90 = uVar12;
  lStack_80 = lVar13;
LAB_0048d037:
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *param_1 = local_98;
  param_1[1] = uStack_90;
  param_1[2] = local_88;
  param_1[3] = lStack_80;
  return param_1;
}


