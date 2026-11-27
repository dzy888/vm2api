// 005e8990 compile_native_prompt

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::compile_native_prompt */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::compile_native_prompt
          (longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,undefined8 param_5
          ,longlong param_6,undefined8 param_7,longlong param_8,longlong param_9,longlong param_10)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  longlong *plVar13;
  code *unaff_RBX;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar18 [16];
  undefined8 *******local_168;
  code *pcStack_160;
  undefined8 *******local_158;
  undefined8 *******local_148;
  code *pcStack_140;
  undefined8 *******local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 *******local_120;
  code *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 *******local_f8;
  code *pcStack_f0;
  undefined8 *******local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_a8 = param_1;
  if (param_4 == 0 && param_6 == 0) {
    if ((((*(longlong *)(param_8 + 0x18) != -1) || (*(longlong *)(param_8 + 0x88) != -1)) ||
        (*(longlong *)(param_8 + 0xe0) != -1)) ||
       ((*(longlong *)(param_8 + 0x160) != -1 ||
        (*(longlong *)(param_8 + 0x10) != 0 || param_10 != 0)))) {
      local_e0 = 0;
      local_d8 = 8;
      local_d0 = 0;
      goto LAB_005e8bdb;
    }
    if (param_3 < 0) {
      pppppppuVar15 = (undefined8 *******)0x0;
    }
    else {
      if (param_3 == 0) {
        lVar12 = 1;
LAB_005ea2ff:
        *local_a8 = param_3;
        local_a8[1] = lVar12;
        local_a8[2] = param_3;
        return local_a8;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pppppppuVar15 = (undefined8 *******)0x1;
      lVar12 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar12 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,param_3);
        goto LAB_005ea2ff;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    if ((ulonglong)((longlong)local_168 - (longlong)local_158) < 0x39) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_168,local_158,0x39,1,1);
    }
    uVar3 = _UNK_0019efef;
    *(ulonglong *)(pcStack_160 + 0x29 + (longlong)local_158) = CONCAT17(UNK_0019efee,_DAT_0019efe7);
    *(undefined8 *)(pcStack_160 + 0x29 + (longlong)local_158 + 8) = uVar3;
    uVar3 = CONCAT71(_DAT_0019efe7,UNK_0019efe6);
    *(undefined8 *)(pcStack_160 + 0x20 + (longlong)local_158) = _DAT_0019efde;
    *(undefined8 *)(pcStack_160 + 0x20 + (longlong)local_158 + 8) = uVar3;
    uVar3 = _UNK_0019efd6;
    *(undefined8 *)(pcStack_160 + 0x10 + (longlong)local_158) = _DAT_0019efce;
    *(undefined8 *)(pcStack_160 + 0x10 + (longlong)local_158 + 8) = uVar3;
    uVar6 = _UNK_0019efca;
    uVar5 = _UNK_0019efc6;
    uVar4 = _UNK_0019efc2;
    uVar17 = _DAT_0019efbe;
    pcVar11 = pcStack_160 + (longlong)local_158;
    *(undefined4 *)pcVar11 = _DAT_0019efbe;
    *(undefined4 *)(pcVar11 + 4) = uVar4;
    *(undefined4 *)(pcVar11 + 8) = uVar5;
    *(undefined4 *)(pcVar11 + 0xc) = uVar6;
    local_158 = (undefined8 *******)((longlong)local_158 + 0x39);
