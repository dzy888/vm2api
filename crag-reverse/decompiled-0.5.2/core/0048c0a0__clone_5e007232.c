// 0048c0a0 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::hash::random::RandomState> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
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
  undefined *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  undefined *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    local_a8 = _DAT_0078aa80;
    lStack_a0 = _UNK_0078aa88;
    local_b8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_b0 = _UNK_0078aa78;
    goto LAB_0048c311;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12 + 1;
  uVar11 = SUB168(auVar2 * ZEXT816(0x30),0);
  if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
    uVar19 = uVar11 + uVar12 + 0x11;
    if (0x7ffffffffffffff0 < uVar19 || CARRY8(uVar11,uVar12 + 0x11)) goto LAB_0048c106;
    if (uVar19 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar13 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar13 != 0) goto LAB_0048c17d;
      uVar12 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048c111;
    }
    lVar13 = 0x10;
LAB_0048c17d:
    puVar17 = (undefined *)(uVar11 + lVar13);
    if (uVar12 < 8) {
    }
  }
  else {
LAB_0048c106:
    uVar12 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048c111:
    puVar17 = (undefined *)0x0;
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
    lVar18 = lVar13;
    pauVar20 = pauVar1;
    do {
      puVar10 = PTR_clone_00798fd0;
      if ((short)uVar16 == 0) {
        do {
          auVar2 = *pauVar15;
          pauVar20 = pauVar20 + -0x30;
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
      (*(code *)puVar10)();
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar18 + -1;
      lVar14 = ((longlong)pauVar1 - (longlong)(pauVar20 + (ulonglong)uVar3 * -3) >> 4) * -0x10;
      auVar9._8_8_ = uStack_b0;
      auVar9._0_8_ = local_b8;
      *(undefined8 *)(puVar17 + lVar14 + -0x10) = local_98;
      *(undefined8 *)((longlong)(puVar17 + lVar14 + -0x10) + 8) = uStack_90;
      *(undefined8 *)(puVar17 + lVar14 + -0x20) = local_a8;
      *(longlong *)((longlong)(puVar17 + lVar14 + -0x20) + 8) = lStack_a0;
      *(undefined1 (*) [16])(puVar17 + lVar14 + -0x30) = auVar9;
    } while (lVar18 != 0);
  }
  local_a8 = param_2[2];
  local_b8 = puVar17;
  uStack_b0 = uVar12;
  lStack_a0 = lVar13;
LAB_0048c311:
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *param_1 = local_b8;
  param_1[1] = uStack_b0;
  param_1[2] = local_a8;
  param_1[3] = lStack_a0;
  return param_1;
}


