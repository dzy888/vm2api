// 00393770 from

/* WARNING: Instruction at (ram,0x0039423a) overlaps instruction at (ram,0x00394239)
    */
/* <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec as
   core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>::from
    */

undefined1  [16] __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec_as_core[c0acaeba6ab4c2e0]::convert::From<&craggemini_core[66f3c71560d70857]::tools::ClientTool>>
::from(byte *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
      byte param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  ulonglong extraout_RDX;
  ulonglong extraout_RDX_00;
  uint *puVar13;
  undefined8 **ppuVar14;
  undefined1 *puVar15;
  undefined8 **ppuVar16;
  code *pcVar17;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined *puVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puStack_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined6 uStack_b6;
  undefined1 local_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  byte bStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar18 = PTR_clone_00798fd0;
  puStack_c0 = (undefined8 *)0x393792;
  (*(code *)PTR_clone_00798fd0)();
  puStack_c0 = (undefined8 *)0x39379e;
  (*(code *)puVar18)();
  puStack_c0 = (undefined8 *)0x3937ad;
  (*(code *)PTR_clone_00798fd0)();
  puStack_c0 = (undefined8 *)0x3937bf;
  (*(code *)PTR_clone_00798fd0)();
  ppuVar16 = (undefined8 **)&local_b8;
  ppuVar14 = (undefined8 **)&local_b8;
  bVar4 = *(byte *)(param_2 + 0x60);
  pcVar17 = (code *)(ulonglong)bVar4;
  bVar12 = 0x28;
  uVar8 = (ulonglong)(int)(&switchD_003937d6::switchdataD_00192328)[(longlong)pcVar17];
  bVar19 = 0xffffffffffe6dcd7 < uVar8;
  auVar26._0_8_ = (undefined8 *)((longlong)&switchD_003937d6::switchdataD_00192328 + uVar8);
  puVar7 = &local_b8;
  puVar15 = &local_b8;
  lVar10 = unaff_R12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 1:
    local_b7 = *(undefined1 *)(param_2 + 0x61);
    break;
  case 2:
    uVar11 = *(undefined8 *)(param_2 + 0x68);
    uStack_a8 = *(undefined8 *)(param_2 + 0x70);
    local_b0 = (undefined1)uVar11;
    uStack_af = (undefined4)((ulonglong)uVar11 >> 8);
    uStack_ab = (undefined2)((ulonglong)uVar11 >> 0x28);
    bStack_a9 = (byte)((ulonglong)uVar11 >> 0x38);
    break;
  case 3:
    puStack_c0 = (undefined8 *)0x393818;
    (*(code *)PTR_clone_00798fd0)();
    break;
  case 4:
    puStack_c0 = (undefined8 *)0x3937f8;
    <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
    <alloc[12e961f32105355]::alloc::Global>
              (&local_b0,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
    param_3 = extraout_RDX;
    break;
  case 5:
    if (*(longlong *)(param_2 + 0x78) == 0) {
      local_98 = 0;
      local_88 = 0;
    }
    else {
      if (*(longlong *)(param_2 + 0x68) == 0) {
        puStack_c0 = (undefined8 *)0x39390e;
        (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
        pcVar17 = (code *)invalidInstructionException();
        (*pcVar17)();
      }
      puStack_c0 = (undefined8 *)0x39383c;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone::clone_subtree::
      <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                (&local_98,*(longlong *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
      param_3 = extraout_RDX_00;
    }
    uStack_a0 = local_88;
    local_b0 = (undefined1)local_98;
    uStack_af = (undefined4)((ulonglong)local_98 >> 8);
    uStack_ab = (undefined2)((ulonglong)local_98 >> 0x28);
    bStack_a9 = (byte)((ulonglong)local_98 >> 0x38);
    uStack_a8 = local_90;
    break;
  case 6:
    do {
      puVar7 = (undefined1 *)ppuVar14;
      lVar10 = unaff_R12;
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00394250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar22._0_8_ =
             (*(code *)(*(int *)(unaff_R13 + (ulonglong)((uint)param_3 & 3) * 4) + unaff_R13))();
        auVar22._8_8_ = param_3;
        return auVar22;
      }
switchD_003937d6_caseD_8:
      ppuVar14 = (undefined8 **)puVar7;
      puVar9 = *(undefined **)(param_2 + 0x10);
      puVar18 = *(undefined **)(param_2 + 0x18);
      unaff_R12 = (longlong)puVar9 - (longlong)puVar18;
      puVar15 = (undefined1 *)ppuVar14;
      if (unaff_R12 == lVar10) goto switchD_003937d6_caseD_9;
LAB_0039421e:
      if (puVar9 == puVar18) {
        uVar11 = 0;
        goto LAB_003942ee;
      }
      param_3 = param_2 + 8;
      *(undefined8 *)((longlong)ppuVar14 + -8) = 0x39422f;
      lVar10 = (*pcVar17)();
    } while (lVar10 != 1);
    uVar11 = 2;
    goto LAB_003942ee;
  case 7:
    out((short)param_3,(int)auVar26._0_8_);
    *param_1 = *param_1 | (byte)((ulonglong)param_1 >> 8);
    if (*param_1 == 0) {
      puStack_c0 = auVar26._0_8_;
      if ((1 < (int)unaff_R12 - 2U) && (unaff_R12 != 0)) {
        puVar18 = puVar18 + -1;
        local_b0 = SUB81(puVar18,0);
        uStack_af = (undefined4)((ulonglong)puVar18 >> 8);
        uStack_ab = (undefined2)((ulonglong)puVar18 >> 0x28);
        bStack_a9 = (byte)((ulonglong)puVar18 >> 0x38);
        local_b8 = 3;
        (*(code *)PTR_drop_00799040)();
      }
      ppuVar14 = &puStack_c0;
      puVar9 = *(undefined **)(param_2 + 0x10);
      puVar18 = *(undefined **)(param_2 + 0x18);
      unaff_R12 = (longlong)puVar9 - (longlong)puVar18;
      goto LAB_0039421e;
    }
    goto LAB_003942e9;
  case 8:
    goto switchD_003937d6_caseD_8;
  case 9:
switchD_003937d6_caseD_9:
    *(undefined8 *)(puVar15 + -8) = 0x3942e6;
    puVar18 = (undefined *)(*(code *)PTR_eof_00799790)();
LAB_003942e9:
    uVar11 = 1;
LAB_003942ee:
    auVar23._8_8_ = puVar18;
    auVar23._0_8_ = uVar11;
    return auVar23;
  case 10:
    puVar13 = (uint *)((longlong)&UINT_001922b0 + uVar8 + 3);
    uVar3 = *puVar13;
    *puVar13 = *puVar13 + 0x192328;
    pbVar1 = (byte *)(param_5 + 0x3b);
    bVar4 = *pbVar1;
    bVar12 = *pbVar1;
    *pbVar1 = bVar12 + param_6 + (0xffe6dcd7 < uVar3);
    bVar20 = CARRY1((byte)param_1,(byte)unaff_R13) ||
             CARRY1((byte)param_1 + (byte)unaff_R13,
                    CARRY1(bVar4,param_6) || CARRY1(bVar12 + param_6,0xffe6dcd7 < uVar3));
    pbVar1 = (byte *)((longlong)&UINT_001922b0 + uVar8 + 3);
    bVar12 = 0x28 - *pbVar1;
    bVar19 = 0x28 < *pbVar1 || bVar12 < bVar20;
    bVar12 = bVar12 - bVar20;
    ppuVar16 = &puStack_c0;
    puStack_c0 = &local_38;
  case 0xf:
    pbVar1 = (byte *)((longlong)&UINT_00192360 + uVar8 + 3);
    bVar4 = *pbVar1;
    bVar2 = *pbVar1;
    *pbVar1 = (bVar2 - bVar12) - bVar19;
    *(char **)((longlong)ppuVar16 + -8) = (char *)(param_2 + 0x48);
    pcVar17[0x19] =
         (code)(((char)pcVar17[0x19] - (char)(param_3 >> 8)) -
               (bVar4 < bVar12 || (byte)(bVar2 - bVar12) < bVar19));
    *(undefined8 *)((longlong)ppuVar16 + -0x10) = 0x394ba8;
    uVar11 = (*(code *)PTR_bcmp_00799020)();
    auVar6._1_7_ = (int7)((ulonglong)uVar11 >> 8);
    auVar6[0] = (int)uVar11 == 0;
    auVar6._8_8_ = param_3;
    return auVar6;
  case 0xb:
    pcVar17 = (code *)swi(3);
    auVar24._0_8_ = (*pcVar17)();
    auVar24._8_8_ = param_3;
    return auVar24;
  case 0xc:
    do {
      puStack_c0 = (undefined8 *)0x394b5b;
      auVar26 = <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                ::eq(param_2,param_1);
      bVar19 = puVar18 != (undefined *)0x0;
      puVar18 = puVar18 + -1;
      if (auVar26[0] == '\0') {
        return auVar26;
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
    } while (bVar19);
    return auVar26;
  case 0xd:
    auVar26._8_8_ = param_3;
    return auVar26;
  case 0xe:
    if (*(char *)(param_2 + 0x48) == '(') {
      puVar13 = &switchD_00394b22::switchdataD_00192350;
                    /* WARNING: Could not recover jumptable at 0x00394b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar25._0_8_ =
           (*(code *)((longlong)&switchD_00394b22::switchdataD_00192350 +
                     (longlong)iRam00000000007daff0))
                     ((code *)((longlong)&switchD_00394b22::switchdataD_00192350 +
                              (longlong)iRam00000000007daff0));
      auVar25._8_8_ = puVar13;
      return auVar25;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_3;
    return auVar5 << 0x40;
  }
  *(undefined8 *)(param_1 + 0x10) = local_70;
  *(undefined8 *)param_1 = local_80;
  *(undefined8 *)(param_1 + 8) = uStack_78;
  *(undefined8 *)(param_1 + 0x28) = local_58;
  *(undefined8 *)(param_1 + 0x18) = local_68;
  *(undefined8 *)(param_1 + 0x20) = uStack_60;
  *(undefined8 *)(param_1 + 0x40) = local_40;
  *(undefined8 *)(param_1 + 0x30) = local_50;
  *(undefined8 *)(param_1 + 0x38) = uStack_48;
  *(undefined8 *)(param_1 + 0x48) = local_38;
  *(undefined8 *)(param_1 + 0x50) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = local_28;
  param_1[0x60] = bVar4;
  *(ulonglong *)(param_1 + 0x61) = CONCAT17(local_b0,CONCAT61(uStack_b6,local_b7));
  *(undefined4 *)(param_1 + 0x69) = uStack_af;
  *(undefined2 *)(param_1 + 0x6d) = uStack_ab;
  param_1[0x6f] = bStack_a9;
  *(undefined8 *)(param_1 + 0x70) = uStack_a8;
  *(undefined8 *)(param_1 + 0x78) = uStack_a0;
  auVar21._8_8_ = param_3;
  auVar21._0_8_ = param_1;
  return auVar21;
}