LAB_005e9e1a:
    lVar12 = local_100;
    pppppppuVar16 = local_158;
    pcVar11 = pcStack_160;
    pppppppuVar8 = local_168;
    if (local_100 == local_110) {
      uVar17 = (*(code *)PTR_grow_one_00799328)();
    }
    *(undefined8 ********)(local_108 + lVar12 * 0x18) = pppppppuVar8;
    *(code **)(local_108 + 8 + lVar12 * 0x18) = pcVar11;
    *(undefined8 ********)(local_108 + 0x10 + lVar12 * 0x18) = pppppppuVar16;
    puVar7 = PTR___rust_dealloc_00798fc8;
    local_100 = lVar12 + 1;
    if (pppppppuVar15 != (undefined8 *******)0x0) {
      pcVar11 = unaff_RBX + 8;
      do {
        if (*(longlong *)(pcVar11 + -8) != 0) {
          uVar17 = (*(code *)puVar7)(uVar17,1);
        }
        pcVar11 = pcVar11 + 0x18;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + -1);
      } while (pppppppuVar15 != (undefined8 *******)0x0);
    }
    if (local_f8 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
    }
  }
  else {
    local_e0 = 0;
    local_d8 = 8;
    local_d0 = 0;
    if (param_4 != 0) {
      auVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(param_4,param_5);
      if ((auVar18._0_8_ != 0) && (auVar18._8_8_ != 0)) {
        uVar17 = sanitize_prompt_line(&local_130,auVar18._0_8_);
        pcStack_160 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        local_168 = (undefined8 *******)&local_130;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        if (local_130 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        lVar12 = local_d0;
        if (local_d0 == local_e0) {
          (*(code *)PTR_grow_one_00799328)();
        }
        *(undefined8 *)(local_d8 + 0x10 + lVar12 * 0x18) = local_80;
        puVar1 = (undefined4 *)(local_d8 + lVar12 * 0x18);
        *puVar1 = local_90;
        puVar1[1] = uStack_8c;
        puVar1[2] = uStack_88;
        puVar1[3] = uStack_84;
        local_d0 = lVar12 + 1;
      }
    }
    if (param_6 != 0) {
      auVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
      if ((auVar18._0_8_ != 0) && (auVar18._8_8_ != 0)) {
        uVar17 = sanitize_prompt_line(&local_130,auVar18._0_8_);
        pcStack_160 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        local_168 = (undefined8 *******)&local_130;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        if (local_130 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        lVar12 = local_d0;
        if (local_d0 == local_e0) {
          (*(code *)PTR_grow_one_00799328)();
        }
        *(undefined8 *)(local_d8 + 0x10 + lVar12 * 0x18) = local_68;
        puVar1 = (undefined4 *)(local_d8 + lVar12 * 0x18);
        *puVar1 = local_78;
        puVar1[1] = uStack_74;
        puVar1[2] = uStack_70;
        puVar1[3] = uStack_6c;
        local_d0 = lVar12 + 1;
      }
    }
LAB_005e8bdb:
    local_110 = 0;
    local_108 = 8;
    local_100 = 0;
    local_b0 = param_3;
    local_a0 = param_2;
    if (*(longlong *)(param_8 + 0x18) != -1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar11 = (code *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = _UNK_0019edca;
      if (pcVar11 == (code *)0x0) goto LAB_005ea0f3;
      *(undefined8 *)(pcVar11 + 0x40) = _DAT_0019edc2;
      *(undefined8 *)(pcVar11 + 0x48) = uVar3;
      uVar3 = _UNK_0019edba;
      *(undefined8 *)(pcVar11 + 0x30) = _DAT_0019edb2;
      *(undefined8 *)(pcVar11 + 0x38) = uVar3;
      uVar3 = _UNK_0019edaa;
      *(undefined8 *)(pcVar11 + 0x20) = _DAT_0019eda2;
      *(undefined8 *)(pcVar11 + 0x28) = uVar3;
      uVar3 = _UNK_0019ed9a;
      *(undefined8 *)(pcVar11 + 0x10) = _DAT_0019ed92;
      *(undefined8 *)(pcVar11 + 0x18) = uVar3;
      uVar6 = _UNK_0019ed8e;
      uVar5 = _UNK_0019ed8a;
      uVar4 = _UNK_0019ed86;
      uVar17 = _DAT_0019ed82;
      *(undefined4 *)pcVar11 = _DAT_0019ed82;
      *(undefined4 *)(pcVar11 + 4) = uVar4;
      *(undefined4 *)(pcVar11 + 8) = uVar5;
      *(undefined4 *)(pcVar11 + 0xc) = uVar6;
      *(undefined8 *)(pcVar11 + 0x4e) = 0x2e73656972657571;
      local_148 = (undefined8 *******)0x56;
      local_138 = (undefined8 *******)0x56;
      pcStack_140 = pcVar11;
      if (*(longlong *)(param_8 + 0x28) == 0) {
        pppppppuVar15 = (undefined8 *******)0x56;
        lVar12 = *(longlong *)(param_8 + 0x40);
joined_r0x005e8e56:
        local_138 = pppppppuVar15;
        if (lVar12 != 0) goto LAB_005e8d6e;
LAB_005e8e5c:
        lVar12 = *(longlong *)(param_8 + 0x48);
      }
      else {
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0x20),*(longlong *)(param_8 + 0x28),
                   &DAT_0019edd8,2);
        local_f8 = &local_168;
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                     ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_f8);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar15 = local_120;
        pppppppuVar8 = local_130;
        if (local_120 == (undefined8 *******)0x0) {
          local_138 = (undefined8 *******)0x56;
          pppppppuVar15 = local_138;
        }
        else {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,0x56,local_120,1,1);
          pppppppuVar16 = local_138;
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar15);
          pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar16 + (longlong)pppppppuVar15);
        }
        if (pppppppuVar8 == (undefined8 *******)0x0) {
          lVar12 = *(longlong *)(param_8 + 0x40);
          goto joined_r0x005e8e56;
        }
        local_138 = pppppppuVar15;
        uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        lVar12 = *(longlong *)(param_8 + 0x40);
        if (lVar12 == 0) goto LAB_005e8e5c;
