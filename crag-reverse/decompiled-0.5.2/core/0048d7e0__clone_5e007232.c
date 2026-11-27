// 0048d7e0 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, usize,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,usize,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar17;
  undefined *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[1];
  if (uVar7 == 0) {
    local_a8 = _DAT_0078aa80;
    lStack_a0 = _UNK_0078aa88;
    local_b8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_b0 = _UNK_0078aa78;
    goto LAB_0048da09;
  }
  if (uVar7 + 1 >> 0x3b == 0) {
    uVar9 = (uVar7 + 1) * 0x20;
    uVar8 = uVar7 + 0x11;
    if (0x7ffffffffffffff0 < uVar9 + uVar8 || CARRY8(uVar9,uVar8)) goto LAB_0048d844;
    if (uVar9 + uVar8 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = (*(code *)PTR___rust_alloc_00799000)();
      uVar17 = extraout_XMM0_Qa_00;
      if (lVar10 != 0) goto LAB_0048d8bd;
      uVar7 = (*(code *)PTR_alloc_err_00799998)();
      uVar17 = extraout_XMM0_Qa_01;
      goto LAB_0048d84f;
    }
    lVar10 = 0x10;
    uVar17 = uVar5;
LAB_0048d8bd:
    puVar12 = (undefined *)(lVar10 + uVar9);
    if (uVar7 < 8) {
    }
  }
  else {
LAB_0048d844:
    uVar7 = (*(code *)PTR_capacity_overflow_00799958)();
    uVar17 = extraout_XMM0_Qa;
LAB_0048d84f:
    uVar8 = uVar7 + 0x11;
    puVar12 = (undefined *)0x0;
  }
  pauVar2 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)(uVar17,uVar8);
  lStack_a0 = param_2[3];
  if (lStack_a0 != 0) {
    auVar1 = *pauVar2;
    uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar15 = pauVar2 + 1;
    lVar10 = lStack_a0;
    pauVar13 = pauVar2;
    do {
      if ((short)uVar16 == 0) {
        do {
          auVar1 = *pauVar15;
          pauVar13 = pauVar13 + -0x20;
          pauVar15 = pauVar15 + 1;
          uVar16 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar16 == 0);
      }
      iVar3 = 0;
      for (uVar4 = uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      lVar11 = (longlong)pauVar13 - (ulonglong)(uint)(iVar3 << 5);
      (*(code *)PTR_clone_00798fd0)();
      uVar16 = uVar16 - 1 & uVar16;
      lVar14 = (longlong)pauVar2 - lVar11;
      uVar17 = *(undefined8 *)(lVar11 + -8);
      *(undefined **)(puVar12 + (-0x20 - lVar14)) = local_b8;
      *(ulonglong *)(puVar12 + (-0x18 - lVar14)) = uStack_b0;
      auVar1._8_8_ = uVar17;
      auVar1._0_8_ = local_a8;
      *(undefined1 (*) [16])(puVar12 + (-0x10 - lVar14)) = auVar1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  local_a8 = param_2[2];
  local_b8 = puVar12;
  uStack_b0 = uVar7;
LAB_0048da09:
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  *param_1 = local_b8;
  param_1[1] = uStack_b0;
  param_1[2] = local_a8;
  param_1[3] = lStack_a0;
  return param_1;
}


