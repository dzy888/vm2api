// 00635b60 clone

/* WARNING: Instruction at (ram,0x006371fb) overlaps instruction at (ram,0x006371f7)
    */
/* WARNING: Control flow encountered bad instruction data */
/* <serde_json[dc3825464c436029]::value::Value as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

int * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (byte *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 in_RAX;
  int *piVar8;
  uint *puVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong *plVar10;
  ulonglong unaff_R12;
  undefined8 *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  bool bVar11;
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
  longlong in_stack_00000060;
  byte in_stack_00000068;
  longlong in_stack_00000070;
  undefined1 uStack0000000000000078;
  undefined1 uStack0000000000000079;
  undefined4 uStack000000000000007a;
  undefined2 uStack000000000000007e;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
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
  longlong in_stack_000000e8;
  longlong in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
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
  longlong in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 uStack_18;
  
  bVar1 = *param_2;
  plVar10 = (longlong *)(ulonglong)bVar1;
  piVar8 = (int *)((longlong)&switchD_00635b7b::switchdataD_0019fb44 +
                  (longlong)(int)(&switchD_00635b7b::switchdataD_0019fb44)[(longlong)plVar10]);
  cVar6 = (char)piVar8;
  iVar7 = (int)piVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    piVar8 = (int *)(ulonglong)param_2[1];
    param_1[1] = param_2[1];
    break;
  case 2:
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    break;
  case 3:
    piVar8 = (int *)(*(code *)PTR_clone_00798fd0)();
    break;
  case 4:
    piVar8 = (int *)<serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::
                    to_vec::<alloc[12e961f32105355]::alloc::Global>
                              (param_1 + 8,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_2 + 0x18));
    break;
  case 5:
    if (*(longlong *)(param_2 + 0x18) == 0) {
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    else {
      if (*(longlong *)(param_2 + 8) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar4 = (code *)swi(3);
        piVar8 = (int *)(*pcVar4)();
        return piVar8;
      }
      piVar8 = (int *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
                      ::clone::clone_subtree::
                      <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                                (param_1 + 8,*(longlong *)(param_2 + 8),
                                 *(undefined8 *)(param_2 + 0x10));
    }
    break;
  case 6:
    if ((int)param_3 != *(int *)(param_2 + 0x18)) {
      return (int *)0x0;
    }
    iVar7 = (*(code *)PTR_bcmp_00799020)();
    goto code_r0x00635d38;
  case 7:
    puVar9 = &switchD_00635cb2::switchdataD_0019fb5c;
    iRam48c98901b0000000 = iVar7;
    goto code_r0x00635cab;
  case 8:
    bVar11 = (int)param_1 != 0;
    while( true ) {
      if ((char)piVar8 == '\0') {
        return piVar8;
      }
      param_1 = param_1 + 0x20;
      unaff_R14 = unaff_R14 + 0x20;
      if (!bVar11) break;
      piVar8 = (int *)<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>
                      ::eq(unaff_R14,param_1);
      bVar11 = unaff_R15 != 0;
      unaff_R15 = unaff_R15 + -1;
    }
    return piVar8;
  case 9:
    if (piVar8 != *(int **)(param_2 + 8)) {
      return (int *)0x0;
    }
    if (iVar7 == 2) {
      return (int *)(ulonglong)
                    (-(uint)(*(double *)(param_2 + 0x10) == *(double *)(param_1 + 0x10)) & 1);
    }
    bVar11 = *(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10);
    goto LAB_00635d3a;
  case 10:
    puVar9 = (uint *)CONCAT62((int6)((ulonglong)param_3 >> 0x10),CONCAT11(0xff,(char)param_3));
code_r0x00635cab:
                    /* WARNING: Could not recover jumptable at 0x00635cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar8 = (int *)(*(code *)((longlong)(int)puVar9[0x19fb44] + (longlong)puVar9))
                              ((code *)((longlong)(int)puVar9[0x19fb44] + (longlong)puVar9));
    return piVar8;
  case 0xb:
    iVar7 = iVar7 + 0x1632e8 +
            (uint)(0xffffffffffe604bb <
                  (ulonglong)
                  (longlong)(int)(&switchD_00635b7b::switchdataD_0019fb44)[(longlong)plVar10]);
code_r0x00635d38:
    bVar11 = iVar7 == 0;
LAB_00635d3a:
    return (int *)(ulonglong)bVar11;
  case 0xc:
    *(char *)piVar8 = (char)*piVar8 + cVar6;
    if (param_2 == (byte *)0x0) {
      (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone::clone_subtree::
    <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
              ((longlong)register0x00000020 + -0x10,param_2,*(undefined8 *)(param_1 + 0x160));
    goto switchD_006371aa_caseD_0;
  case 0xd:
    uStack_18._0_4_ = (undefined4)in_RAX;
    uStack_18._4_4_ = (undefined4)((ulonglong)in_RAX >> 0x20);
    uStack0000000000000100 = (undefined4)unaff_RBX;
    uStack0000000000000104 = (undefined4)((ulonglong)unaff_RBX >> 0x20);
    uStack00000000000000f8 = (undefined4)uStack_18;
    uStack00000000000000fc = uStack_18._4_4_;
    unaff_R12 = (ulonglong)param_1[0x150];
    if (param_1[0x150] != 0xff) {
LAB_00637199:
                    /* WARNING: Could not recover jumptable at 0x006371aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar8 = (int *)(*(code *)((longlong)&switchD_006371aa::switchdataD_0019fb74 +
                                (longlong)
                                (int)(&switchD_006371aa::switchdataD_0019fb74)
                                     [unaff_R12 & 0xffffffff]))();
      return piVar8;
    }
    goto LAB_006371d9;
  case 0xe:
    switchD_00635b7b::switchdataD_0019fb44._0_1_ =
         (char)switchD_00635b7b::switchdataD_0019fb44 + cVar6;
    *(char *)piVar8 = (char)*piVar8 + cVar6;
    goto LAB_006371d9;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    *piVar8 = *piVar8 + 1;
    *(char *)piVar8 = (char)*piVar8 + cVar6;
    if ((char)*piVar8 != '\0') goto LAB_00637199;
LAB_006371d9:
    uStack0000000000000078 = 0xff;
    uStack_18 = in_RAX;
    if (*(longlong *)(param_1 + 0x130) == -1) {
LAB_006371f7:
      uStack_18 = 0xffffffffffffffff;
    }
    else {
LAB_006372ee:
      (*(code *)PTR_clone_00798fd0)();
      in_stack_000001d8 = unaff_RBX;
      in_stack_000001e0 = unaff_RBP;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    uVar3 = *(undefined4 *)(param_1 + 0x14c);
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
    unaff_R13[0x23] = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
    unaff_R13[0x24] = CONCAT44(uStack0000000000000104,uStack0000000000000100);
    unaff_R13[0x26] = uStack_18;
    unaff_R13[0x27] = in_stack_000001d8;
    unaff_R13[0x28] = in_stack_000001e0;
    *(undefined4 *)(unaff_R13 + 0x29) = uVar2;
    *(undefined4 *)((longlong)unaff_R13 + 0x14c) = uVar3;
    unaff_R13[0x2a] =
         CONCAT26(uStack000000000000007e,
                  CONCAT42(uStack000000000000007a,
                           CONCAT11(uStack0000000000000079,uStack0000000000000078)));
    unaff_R13[0x2b] = in_stack_00000080;
    unaff_R13[0x2c] = in_stack_00000088;
    unaff_R13[0x2d] = in_stack_00000090;
    *(short *)(unaff_R13 + 0x2e) = (short)unaff_R14;
    *(undefined2 *)((longlong)unaff_R13 + 0x172) = uStack000000000000000e;
    *(undefined1 *)((longlong)unaff_R13 + 0x174) = uStack000000000000000a;
    *(undefined1 *)((longlong)unaff_R13 + 0x175) = uStack0000000000000009;
    *(undefined1 *)((longlong)unaff_R13 + 0x176) = uStack0000000000000008;
    *(undefined2 *)(plVar10 + 7) = uStack000000000000000c;
    *plVar10 = unaff_R15;
    plVar10[1] = in_stack_00000070;
    plVar10[2] = in_stack_000000f0;
    plVar10[3] = in_stack_000000e8;
    plVar10[4] = in_stack_00000060;
    plVar10[5] = in_stack_00000178;
    *(undefined1 *)((longlong)plVar10 + 0x3b) = uStack000000000000000b;
    *(byte *)((longlong)plVar10 + 0x3a) = in_stack_00000068;
    plVar10[6] = (longlong)unaff_R13;
    return (int *)(ulonglong)in_stack_00000068;
  case 0x11:
    <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
    <alloc[12e961f32105355]::alloc::Global>(param_1,param_2,*(undefined8 *)(param_1 + 0x168));
switchD_006371aa_caseD_0:
    uStack0000000000000078 = (undefined1)unaff_R12;
    uStack_18 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uStack0000000000000078);
    uVar5 = uStack_18;
    uStack_18._1_1_ = (undefined1)((ulonglong)in_RAX >> 8);
    uStack0000000000000079 = uStack_18._1_1_;
    uStack_18._2_4_ = (undefined4)((ulonglong)in_RAX >> 0x10);
    uStack000000000000007a = uStack_18._2_4_;
    uStack_18._6_2_ = (undefined2)((ulonglong)in_RAX >> 0x30);
    uStack000000000000007e = uStack_18._6_2_;
    in_stack_00000080 = unaff_RBX;
    in_stack_00000088 = unaff_RBP;
    in_stack_00000090 = unaff_retaddr;
    uStack_18 = uVar5;
    if (*(longlong *)(param_1 + 0x130) == -1) goto LAB_006371f7;
    goto LAB_006372ee;
  }
  *param_1 = bVar1;
  return piVar8;
}