LAB_005e8d6e:
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0x38),lVar12,&DAT_0019edd8,2);
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                     ::fmt;
        local_f8 = &local_168;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_f8);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_148 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_138;
LAB_005e8e05:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e8e05;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        local_138 = pppppppuVar15;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        lVar12 = *(longlong *)(param_8 + 0x48);
      }
      if (lVar12 != -1) {
        local_f8 = (undefined8 *******)(param_8 + 0x48);
        local_168 = &local_f8;
        pcStack_160 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_148 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_138;
LAB_005e8ebf:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e8ebf;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        local_138 = pppppppuVar15;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      if (*(char *)(param_8 + 0x68) != -1) {
        local_f8 = (undefined8 *******)(param_8 + 0x68);
        local_168 = &local_f8;
        pcStack_160 = <&serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_148 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_138;
LAB_005e8f54:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e8f54;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
      }
      lVar12 = local_100;
      pcVar11 = pcStack_140;
      pppppppuVar8 = local_148;
      if (local_100 == local_110) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(undefined8 ********)(local_108 + lVar12 * 0x18) = pppppppuVar8;
      *(code **)(local_108 + 8 + lVar12 * 0x18) = pcVar11;
      *(undefined8 ********)(local_108 + 0x10 + lVar12 * 0x18) = pppppppuVar15;
      local_100 = lVar12 + 1;
    }
    if (*(longlong *)(param_8 + 0x88) != -1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar11 = (code *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = _UNK_0019ee32;
      if (pcVar11 == (code *)0x0) goto LAB_005ea0f3;
      *(undefined8 *)(pcVar11 + 0x50) = _DAT_0019ee2a;
      *(undefined8 *)(pcVar11 + 0x58) = uVar3;
      uVar3 = _UNK_0019ee22;
      *(undefined8 *)(pcVar11 + 0x40) = _DAT_0019ee1a;
      *(undefined8 *)(pcVar11 + 0x48) = uVar3;
      uVar3 = _UNK_0019ee12;
      *(undefined8 *)(pcVar11 + 0x30) = _DAT_0019ee0a;
      *(undefined8 *)(pcVar11 + 0x38) = uVar3;
      uVar3 = _UNK_0019ee02;
      *(undefined8 *)(pcVar11 + 0x20) = _DAT_0019edfa;
      *(undefined8 *)(pcVar11 + 0x28) = uVar3;
      uVar3 = _UNK_0019edf2;
      *(undefined8 *)(pcVar11 + 0x10) = _DAT_0019edea;
      *(undefined8 *)(pcVar11 + 0x18) = uVar3;
      uVar5 = _UNK_0019ede6;
      uVar4 = _UNK_0019ede2;
      uVar17 = _UNK_0019edde;
      *(undefined4 *)pcVar11 = _DAT_0019edda;
      *(undefined4 *)(pcVar11 + 4) = uVar17;
      *(undefined4 *)(pcVar11 + 8) = uVar4;
      *(undefined4 *)(pcVar11 + 0xc) = uVar5;
      *(undefined4 *)(pcVar11 + 0x5f) = 0x2e736567;
      local_148 = (undefined8 *******)0x63;
      local_138 = (undefined8 *******)0x63;
      pcStack_140 = pcVar11;
      if (*(longlong *)(param_8 + 200) == 0) {
        pppppppuVar15 = (undefined8 *******)0x63;
        lVar12 = *(longlong *)(param_8 + 0x98);
joined_r0x005e922a:
        local_138 = pppppppuVar15;
        if (lVar12 != 0) goto LAB_005e9138;
LAB_005e9230:
        lVar12 = *(longlong *)(param_8 + 0xb0);
      }
      else {
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0xc0),*(longlong *)(param_8 + 200),
                   &DAT_0019edd8,2);
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                     ::fmt;
        local_f8 = &local_168;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_f8);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar15 = local_120;
        pppppppuVar8 = local_130;
        if (local_120 == (undefined8 *******)0x0) {
          local_138 = (undefined8 *******)0x63;
          pppppppuVar15 = local_138;
        }
        else {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,99,local_120,1,1);
          pppppppuVar16 = local_138;
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar15);
          pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar16 + (longlong)pppppppuVar15);
        }
        if (pppppppuVar8 == (undefined8 *******)0x0) {
          lVar12 = *(longlong *)(param_8 + 0x98);
          goto joined_r0x005e922a;
        }
        local_138 = pppppppuVar15;
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        lVar12 = *(longlong *)(param_8 + 0x98);
        if (lVar12 == 0) goto LAB_005e9230;
