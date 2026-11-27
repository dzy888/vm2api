// 003be230 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,
   &str)>, craggemini_core[66f3c71560d70857]::models::gemini_models_list::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,&str)>,craggemini_core[66f3c71560d70857]::models::gemini_models_list::{closure#0}>>>
::from_iter(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  Elf64_Ehdr *pEVar9;
  Elf64_Ehdr *pEVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  code *pcVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined2 uStack_14e;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  ulonglong local_118;
  longlong *local_110;
  code *local_108;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  Elf64_Ehdr *local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  uVar15 = param_3 - param_2;
  local_d0 = param_2;
  puVar16 = param_1;
  if (uVar15 < 0x7ffffffffffffff9) goto LAB_003be265;
  puVar16 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    local_d0 = uVar15;
LAB_003be265:
    local_a8 = puVar16;
    uVar12 = uVar15 >> 5;
    if (param_3 == local_d0) {
      local_f0 = 8;
      local_b0 = 0;
      goto LAB_003bea4e;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar16 = (ulonglong *)&DAT_00000008;
    local_f0 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_f0 == 0);
  local_a0 = -uVar12;
  lVar14 = 1;
  local_c0 = 0;
  pcVar13 = (code *)PTR___rust_alloc_00799000;
  pcVar17 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
  local_118 = uVar15;
  local_b0 = uVar12;
  do {
    local_b8 = local_d0 + local_c0;
    local_e8 = 0;
    local_d8 = 0;
    (*pcVar17)();
    pcVar8 = (char *)(*pcVar13)();
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    builtin_strncpy(pcVar8,"name",4);
    local_130 = 4;
    local_120 = 4;
    local_110 = &local_b8;
    local_108 = <&&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_128 = pcVar8;
    (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da,&local_110);
    pEVar10 = local_140;
    lVar11 = CONCAT44(uStack_14c,CONCAT22(uStack_14e,CONCAT11(uStack_14f,local_150)));
    local_c8 = uStack_148;
    if ((longlong)local_140 < 0) {
LAB_003bea70:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    if (local_140 == (Elf64_Ehdr *)0x0) {
      pEVar9 = (Elf64_Ehdr *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
      if (pEVar9 == (Elf64_Ehdr *)0x0) goto LAB_003bea70;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,pEVar10);
    }
    local_150 = 3;
    uStack_148 = pEVar10;
    uStack_138 = pEVar10;
    local_140 = pEVar9;
    uVar18 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
             ::insert(&local_110,&local_e8,&local_130,&local_150);
    puVar7 = PTR___rust_alloc_00799000;
    puVar6 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if ((char)local_110 != -1) {
      uVar18 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_110);
    }
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
    }
    (*(code *)puVar6)();
    pcVar8 = (char *)(*(code *)puVar7)();
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    builtin_strncpy(pcVar8,"baseModelId",0xb);
    local_130 = 0xb;
    local_120 = 0xb;
    pEVar10 = *(Elf64_Ehdr **)(local_b8 + 8);
    local_128 = pcVar8;
    if ((longlong)pEVar10 < 0) {
LAB_003bea80:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    if (pEVar10 == (Elf64_Ehdr *)0x0) {
      pEVar9 = (Elf64_Ehdr *)0x1;
    }
    else {
      (*(code *)puVar6)();
      pEVar9 = (Elf64_Ehdr *)(*(code *)puVar7)();
      if (pEVar9 == (Elf64_Ehdr *)0x0) goto LAB_003bea80;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,pEVar10);
    }
    local_150 = 3;
    uStack_148 = pEVar10;
    local_140 = pEVar9;
    uStack_138 = pEVar10;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    puVar7 = PTR___rust_alloc_00799000;
    puVar6 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*(code *)puVar6)();
    pcVar8 = (char *)(*(code *)puVar7)();
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    builtin_strncpy(pcVar8,"version",7);
    local_130 = 7;
    local_120 = 7;
    local_128 = pcVar8;
    (*(code *)puVar6)();
    pEVar10 = (Elf64_Ehdr *)(*(code *)puVar7)();
    if (pEVar10 == (Elf64_Ehdr *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    pEVar10->e_ident_magic_num = 0x76;
    pEVar10->e_ident_magic_str[0] = '1';
    local_150 = 3;
    uStack_148 = (Elf64_Ehdr *)0x2;
    uStack_138 = (Elf64_Ehdr *)0x2;
    local_140 = pEVar10;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*(code *)puVar6)();
    pcVar8 = (char *)(*(code *)puVar7)();
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    builtin_strncpy(pcVar8,"displayName",0xb);
    local_130 = 0xb;
    local_120 = 0xb;
    pEVar10 = *(Elf64_Ehdr **)(local_d0 + 0x18 + local_c0);
    local_128 = pcVar8;
    if ((longlong)pEVar10 < 0) {
LAB_003bea90:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    if (pEVar10 == (Elf64_Ehdr *)0x0) {
      pEVar9 = (Elf64_Ehdr *)0x1;
    }
    else {
      (*(code *)puVar6)();
      pEVar9 = (Elf64_Ehdr *)(*(code *)puVar7)();
      if (pEVar9 == (Elf64_Ehdr *)0x0) goto LAB_003bea90;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,pEVar10);
    }
    local_150 = 3;
    uStack_148 = pEVar10;
    local_140 = pEVar9;
    uStack_138 = pEVar10;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    puVar7 = PTR___rust_alloc_00799000;
    puVar6 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*(code *)puVar6)();
    pcVar8 = (char *)(*(code *)puVar7)();
    uVar5 = s_enerationMethods_00192c11._8_8_;
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    *(ulonglong *)(pcVar8 + 10) =
         CONCAT26(s_enerationMethods_00192c11._6_2_,
                  CONCAT42(s_enerationMethods_00192c11._2_4_,s_enerationMethods_00192c11._0_2_));
    *(undefined8 *)(pcVar8 + 0x12) = uVar5;
    uVar4 = s_enerationMethods_00192c11._2_4_;
    uVar3 = s_supportedG_00192c07._4_4_;
    uVar18 = CONCAT22(s_enerationMethods_00192c11._0_2_,s_supportedG_00192c07._8_2_);
    *(undefined4 *)pcVar8 = s_supportedG_00192c07._0_4_;
    *(undefined4 *)(pcVar8 + 4) = uVar3;
    *(undefined4 *)(pcVar8 + 8) = uVar18;
    *(undefined4 *)(pcVar8 + 0xc) = uVar4;
    local_130 = 0x1a;
    local_120 = 0x1a;
    local_128 = pcVar8;
    (*(code *)puVar6)();
    pEVar10 = (Elf64_Ehdr *)(*(code *)puVar7)();
    if (pEVar10 == (Elf64_Ehdr *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_003beaf4;
    }
    (*(code *)puVar6)();
    pEVar9 = (Elf64_Ehdr *)(*(code *)puVar7)();
    if (pEVar9 == (Elf64_Ehdr *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    pEVar9->e_ident_osabi = 0x65;
    pEVar9->e_ident_abiversion = 0x43;
    pEVar9->e_ident_pad[0] = 0x6f;
    pEVar9->e_ident_pad[1] = 0x6e;
    pEVar9->e_ident_pad[2] = 0x74;
    pEVar9->e_ident_pad[3] = 0x65;
    pEVar9->e_ident_pad[4] = 0x6e;
    pEVar9->e_ident_pad[5] = 0x74;
    pEVar9->e_ident_magic_num = 0x67;
    pEVar9->e_ident_magic_str[0] = 'e';
    pEVar9->e_ident_magic_str[1] = 'n';
    pEVar9->e_ident_magic_str[2] = 'e';
    pEVar9->e_ident_class = 0x72;
    pEVar9->e_ident_data = 0x61;
    pEVar9->e_ident_version = 0x74;
    pEVar9->e_ident_osabi = 0x65;
    local_150 = 3;
    uStack_148 = (Elf64_Ehdr *)&DAT_0000000f;
    uStack_138 = (Elf64_Ehdr *)&DAT_0000000f;
    local_140 = pEVar9;
    (*(code *)puVar6)();
    pcVar8 = (char *)(*(code *)puVar7)();
    uVar5 = s_streamGenerateContent_00192c21._8_8_;
    if (pcVar8 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003beaf4;
    }
    *(undefined8 *)pcVar8 = s_streamGenerateContent_00192c21._0_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar5;
    pcVar8[0xd] = 'e';
    pcVar8[0xe] = 'C';
    pcVar8[0xf] = 'o';
    pcVar8[0x10] = 'n';
    pcVar8[0x11] = 't';
    pcVar8[0x12] = 'e';
    pcVar8[0x13] = 'n';
    pcVar8[0x14] = 't';
    *(undefined1 *)&pEVar10->e_phoff = 3;
    pEVar10->e_shoff = 0x15;
    *(char **)&pEVar10->e_flags = pcVar8;
    pEVar10->e_phnum = 0x15;
    pEVar10->e_shentsize = 0;
    pEVar10->e_shnum = 0;
    pEVar10->e_shstrndx = 0;
    pEVar10->e_type = (undefined2)local_140;
    pEVar10->e_machine = local_140._2_2_;
    pEVar10->e_version = local_140._4_4_;
    *(undefined4 *)&pEVar10->e_entry = (undefined4)uStack_138;
    *(undefined4 *)((longlong)&pEVar10->e_entry + 4) = uStack_138._4_4_;
    pEVar10->e_ident_magic_num = local_150;
    pEVar10->e_ident_magic_str[0] = uStack_14f;
    pEVar10->e_ident_magic_str[1] = (char)uStack_14e;
    pEVar10->e_ident_magic_str[2] = (char)((ushort)uStack_14e >> 8);
    pEVar10->e_ident_class = (undefined1)uStack_14c;
    pEVar10->e_ident_data = uStack_14c._1_1_;
    pEVar10->e_ident_version = uStack_14c._2_1_;
    pEVar10->e_ident_osabi = uStack_14c._3_1_;
    pEVar10->e_ident_abiversion = (undefined1)uStack_148;
    pEVar10->e_ident_pad[0] = uStack_148._1_1_;
    pEVar10->e_ident_pad[1] = uStack_148._2_1_;
    pEVar10->e_ident_pad[2] = uStack_148._3_1_;
    *(undefined4 *)(pEVar10->e_ident_pad + 3) = uStack_148._4_4_;
    uStack_148 = (Elf64_Ehdr *)0x2;
    uStack_138 = (Elf64_Ehdr *)0x2;
    local_150 = 4;
    local_140 = pEVar10;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    pcVar13 = (code *)PTR___rust_alloc_00799000;
    pcVar17 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*pcVar17)();
    pcVar8 = (char *)(*pcVar13)();
    if (pcVar8 == (char *)0x0) {
LAB_003beab0:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_003beaf4:
                    /* WARNING: Does not return */
      pcVar17 = (code *)invalidInstructionException();
      (*pcVar17)();
    }
    builtin_strncpy(pcVar8,"inputTokenLimit",0xf);
    local_130 = 0xf;
    local_120 = 0xf;
    local_150 = 2;
    uStack_148 = (Elf64_Ehdr *)0x0;
    local_140 = &Elf64_Ehdr_00100000;
    local_128 = pcVar8;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*pcVar17)();
    pcVar8 = (char *)(*pcVar13)();
    uVar4 = s_outputTokenLimit_00182830._12_4_;
    uVar3 = s_outputTokenLimit_00182830._8_4_;
    uVar18 = s_outputTokenLimit_00182830._4_4_;
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    *(undefined4 *)pcVar8 = s_outputTokenLimit_00182830._0_4_;
    *(undefined4 *)(pcVar8 + 4) = uVar18;
    *(undefined4 *)(pcVar8 + 8) = uVar3;
    *(undefined4 *)(pcVar8 + 0xc) = uVar4;
    local_130 = 0x10;
    local_120 = 0x10;
    local_150 = 2;
    uStack_148 = (Elf64_Ehdr *)0x0;
    local_140 = (Elf64_Ehdr *)0x10000;
    local_128 = pcVar8;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*pcVar17)();
    pcVar8 = (char *)(*pcVar13)();
    if (pcVar8 == (char *)0x0) goto LAB_003beab0;
    builtin_strncpy(pcVar8,"thinking",8);
    local_130 = 8;
    local_120 = 8;
    local_150 = 1;
    uStack_14f = 1;
    local_128 = pcVar8;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,&local_e8,&local_130,&local_150);
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    local_38 = local_d8;
    uStack_4b._3_1_ = (undefined1)local_e8;
    uStack_47 = (undefined4)((ulonglong)local_e8 >> 8);
    uStack_43._0_3_ = (undefined3)((ulonglong)local_e8 >> 0x28);
    uStack_43._3_1_ = (undefined1)uStack_e0;
    uStack_3f = (undefined7)((ulonglong)uStack_e0 >> 8);
    *(undefined1 *)(local_f0 + local_c0) = 5;
    puVar1 = (undefined4 *)(local_f0 + 1 + local_c0);
    *puVar1 = uStack_4f;
    puVar1[1] = uStack_4b;
    puVar1[2] = uStack_47;
    puVar1[3] = uStack_43;
    puVar2 = (undefined8 *)(local_f0 + 0x10 + local_c0);
    *puVar2 = uStack_e0;
    puVar2[1] = local_d8;
    lVar11 = local_a0 + lVar14;
    lVar14 = lVar14 + 1;
    local_c0 = local_c0 + 0x20;
    if (lVar11 == 0) {
      uVar12 = local_b0;
LAB_003bea4e:
      *local_a8 = local_b0;
      local_a8[1] = local_f0;
      local_a8[2] = uVar12;
      return local_a8;
    }
  } while( true );
}


