// 0048d3f0 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined *puVar21;
  longlong lVar22;
  undefined *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 5);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar14 = param_2[1];
  if (uVar14 == 0) {
    local_c8 = _DAT_0078aa80;
    lStack_c0 = _UNK_0078aa88;
    local_d8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_d0 = _UNK_0078aa78;
    goto LAB_0048d738;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar14 + 1;
  if (SUB168(auVar4 * ZEXT816(0x58),8) == 0) {
    uVar13 = SUB168(auVar4 * ZEXT816(0x58),0) + 0xfU & 0xfffffffffffffff0;
    uVar18 = uVar13 + uVar14 + 0x11;
    if (0x7ffffffffffffff0 < uVar18 || CARRY8(uVar13,uVar14 + 0x11)) goto LAB_0048d45a;
    if (uVar18 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar19 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar19 != 0) goto LAB_0048d4e2;
      uVar14 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048d465;
    }
    lVar19 = 0x10;
LAB_0048d4e2:
    puVar21 = (undefined *)(lVar19 + uVar13);
    if (uVar14 < 8) {
    }
  }
  else {
LAB_0048d45a:
    uVar14 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048d465:
    puVar21 = (undefined *)0x0;
  }
  pauVar2 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)();
  lStack_c0 = param_2[3];
  if (lStack_c0 != 0) {
    auVar4 = *pauVar2;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
    pauVar16 = pauVar2 + 1;
    lVar19 = lStack_c0;
    pauVar20 = pauVar2;
    do {
      puVar12 = PTR_clone_00798fd0;
      if ((short)uVar17 == 0) {
        do {
          auVar4 = *pauVar16;
          pauVar20 = pauVar20 + -0x58;
          pauVar16 = pauVar16 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      (*(code *)PTR_clone_00798fd0)();
      lVar22 = (ulonglong)uVar5 * -0x58 + (longlong)pauVar20;
      (*(code *)puVar12)();
      uVar1 = *(undefined1 *)(lVar22 + -8);
      if (*(longlong *)(lVar22 + -0x28) == -1) {
        uVar15 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_58 = local_40;
        uStack_50 = uStack_38;
        uVar15 = local_48;
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar19 + -1;
      uVar3 = *(undefined8 *)(lVar22 + -0x10);
      lVar22 = ((longlong)pauVar2 - lVar22 >> 3) * -8;
      *(ulonglong *)(puVar21 + lVar22 + -8) = CONCAT71(uStack_87,uVar1);
      *(undefined8 *)(puVar21 + lVar22 + -0x18) = uStack_50;
      *(undefined8 *)((longlong)(puVar21 + lVar22 + -0x18) + 8) = uVar3;
      auVar11._8_8_ = uStack_d0;
      auVar11._0_8_ = local_d8;
      *(undefined8 *)(puVar21 + lVar22 + -0x28) = uVar15;
      *(undefined8 *)((longlong)(puVar21 + lVar22 + -0x28) + 8) = local_58;
      *(undefined8 *)(puVar21 + lVar22 + -0x38) = uStack_78;
      *(undefined8 *)((longlong)(puVar21 + lVar22 + -0x38) + 8) = local_70;
      *(undefined8 *)(puVar21 + lVar22 + -0x48) = local_c8;
      *(undefined8 *)((longlong)(puVar21 + lVar22 + -0x48) + 8) = local_80;
      *(undefined1 (*) [16])(puVar21 + lVar22 + -0x58) = auVar11;
    } while (lVar19 != 0);
  }
  local_c8 = param_2[2];
  local_d8 = puVar21;
  uStack_d0 = uVar14;
LAB_0048d738:
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar10;
  *param_1 = local_d8;
  param_1[1] = uStack_d0;
  param_1[2] = local_c8;
  param_1[3] = lStack_c0;
  return param_1;
}


