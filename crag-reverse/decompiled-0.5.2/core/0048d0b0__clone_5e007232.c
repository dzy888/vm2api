// 0048d0b0 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined *puVar19;
  longlong lVar20;
  undefined *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined7 uStack_7f;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 5);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar10 = param_2[1];
  if (uVar10 == 0) {
    local_a8 = _DAT_0078aa80;
    lStack_a0 = _UNK_0078aa88;
    local_b8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_b0 = _UNK_0078aa78;
    goto LAB_0048d37b;
  }
  if (uVar10 + 1 >> 0x3a == 0) {
    uVar12 = (uVar10 + 1) * 0x40;
    uVar16 = uVar12 + uVar10 + 0x11;
    if (0x7ffffffffffffff0 < uVar16 || CARRY8(uVar12,uVar10 + 0x11)) goto LAB_0048d116;
    if (uVar16 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar14 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar14 != 0) goto LAB_0048d192;
      uVar10 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048d121;
    }
    lVar14 = 0x10;
LAB_0048d192:
    puVar19 = (undefined *)(lVar14 + uVar12);
    if (uVar10 < 8) {
    }
  }
  else {
LAB_0048d116:
    uVar10 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048d121:
    puVar19 = (undefined *)0x0;
  }
  pauVar3 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)();
  lStack_a0 = param_2[3];
  if (lStack_a0 != 0) {
    auVar1 = *pauVar3;
    uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar13 = pauVar3 + 1;
    lVar14 = lStack_a0;
    pauVar15 = pauVar3;
    do {
      if ((short)uVar18 == 0) {
        do {
          auVar1 = *pauVar13;
          pauVar15 = pauVar15 + -0x40;
          pauVar13 = pauVar13 + 1;
          uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar18 == 0);
      }
      iVar4 = 0;
      for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      lVar20 = (longlong)pauVar15 - (ulonglong)(uint)(iVar4 << 6);
      (*(code *)PTR_clone_00798fd0)();
      uVar2 = *(undefined1 *)(lVar20 + -8);
      if (*(longlong *)(lVar20 + -0x28) == -1) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_58 = local_40;
        uStack_50 = uStack_38;
        uVar11 = local_48;
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar14 = lVar14 + -1;
      lVar17 = (longlong)pauVar3 - lVar20;
      *(undefined8 *)(puVar19 + (-0x10 - lVar17)) = *(undefined8 *)(lVar20 + -0x10);
      *(ulonglong *)(puVar19 + (-8 - lVar17)) = CONCAT71(uStack_7f,uVar2);
      auVar1._8_8_ = uStack_b0;
      auVar1._0_8_ = local_b8;
      *(undefined8 *)(puVar19 + (-0x20 - lVar17)) = local_58;
      *(undefined8 *)(puVar19 + (-0x18 - lVar17)) = uStack_50;
      *(undefined8 *)(puVar19 + (-0x30 - lVar17)) = local_a8;
      *(undefined8 *)(puVar19 + (-0x28 - lVar17)) = uVar11;
      *(undefined1 (*) [16])(puVar19 + (-0x40 - lVar17)) = auVar1;
    } while (lVar14 != 0);
  }
  local_a8 = param_2[2];
  local_b8 = puVar19;
  uStack_b0 = uVar10;
LAB_0048d37b:
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  *param_1 = local_b8;
  param_1[1] = uStack_b0;
  param_1[2] = local_a8;
  param_1[3] = lStack_a0;
  return param_1;
}