LAB_005e9138:
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0x90),lVar12,&DAT_0019edd8,2);
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                     ::fmt;
        local_f8 = &local_168;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_f8);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_148 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_138;
LAB_005e91d2:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e91d2;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        local_138 = pppppppuVar15;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        lVar12 = *(longlong *)(param_8 + 0xb0);
      }
      if (lVar12 != 0) {
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0xa8),lVar12,&DAT_0019edd8,2);
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                     ::fmt;
        local_f8 = &local_168;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_f8);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_148 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_148,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_138;
LAB_005e92da:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e92da;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      lVar12 = local_100;
      pcVar11 = pcStack_140;
      pppppppuVar8 = local_148;
      if (local_100 == local_110) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(undefined8 ********)(local_108 + lVar12 * 0x18) = pppppppuVar8;
      *(code **)(local_108 + 8 + lVar12 * 0x18) = pcVar11;
      *(undefined8 ********)(local_108 + 0x10 + lVar12 * 0x18) = pppppppuVar15;
      local_100 = lVar12 + 1;
    }
    if (*(longlong *)(param_8 + 0xe0) != -1) {
      cVar2 = *(char *)(param_8 + 0x15c);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      if (cVar2 == '\0') {
        pcVar11 = (code *)(*(code *)PTR___rust_alloc_00799000)();
        uVar3 = _UNK_0019ee8f;
        if (pcVar11 == (code *)0x0) goto LAB_005ea0f3;
        *(ulonglong *)(pcVar11 + 0x4a) = CONCAT26(_UNK_0019ee8d,_DAT_0019ee87);
        *(undefined8 *)(pcVar11 + 0x52) = uVar3;
        uVar3 = CONCAT62(_DAT_0019ee87,_UNK_0019ee85);
        *(undefined8 *)(pcVar11 + 0x40) = _DAT_0019ee7d;
        *(undefined8 *)(pcVar11 + 0x48) = uVar3;
        uVar3 = _UNK_0019ee75;
        *(undefined8 *)(pcVar11 + 0x30) = _DAT_0019ee6d;
        *(undefined8 *)(pcVar11 + 0x38) = uVar3;
        uVar3 = _UNK_0019ee65;
        *(undefined8 *)(pcVar11 + 0x20) = _DAT_0019ee5d;
        *(undefined8 *)(pcVar11 + 0x28) = uVar3;
        uVar3 = _UNK_0019ee55;
        *(undefined8 *)(pcVar11 + 0x10) = _DAT_0019ee4d;
        *(undefined8 *)(pcVar11 + 0x18) = uVar3;
        uVar6 = _UNK_0019ee49;
        uVar5 = _UNK_0019ee45;
        uVar4 = _UNK_0019ee41;
        uVar17 = _DAT_0019ee3d;
        *(undefined4 *)pcVar11 = _DAT_0019ee3d;
        *(undefined4 *)(pcVar11 + 4) = uVar4;
        *(undefined4 *)(pcVar11 + 8) = uVar5;
        *(undefined4 *)(pcVar11 + 0xc) = uVar6;
        pppppppuVar15 = (undefined8 *******)0x5a;
      }
      else {
        pcVar11 = (code *)(*(code *)PTR___rust_alloc_00799000)();
        uVar3 = _UNK_0019eeef;
        if (pcVar11 == (code *)0x0) goto LAB_005ea0f3;
        *(undefined8 *)(pcVar11 + 0x50) = _DAT_0019eee7;
        *(undefined8 *)(pcVar11 + 0x58) = uVar3;
        uVar3 = _UNK_0019eedf;
        *(undefined8 *)(pcVar11 + 0x40) = _DAT_0019eed7;
        *(undefined8 *)(pcVar11 + 0x48) = uVar3;
        uVar3 = _UNK_0019eecf;
        *(undefined8 *)(pcVar11 + 0x30) = _DAT_0019eec7;
        *(undefined8 *)(pcVar11 + 0x38) = uVar3;
        uVar3 = _UNK_0019eebf;
        *(undefined8 *)(pcVar11 + 0x20) = _DAT_0019eeb7;
        *(undefined8 *)(pcVar11 + 0x28) = uVar3;
        uVar3 = _UNK_0019eeaf;
        *(undefined8 *)(pcVar11 + 0x10) = _DAT_0019eea7;
        *(undefined8 *)(pcVar11 + 0x18) = uVar3;
        uVar6 = _UNK_0019eea3;
        uVar5 = _UNK_0019ee9f;
        uVar4 = _UNK_0019ee9b;
        uVar17 = _DAT_0019ee97;
        *(undefined4 *)pcVar11 = _DAT_0019ee97;
        *(undefined4 *)(pcVar11 + 4) = uVar4;
        *(undefined4 *)(pcVar11 + 8) = uVar5;
        *(undefined4 *)(pcVar11 + 0xc) = uVar6;
        pcVar11[0x60] = (code)0x2e;
        pppppppuVar15 = (undefined8 *******)0x61;
      }
      local_168 = pppppppuVar15;
      pcStack_160 = pcVar11;
      local_158 = pppppppuVar15;
      if (*(longlong *)(param_8 + 0xf8) != -1) {
        local_f8 = (undefined8 *******)(param_8 + 0xf8);
        local_148 = &local_f8;
        pcStack_140 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_148);
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if (local_120 != (undefined8 *******)0x0) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_168,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_158;
          pcVar11 = pcStack_160;
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
          pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        }
        local_158 = pppppppuVar15;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      if (*(longlong *)(param_8 + 0x110) != -1) {
        local_f8 = (undefined8 *******)(param_8 + 0x110);
        local_148 = &local_f8;
        pcStack_140 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_148);
        pppppppuVar16 = local_120;
        pppppppuVar8 = local_130;
        if ((undefined8 *******)((longlong)local_168 - (longlong)pppppppuVar15) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_168,pppppppuVar15,local_120,1,1)
          ;
          pppppppuVar15 = local_158;
