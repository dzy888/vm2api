// 0048da70 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, (),
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  undefined *puVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar17;
  undefined *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar9 = param_2[1];
  if (uVar9 == 0) {
    local_98 = _DAT_0078aa80;
    lStack_90 = _UNK_0078aa88;
    local_a8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_a0 = _UNK_0078aa78;
    goto LAB_0048dcca;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9 + 1;
  if (SUB168(auVar2 * ZEXT816(0x18),8) == 0) {
    uVar8 = SUB168(auVar2 * ZEXT816(0x18),0) + 0xfU & 0xfffffffffffffff0;
    uVar10 = uVar9 + 0x11;
    if (0x7ffffffffffffff0 < uVar8 + uVar10 || CARRY8(uVar8,uVar10)) goto LAB_0048dadb;
    if (uVar8 + uVar10 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar14 = (*(code *)PTR___rust_alloc_00799000)();
      uVar17 = extraout_XMM0_Qa_00;
      if (lVar14 != 0) goto LAB_0048db69;
      uVar9 = (*(code *)PTR_alloc_err_00799998)();
      uVar17 = extraout_XMM0_Qa_01;
      goto LAB_0048dae6;
    }
    lVar14 = 0x10;
    uVar17 = uVar5;
LAB_0048db69:
    puVar16 = (undefined *)(lVar14 + uVar8);
    if (uVar9 < 8) {
    }
  }
  else {
LAB_0048dadb:
    uVar9 = (*(code *)PTR_capacity_overflow_00799958)();
    uVar17 = extraout_XMM0_Qa;
LAB_0048dae6:
    uVar10 = uVar9 + 0x11;
    puVar16 = (undefined *)0x0;
  }
  pauVar1 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)(uVar17,uVar10);
  lStack_90 = param_2[3];
  if (lStack_90 != 0) {
    auVar2 = *pauVar1;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
    pauVar13 = pauVar1;
    lVar14 = lStack_90;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar2 = *pauVar15;
          pauVar13 = pauVar13 + -0x18;
          pauVar15 = pauVar15 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
        } while (uVar11 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      (*(code *)PTR_clone_00798fd0)();
      uVar11 = uVar11 - 1 & uVar11;
      lVar12 = (longlong)((longlong)pauVar1 - ((longlong)pauVar13 + (ulonglong)uVar3 * -0x18)) >> 3;
      *(undefined8 *)(puVar16 + lVar12 * -8 + -8) = local_98;
      auVar7._8_8_ = uStack_a0;
      auVar7._0_8_ = local_a8;
      *(undefined1 (*) [16])(puVar16 + lVar12 * -8 + -0x18) = auVar7;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  local_98 = param_2[2];
  local_a8 = puVar16;
  uStack_a0 = uVar9;
LAB_0048dcca:
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  param_1[2] = local_98;
  param_1[3] = lStack_90;
  return param_1;
}


