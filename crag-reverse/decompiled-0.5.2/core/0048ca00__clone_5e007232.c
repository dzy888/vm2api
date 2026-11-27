// 0048ca00 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::ResponseBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
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
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined *puVar20;
  longlong lVar21;
  undefined *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar13 = param_2[1];
  if (uVar13 == 0) {
    local_b8 = _DAT_0078aa80;
    lStack_b0 = _UNK_0078aa88;
    local_c8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    uStack_c0 = _UNK_0078aa78;
    goto LAB_0048cd03;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar13 + 1;
  if (SUB168(auVar2 * ZEXT816(0x58),8) == 0) {
    uVar12 = SUB168(auVar2 * ZEXT816(0x58),0) + 0xfU & 0xfffffffffffffff0;
    uVar18 = uVar12 + uVar13 + 0x11;
    if (0x7ffffffffffffff0 < uVar18 || CARRY8(uVar12,uVar13 + 0x11)) goto LAB_0048ca6a;
    if (uVar18 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar17 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar17 != 0) goto LAB_0048caf2;
      uVar13 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048ca75;
    }
    lVar17 = 0x10;
LAB_0048caf2:
    puVar20 = (undefined *)(lVar17 + uVar12);
    if (uVar13 < 8) {
    }
  }
  else {
LAB_0048ca6a:
    uVar13 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048ca75:
    puVar20 = (undefined *)0x0;
  }
  pauVar1 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)();
  lStack_b0 = param_2[3];
  if (lStack_b0 != 0) {
    auVar2 = *pauVar1;
    uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
    pauVar16 = pauVar1 + 1;
    pauVar15 = pauVar1;
    lVar17 = lStack_b0;
    do {
      puVar11 = PTR_clone_00798fd0;
      if ((short)uVar19 == 0) {
        do {
          auVar2 = *pauVar16;
          pauVar15 = pauVar15 + -0x58;
          pauVar16 = pauVar16 + 1;
          uVar19 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
        } while (uVar19 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      (*(code *)PTR_clone_00798fd0)();
      lVar21 = (ulonglong)uVar3 * -0x58 + (longlong)pauVar15;
      (*(code *)puVar11)();
      (*(code *)puVar11)();
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar17 + -1;
      uVar9 = *(undefined8 *)(lVar21 + -0x10);
      lVar14 = ((longlong)pauVar1 - lVar21 >> 3) * -8;
      *(undefined8 *)(puVar20 + lVar14 + -8) = *(undefined8 *)(lVar21 + -8);
      *(undefined8 *)(puVar20 + lVar14 + -0x18) = local_38;
      *(undefined8 *)((longlong)(puVar20 + lVar14 + -0x18) + 8) = uVar9;
      auVar10._8_8_ = uStack_c0;
      auVar10._0_8_ = local_c8;
      *(undefined8 *)(puVar20 + lVar14 + -0x28) = local_48;
      *(undefined8 *)((longlong)(puVar20 + lVar14 + -0x28) + 8) = uStack_40;
      *(undefined8 *)(puVar20 + lVar14 + -0x38) = uStack_68;
      *(undefined8 *)((longlong)(puVar20 + lVar14 + -0x38) + 8) = local_60;
      *(undefined8 *)(puVar20 + lVar14 + -0x48) = local_b8;
      *(undefined8 *)((longlong)(puVar20 + lVar14 + -0x48) + 8) = local_70;
      *(undefined1 (*) [16])(puVar20 + lVar14 + -0x58) = auVar10;
    } while (lVar17 != 0);
  }
  local_b8 = param_2[2];
  local_c8 = puVar20;
  uStack_c0 = uVar13;
LAB_0048cd03:
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *param_1 = local_c8;
  param_1[1] = uStack_c0;
  param_1[2] = local_b8;
  param_1[3] = lStack_b0;
  return param_1;
}