LAB_005e9543:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e9543;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
        local_158 = pppppppuVar15;
        if (pppppppuVar8 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pcVar11 = pcStack_160;
      }
      lVar12 = local_100;
      pppppppuVar8 = local_168;
      if (local_100 == local_110) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(undefined8 ********)(local_108 + lVar12 * 0x18) = pppppppuVar8;
      *(code **)(local_108 + 8 + lVar12 * 0x18) = pcVar11;
      *(undefined8 ********)(local_108 + 0x10 + lVar12 * 0x18) = pppppppuVar15;
      local_100 = lVar12 + 1;
    }
    if (*(longlong *)(param_8 + 0x160) != -1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar12 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar12 == 0) goto LAB_005ea0f3;
      lVar14 = 0x9d;
      uVar17 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x9d);
      local_c8 = 0x9d;
      local_b8 = 0x9d;
      local_c0 = lVar12;
      if (*(longlong *)(param_8 + 0x170) != 0) {
        alloc[12e961f32105355]::str::join_generic_copy::
        <str,u8,alloc[12e961f32105355]::string::String>
                  (&local_130,*(undefined8 *)(param_8 + 0x168),*(longlong *)(param_8 + 0x170),
                   &DAT_0019edd8,2);
        local_158 = local_120;
        local_168 = local_130;
        pcStack_160 = uStack_128;
        pcStack_140 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        local_148 = &local_168;
        uVar17 = (*(code *)PTR_format_inner_00799048)((undefined4)local_130,&local_148);
        if (local_168 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
        pppppppuVar8 = local_120;
        pppppppuVar15 = local_130;
        if (local_120 == (undefined8 *******)0x0) {
          lVar14 = 0x9d;
        }
        else {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_c8,0x9d,local_120,1,1);
          lVar14 = local_b8;
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar8);
          lVar14 = lVar14 + (longlong)pppppppuVar8;
        }
        local_b8 = lVar14;
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      if (*(char *)(param_8 + 0x1a8) != '\0') {
        local_148 = (undefined8 *******)CONCAT44(local_148._4_4_,*(undefined4 *)(param_8 + 0x1ac));
        local_168 = &local_148;
        pcStack_160 = (code *)PTR_fmt_00799470;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        pppppppuVar8 = local_120;
        pppppppuVar15 = local_130;
        if ((undefined8 *******)(local_c8 - lVar14) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_c8,lVar14,local_120,1,1);
          lVar14 = local_b8;
LAB_005e976e:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar8);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e976e;
        lVar14 = lVar14 + (longlong)pppppppuVar8;
        local_b8 = lVar14;
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      if (*(longlong *)(param_8 + 400) != -1) {
        local_148 = (undefined8 *******)(param_8 + 400);
        local_168 = &local_148;
        pcStack_160 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_168);
        pppppppuVar8 = local_120;
        pppppppuVar15 = local_130;
        if ((undefined8 *******)(local_c8 - lVar14) < local_120) {
          uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_c8,lVar14,local_120,1,1);
          lVar14 = local_b8;
