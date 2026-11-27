// 00635c90 eq

/* WARNING: Instruction at (ram,0x006371f9) overlaps instruction at (ram,0x006371f7)
    */
/* WARNING: Control flow encountered bad instruction data */
/* <serde_json[dc3825464c436029]::value::Value as core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq */

int * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
          (byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_RAX;
  uint7 uVar8;
  int *piVar6;
  undefined8 uVar7;
  byte bVar9;
  longlong unaff_RBX;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  undefined1 unaff_R12B;
  undefined8 *unaff_R13;
  undefined8 unaff_R14;
  longlong lVar12;
  undefined8 unaff_R15;
  longlong lVar13;
  bool bVar14;
  undefined8 unaff_retaddr;
  undefined1 uStack0000000000000008;
  undefined1 uStack0000000000000009;
  undefined1 uStack000000000000000a;
  undefined1 uStack000000000000000b;
  undefined2 uStack000000000000000c;
  undefined2 uStack000000000000000e;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  byte in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined1 uStack0000000000000079;
  undefined4 uStack000000000000007a;
  undefined2 uStack000000000000007e;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 uStack_20;
  
  puVar11 = (undefined8 *)((longlong)register0x00000020 + -0x18);
  bVar2 = *param_1;
  if (bVar2 != *param_2) {
    return (int *)0x0;
  }
  uVar8 = (uint7)((ulonglong)in_RAX >> 8);
  piVar6 = (int *)CONCAT71(uVar8,1);
  bVar9 = (char)(&switchD_00635cb2::switchdataD_0019fb5c)[bVar2] + 0x5c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    goto switchD_00635cb2_caseD_0;
  case 1:
    bVar14 = param_1[1] == param_2[1];
    break;
  case 2:
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
      return (int *)0x0;
    }
    if ((int)*(longlong *)(param_1 + 8) == 2) {
      return (int *)(ulonglong)
                    (-(uint)(*(double *)(param_2 + 0x10) == *(double *)(param_1 + 0x10)) & 1);
    }
    bVar14 = *(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10);
    break;
  case 3:
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
      return (int *)0x0;
    }
    uStack_20 = (undefined *)0x635d38;
    iVar5 = (*(code *)PTR_bcmp_00799020)();
    bVar14 = iVar5 == 0;
    break;
  case 4:
    lVar13 = *(longlong *)(param_1 + 0x18);
    if (lVar13 != *(longlong *)(param_2 + 0x18)) {
      return (int *)0x0;
    }
    if (lVar13 == 0) {
      return piVar6;
    }
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar12 = *(longlong *)(param_1 + 0x10);
    do {
      lVar13 = lVar13 + -1;
      uStack_20 = &UNK_00635ceb;
      piVar6 = (int *)eq(lVar12,lVar10);
      if ((char)piVar6 == '\0') {
        return piVar6;
      }
      lVar10 = lVar10 + 0x20;
      lVar12 = lVar12 + 0x20;
    } while (lVar13 != 0);
    return piVar6;
  case 5:
    piVar6 = (int *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                    ::eq(param_1 + 8,param_2 + 8);
    return piVar6;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    *(char *)piVar6 = (char)*piVar6 + '\x01';
    pcVar1 = (char *)((longlong)piVar6 * 3 + 0x44);
    *pcVar1 = *pcVar1 + -5;
                    /* WARNING: Could not recover jumptable at 0x006371aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar6 = (int *)(*(code *)((longlong)&switchD_006371aa::switchdataD_0019fb74 +
                              (longlong)
                              (int)(&switchD_006371aa::switchdataD_0019fb74)
                                   [(longlong)register0x00000020 - 0x18U & 0xffffffff]))();
    return piVar6;
  case 8:
    if ((int)(&switchD_00635cb2::switchdataD_0019fb5c)[bVar2] < -0x19fb5c) {
      uStack_20 = (undefined *)0x63723d;
      (*(code *)PTR_clone_00798fd0)();
      goto switchD_006371aa_caseD_0;
    }
    *(byte *)((longlong)piVar6 + -0x75) = *(byte *)((longlong)piVar6 + -0x75) | bVar9;
    *piVar6 = *piVar6 + (int)piVar6;
    *(char *)((longlong)piVar6 + -0x75) = *(char *)((longlong)piVar6 + -0x75) + bVar9;
    puVar11 = &uStack_20;
    goto code_r0x00637217;
  case 9:
    *piVar6 = *piVar6 + (int)piVar6;
code_r0x00637217:
    *(undefined8 **)((longlong)puVar11 + -8) = unaff_RBP;
    uVar3 = in(0xfb5c);
    *(undefined4 *)param_1 = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    *param_1 = *param_2;
    piVar6 = (int *)((ulonglong)uVar8 * 0x100);
    *piVar6 = *piVar6 + (int)piVar6;
    param_1[1] = param_1[1] + bVar9;
    *(char *)piVar6 = (char)*piVar6;
    *(char *)((longlong)piVar6 + -0x39) = *(char *)((longlong)piVar6 + -0x39) + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
switchD_006371aa_caseD_0:
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),unaff_R12B);
    uStack0000000000000079 = (undefined1)((ulonglong)unaff_RBX >> 8);
    uStack000000000000007a = (undefined4)((ulonglong)unaff_RBX >> 0x10);
    uStack000000000000007e = (undefined2)((ulonglong)unaff_RBX >> 0x30);
    if (*(longlong *)(unaff_RBX + 0x130) == -1) {
      uVar7 = 0xffffffffffffffff;
    }
    else {
      uStack_20 = (undefined *)0x6372fe;
      (*(code *)PTR_clone_00798fd0)();
      in_stack_000001d8 = unaff_R14;
      in_stack_000001e0 = unaff_R15;
    }
    uVar3 = *(undefined4 *)(unaff_RBX + 0x148);
    uVar4 = *(undefined4 *)(unaff_RBX + 0x14c);
    *unaff_R13 = in_stack_00000170;
    unaff_R13[1] = in_stack_00000168;
    unaff_R13[4] = in_stack_00000190;
    unaff_R13[2] = in_stack_00000180;
    unaff_R13[3] = in_stack_00000188;
    unaff_R13[5] = in_stack_00000030;
    unaff_R13[6] = in_stack_000000e0;
    unaff_R13[7] = in_stack_00000160;
    unaff_R13[8] = in_stack_00000058;
    unaff_R13[9] = in_stack_000000d8;
    unaff_R13[10] = in_stack_00000158;
    unaff_R13[0xb] = in_stack_00000028;
    unaff_R13[0xc] = in_stack_000000d0;
    unaff_R13[0xd] = in_stack_00000150;
    unaff_R13[0xe] = in_stack_00000050;
    unaff_R13[0xf] = in_stack_000000c8;
    unaff_R13[0x10] = in_stack_00000148;
    unaff_R13[0x11] = in_stack_00000020;
    unaff_R13[0x12] = in_stack_000000c0;
    unaff_R13[0x13] = in_stack_00000140;
    unaff_R13[0x14] = in_stack_00000048;
    unaff_R13[0x15] = in_stack_000000b8;
    unaff_R13[0x16] = in_stack_00000138;
    unaff_R13[0x17] = in_stack_00000018;
    unaff_R13[0x18] = in_stack_000000b0;
    unaff_R13[0x19] = in_stack_00000130;
    unaff_R13[0x1a] = in_stack_00000040;
    unaff_R13[0x1b] = in_stack_000000a8;
    unaff_R13[0x1c] = in_stack_00000128;
    unaff_R13[0x1d] = in_stack_00000010;
    unaff_R13[0x1e] = in_stack_000000a0;
    unaff_R13[0x1f] = in_stack_00000120;
    unaff_R13[0x20] = in_stack_00000038;
    unaff_R13[0x21] = in_stack_00000098;
    unaff_R13[0x22] = in_stack_00000118;
    unaff_R13[0x25] = in_stack_00000108;
    unaff_R13[0x23] = in_stack_000000f8;
    unaff_R13[0x24] = in_stack_00000100;
    unaff_R13[0x26] = uVar7;
    unaff_R13[0x27] = in_stack_000001d8;
    unaff_R13[0x28] = in_stack_000001e0;
    *(undefined4 *)(unaff_R13 + 0x29) = uVar3;
    *(undefined4 *)((longlong)unaff_R13 + 0x14c) = uVar4;
    unaff_R13[0x2a] =
         CONCAT26(uStack000000000000007e,
                  CONCAT42(uStack000000000000007a,CONCAT11(uStack0000000000000079,unaff_R12B)));
    unaff_R13[0x2b] = unaff_R14;
    unaff_R13[0x2c] = unaff_R15;
    unaff_R13[0x2d] = unaff_retaddr;
    *(short *)(unaff_R13 + 0x2e) = (short)unaff_R14;
    *(undefined2 *)((longlong)unaff_R13 + 0x172) = uStack000000000000000e;
    *(undefined1 *)((longlong)unaff_R13 + 0x174) = uStack000000000000000a;
    *(undefined1 *)((longlong)unaff_R13 + 0x175) = uStack0000000000000009;
    *(undefined1 *)((longlong)unaff_R13 + 0x176) = uStack0000000000000008;
    *(undefined2 *)(unaff_RBP + 7) = uStack000000000000000c;
    *unaff_RBP = unaff_R15;
    unaff_RBP[1] = in_stack_00000070;
    unaff_RBP[2] = in_stack_000000f0;
    unaff_RBP[3] = in_stack_000000e8;
    unaff_RBP[4] = in_stack_00000060;
    unaff_RBP[5] = in_stack_00000178;
    *(undefined1 *)((longlong)unaff_RBP + 0x3b) = uStack000000000000000b;
    *(byte *)((longlong)unaff_RBP + 0x3a) = in_stack_00000068;
    unaff_RBP[6] = unaff_R13;
    return (int *)(ulonglong)in_stack_00000068;
  }
  piVar6 = (int *)(ulonglong)bVar14;
switchD_00635cb2_caseD_0:
  return piVar6;
}