LAB_005e9815:
          uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar8);
        }
        else if (local_120 != (undefined8 *******)0x0) goto LAB_005e9815;
        lVar14 = lVar14 + (longlong)pppppppuVar8;
        local_b8 = lVar14;
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
        }
      }
      lVar10 = local_c0;
      lVar9 = local_c8;
      lVar12 = local_100;
      if (local_100 == local_110) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(longlong *)(local_108 + lVar12 * 0x18) = lVar9;
      *(longlong *)(local_108 + 8 + lVar12 * 0x18) = lVar10;
      *(longlong *)(local_108 + 0x10 + lVar12 * 0x18) = lVar14;
      local_100 = lVar12 + 1;
      if (*(longlong *)(param_8 + 0x188) != 0) {
        lVar12 = *(longlong *)(param_8 + 0x180);
        local_98 = *(longlong *)(param_8 + 0x188) * 0x68;
        lVar14 = 0;
        do {
          sanitize_prompt_line
                    (&local_148,*(undefined8 *)(lVar12 + 8 + lVar14),
                     *(undefined8 *)(lVar12 + 0x10 + lVar14));
          uVar17 = sanitize_prompt_line
                             (&local_168,*(undefined8 *)(lVar12 + 0x20 + lVar14),
                              *(undefined8 *)(lVar12 + 0x28 + lVar14));
          uStack_128 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                       ::fmt;
          local_118 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
          local_130 = &local_148;
          local_120 = &local_168;
          uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_130);
          if (local_168 != (undefined8 *******)0x0) {
            uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
          }
          if (local_148 != (undefined8 *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
          }
          local_148 = local_f8;
          pcStack_140 = pcStack_f0;
          local_138 = local_e8;
          if (*(longlong *)(lVar12 + 0x48 + lVar14) != -1) {
            uVar17 = sanitize_prompt_line
                               (&local_130,*(undefined8 *)(lVar12 + 0x50 + lVar14),
                                *(undefined8 *)(lVar12 + 0x58 + lVar14));
            pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                         ::fmt;
            local_f8 = (undefined8 *******)&local_130;
            uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_f8);
            if (local_130 != (undefined8 *******)0x0) {
              uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
            }
            pppppppuVar8 = local_158;
            pppppppuVar15 = local_168;
            if ((undefined8 *******)((longlong)local_148 - (longlong)local_138) < local_158) {
              uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (&local_148,local_138,local_158,1,1);
LAB_005e9a3a:
              pppppppuVar16 = local_138;
              uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar8);
            }
            else {
              pppppppuVar16 = local_138;
              if (local_158 != (undefined8 *******)0x0) goto LAB_005e9a3a;
            }
            local_138 = (undefined8 *******)((longlong)pppppppuVar16 + (longlong)pppppppuVar8);
            if (pppppppuVar15 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
            }
          }
          if (*(longlong *)(lVar12 + 0x40 + lVar14) == 0) {
            pppppppuVar15 = local_138;
          }
          else {
            uVar17 = sanitize_prompt_line(&local_130,*(undefined8 *)(lVar12 + 0x38 + lVar14));
            pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                         ::fmt;
            local_f8 = (undefined8 *******)&local_130;
            uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_f8);
            if (local_130 != (undefined8 *******)0x0) {
              uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
            }
            pppppppuVar16 = local_158;
            pppppppuVar8 = local_168;
            if ((undefined8 *******)((longlong)local_148 - (longlong)local_138) < local_158) {
              uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (&local_148,local_138,local_158,1,1);
LAB_005e9af8:
              pppppppuVar15 = local_138;
              uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppppppuVar16);
            }
            else {
              pppppppuVar15 = local_138;
              if (local_158 != (undefined8 *******)0x0) goto LAB_005e9af8;
            }
            pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + (longlong)pppppppuVar16);
            if (pppppppuVar8 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
            }
          }
          lVar9 = local_100;
          pcVar11 = pcStack_140;
          pppppppuVar8 = local_148;
          if (local_100 == local_110) {
            (*(code *)PTR_grow_one_00799328)();
          }
          *(undefined8 ********)(local_108 + lVar9 * 0x18) = pppppppuVar8;
          *(code **)(local_108 + 8 + lVar9 * 0x18) = pcVar11;
          *(undefined8 ********)(local_108 + 0x10 + lVar9 * 0x18) = pppppppuVar15;
          local_100 = lVar9 + 1;
          lVar14 = lVar14 + 0x68;
        } while (local_98 != lVar14);
      }
    }
    if (*(longlong *)(param_8 + 0x10) != 0) {
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#2}>>>
      ::from_iter(&local_f8,*(longlong *)(param_8 + 8),
                  *(longlong *)(param_8 + 0x10) * 0xa8 + *(longlong *)(param_8 + 8));
      unaff_RBX = pcStack_f0;
      alloc[12e961f32105355]::str::join_generic_copy::
      <str,u8,alloc[12e961f32105355]::string::String>
                (&local_130,pcStack_f0,local_e8,&DAT_0019edd8,2);
      local_158 = local_120;
      uVar17 = (undefined4)local_130;
      local_168 = local_130;
      pcStack_160 = uStack_128;
      local_130 = (undefined8 *******)&PTR_s_crag_0078e8f0;
      uStack_128 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_118 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                  fmt;
      local_120 = &local_168;
      uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_130);
      if (local_168 != (undefined8 *******)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
      }
      local_168 = local_148;
      pcStack_160 = pcStack_140;
      local_158 = local_138;
      lVar12 = *(longlong *)(param_8 + 0x1b8);
      pppppppuVar15 = local_e8;
      uVar17 = local_148._0_4_;
      if (lVar12 != -1) {
        lVar14 = 3;
        if (lVar12 < 0) {
          lVar14 = lVar12;
        }
                    /* WARNING: Could not recover jumptable at 0x005e9cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar13 = (longlong *)(*(code *)(&DAT_0019da1c + *(int *)(&DAT_0019da1c + lVar14 * 4)))();
        return plVar13;
      }
      goto LAB_005e9e1a;
    }
  }
  if (param_10 != 0) {
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<std[6c98fd8553dbae28]::path::PathBuf>,craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#3}>>>
    ::from_iter(&local_148,param_9,param_9 + param_10 * 0x18);
    pppppppuVar15 = local_138;
    pcVar11 = pcStack_140;
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,alloc[12e961f32105355]::string::String>
              (&local_130,pcStack_140,local_138,&DAT_0019edd8,2);
    local_158 = local_120;
    uVar17 = (undefined4)local_130;
    local_168 = local_130;
    pcStack_160 = uStack_128;
    uStack_128 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
    local_130 = &local_168;
    uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_130);
    if (local_168 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
    }
    lVar12 = local_100;
    if (local_100 == local_110) {
      (*(code *)PTR_grow_one_00799328)();
    }
    *(undefined8 *)(local_108 + 0x10 + lVar12 * 0x18) = local_50;
    puVar1 = (undefined4 *)(local_108 + lVar12 * 0x18);
    *puVar1 = local_60;
    puVar1[1] = uStack_5c;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    puVar7 = PTR___rust_dealloc_00798fc8;
    local_100 = lVar12 + 1;
    uVar17 = local_60;
    if (pppppppuVar15 != (undefined8 *******)0x0) {
      pcVar11 = pcVar11 + 8;
      do {
        if (*(longlong *)(pcVar11 + -8) != 0) {
          uVar17 = (*(code *)puVar7)(uVar17,1);
        }
        pcVar11 = pcVar11 + 0x18;
        pppppppuVar15 = (undefined8 *******)((longlong)pppppppuVar15 + -1);
      } while (pppppppuVar15 != (undefined8 *******)0x0);
    }
    if (local_148 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
    }
  }
  lVar12 = local_b0;
  if (local_100 != 0) {
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,alloc[12e961f32105355]::string::String>
              (&local_130,local_108,local_100,&DAT_0019ed35,1);
    local_158 = local_120;
    uVar17 = (undefined4)local_130;
    local_168 = local_130;
    pcStack_160 = uStack_128;
    uStack_128 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
    local_130 = &local_168;
    uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_130);
    if (local_168 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
    }
    lVar14 = local_d0;
    if (local_d0 == local_e0) {
      (*(code *)PTR_grow_one_00799328)();
    }
    *(undefined8 *)(local_d8 + 0x10 + lVar14 * 0x18) = local_38;
    puVar1 = (undefined4 *)(local_d8 + lVar14 * 0x18);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    local_d0 = lVar14 + 1;
  }
  if (lVar12 < 0) {
LAB_005ea0f3:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  if (lVar12 == 0) {
    lVar14 = 1;
    if (local_d0 != local_e0) goto LAB_005ea173;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar14 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar14 == 0) goto LAB_005ea0f3;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar12);
    if (local_d0 != local_e0) goto LAB_005ea173;
  }
  lVar9 = local_d0;
  (*(code *)PTR_grow_one_00799328)();
  local_d0 = lVar9;
LAB_005ea173:
  *(longlong *)(local_d8 + local_d0 * 0x18) = lVar12;
  *(longlong *)(local_d8 + 8 + local_d0 * 0x18) = lVar14;
  *(longlong *)(local_d8 + 0x10 + local_d0 * 0x18) = lVar12;
  local_d0 = local_d0 + 1;
  alloc[12e961f32105355]::str::join_generic_copy::<str,u8,alloc[12e961f32105355]::string::String>
            (&local_130,local_d8,local_d0,&DAT_0019ed36,2);
  local_a8[2] = (longlong)local_120;
  *(undefined4 *)local_a8 = (undefined4)local_130;
  *(undefined4 *)((longlong)local_a8 + 4) = local_130._4_4_;
  *(undefined4 *)(local_a8 + 1) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)local_a8 + 0xc) = uStack_128._4_4_;
  puVar7 = PTR___rust_dealloc_00798fc8;
  uVar17 = (undefined4)local_130;
  if (local_100 != 0) {
    lVar14 = local_108 + 8;
    lVar12 = local_100;
    do {
      if (*(longlong *)(lVar14 + -8) != 0) {
        uVar17 = (*(code *)puVar7)(uVar17,1);
      }
      lVar14 = lVar14 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (local_110 != 0) {
    uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  if (local_d0 != 0) {
    lVar14 = local_d8 + 8;
    lVar12 = local_d0;
    do {
      if (*(longlong *)(lVar14 + -8) != 0) {
        uVar17 = (*(code *)puVar7)(uVar17,1);
      }
      lVar14 = lVar14 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (local_e0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
  }
  return local_a8;
}


