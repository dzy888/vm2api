// 005d54e0 credential_health

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::credential::credential_health */

undefined1 * __rustcall
craggemini_core[66f3c71560d70857]::credential::credential_health
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong extraout_RDX_01;
  longlong extraout_RDX_02;
  longlong extraout_RDX_03;
  longlong extraout_RDX_04;
  longlong extraout_RDX_05;
  undefined8 *unaff_RBX;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *unaff_R13;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auVar21 [16];
  undefined8 local_248;
  undefined8 *puStack_240;
  ulonglong local_238;
  undefined8 *puStack_230;
  undefined8 local_228;
  undefined8 *puStack_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined8 *puStack_200;
  undefined8 *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  char local_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  uint uStack_1c4;
  ushort uStack_1c0;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined2 local_a0;
  undefined2 uStack_9e;
  uint uStack_9c;
  ushort uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_4e;
  undefined4 local_46;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_a8 = param_1;
  (*(code *)PTR__join_00799210)(&DAT_0019e42c,param_3,0x2f);
  puVar19 = local_1f8;
  uVar20 = (*(code *)PTR_symlink_metadata_007992d0)();
  uVar7 = uStack_1c0;
  if (CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)) == 2) {
    ppuVar2 = (undefined8 **)
              CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
    local_248 = ppuVar2;
    switch(uStack_1c0 & 3) {
    case 0:
      cVar8 = *(char *)(ppuVar2 + 2);
      break;
    case 1:
      cVar8 = *(char *)((longlong)ppuVar2 + 0x1f);
      break;
    case 2:
      lVar18 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar8 = (**(code **)(lVar18 + 8))();
      uVar20 = extraout_XMM0_Da;
      break;
    case 3:
      cVar8 = (char)uStack_1bc;
    }
    if (cVar8 == '\0') {
      puVar14 = (undefined8 *)0x0;
      uVar11 = (uint)uVar7;
    }
    else {
      local_e8 = (undefined8 **)&local_248;
      uStack_e0 = (undefined8 *)PTR_fmt_007991d0;
      uVar20 = (*(code *)PTR_format_inner_00799048)(uVar20,&local_e8);
      unaff_RBX = (undefined8 *)
                  CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
      unaff_R13 = (undefined8 *)
                  CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
      puVar14 = (undefined8 *)0x3;
      uVar11 = (uint)local_248;
      local_1e8 = local_1b8;
      ppuVar2 = local_248;
    }
    if ((1 < (uVar11 & 3) - 2) && ((uVar11 & 3) != 0)) {
      uStack_e0 = (undefined8 *)((longlong)ppuVar2 + -1);
      local_e8._1_7_ = (undefined7)((ulonglong)local_e8 >> 8);
      local_e8 = (undefined8 **)CONCAT71(local_e8._1_7_,3);
      uVar20 = (*(code *)PTR_drop_00799040)();
    }
    puVar19 = (undefined8 *)((ulonglong)unaff_RBX >> 0x20);
    lVar18 = -1;
    puVar17 = local_f0;
  }
  else {
    lVar18 = -1;
    puVar17 = local_f0;
    if ((local_190 & 0xf000) == 0x8000) {
      unaff_RBX = (undefined8 *)CONCAT44(uStack_174,uStack_178);
      if ((undefined1 *)((longlong)unaff_RBX + -0x8001) < (undefined1 *)0xffffffffffff8000) {
        puVar19 = (undefined8 *)(ulonglong)uStack_174;
        puVar14 = (undefined8 *)0x2;
      }
      else {
        uVar15 = (ulonglong)puStack_240 >> 8;
        puStack_240 = (undefined8 *)CONCAT71((uint7)uVar15 & 0xffff0000000000,1);
        local_248 = (undefined8 **)0x1b6000a0000;
        uVar20 = (*(code *)PTR__open_00799768)(puVar19);
        puVar4 = puStack_220;
        if ((int)local_228 == 1) {
          local_1e0 = puStack_220;
          uVar11 = (uint)puStack_220;
          switch(uVar11 & 3) {
          case 0:
            cVar8 = *(char *)(puStack_220 + 2);
            break;
          case 1:
            cVar8 = *(char *)((longlong)puStack_220 + 0x1f);
            break;
          case 2:
            lVar16 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar8 = (**(code **)(lVar16 + 8))();
            uVar20 = extraout_XMM0_Da_04;
            break;
          case 3:
            cVar8 = (char)((ulonglong)puStack_220 >> 0x20);
          }
          if (cVar8 == '\0') {
            puVar14 = (undefined8 *)0x0;
            puVar17 = local_f0;
          }
          else {
            local_e8 = &local_1e0;
            uStack_e0 = (undefined8 *)PTR_fmt_007991d0;
            uVar20 = (*(code *)PTR_format_inner_00799048)(uVar20,&local_e8);
            unaff_RBX = (undefined8 *)(ulonglong)CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8))
            ;
            puVar19 = (undefined8 *)(ulonglong)uStack_1c4;
            unaff_R13 = (undefined8 *)
                        CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
            uVar11 = (uint)local_1e0;
            puVar14 = (undefined8 *)0x3;
            puVar4 = local_1e0;
            local_1e8 = local_1b8;
            puVar17 = local_f0;
          }
          local_f0 = puVar14;
          puVar14 = local_f0;
          if ((1 < (uVar11 & 3) - 2) && ((uVar11 & 3) != 0)) {
            uStack_e0 = (undefined8 *)((longlong)puVar4 + -1);
            local_e8._1_7_ = (undefined7)((ulonglong)local_e8 >> 8);
            local_e8 = (undefined8 **)CONCAT71(local_e8._1_7_,3);
            uVar20 = (*(code *)PTR_drop_00799040)();
            puVar14 = local_f0;
            puVar17 = local_f0;
          }
        }
        else {
          uVar20 = local_228._4_4_;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar19 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005d7193;
          }
          local_218 = (undefined8 *)0x0;
          local_d8 = CONCAT44(local_d8._4_4_,uVar20);
          local_e8 = (undefined8 **)0x8001;
          uStack_e0 = (undefined8 *)0x8001;
          local_228 = unaff_RBX;
          puStack_220 = puVar19;
          auVar21 = std[6c98fd8553dbae28]::io::default_read_to_end::
                    <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                              (&local_e8,&local_228,0);
          if (auVar21._0_8_ == 1) {
            local_248 = &local_1e0;
            puStack_240 = (undefined8 *)PTR_fmt_007991d0;
            local_1e0 = auVar21._8_8_;
            (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da_03,&local_248);
            uVar11 = uStack_1c4;
            unaff_RBX = (undefined8 *)
                        CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
            unaff_R13 = (undefined8 *)
                        CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
            local_1e8 = local_1b8;
            if ((1 < ((uint)local_1e0 & 3) - 2) && (((ulonglong)local_1e0 & 3) != 0)) {
              puStack_240 = (undefined8 *)((longlong)local_1e0 + -1);
              local_248 = (undefined8 **)CONCAT71(local_248._1_7_,3);
              (*(code *)PTR_drop_00799040)();
            }
            puVar19 = (undefined8 *)(ulonglong)uVar11;
            uVar20 = (*(code *)PTR_close_00799030)();
            puVar14 = (undefined8 *)0x3;
LAB_005d7026:
            puVar17 = local_f0;
            if (local_228 == (undefined8 *)0x0) goto LAB_005d568f;
LAB_005d703c:
            uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          else {
            uVar20 = (*(code *)PTR_close_00799030)();
            if ((undefined8 *)0x8000 < local_218) {
              puVar19 = (undefined8 *)((ulonglong)local_218 >> 0x20);
              puVar14 = (undefined8 *)0x2;
              unaff_RBX = local_218;
              goto LAB_005d7026;
            }
            local_1c8 = (char)puStack_220;
            uStack_1c7 = (undefined1)((ulonglong)puStack_220 >> 8);
            uStack_1c6 = (undefined2)((ulonglong)puStack_220 >> 0x10);
            uStack_1c4 = (uint)((ulonglong)puStack_220 >> 0x20);
            uStack_1c0 = (ushort)local_218;
            uStack_1be = (undefined2)((ulonglong)local_218 >> 0x10);
            uStack_1bc = (undefined2)((ulonglong)local_218 >> 0x20);
            uStack_1ba = (undefined2)((ulonglong)local_218 >> 0x30);
            local_1b8 = (undefined8 *)0x0;
            uStack_1b0 = (undefined8 *)0x0;
            serde_json[dc3825464c436029]::de::from_trait::
            <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
                      (&local_e8,&local_1c8);
            if ((char)local_e8 == -1) {
              uVar20 = <craggemini_core[66f3c71560d70857]::credential::AgyCredential>::load_detailed
                       ::_closure_3_(&local_1c8,uStack_e0);
              puVar14 = (undefined8 *)
                        CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
              unaff_RBX = (undefined8 *)
                          CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
              local_1e8 = uStack_1b0;
              puVar19 = (undefined8 *)((ulonglong)unaff_RBX >> 0x20);
              unaff_R13 = local_1b8;
              goto LAB_005d7026;
            }
            local_248 = local_e8;
            puStack_240 = uStack_e0;
            local_238 = local_d8;
            puStack_230 = uStack_d0;
            if ((char)local_e8 != '\x05') {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_1e8 = (undefined8 *)0x25;
              unaff_R13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              uVar3 = _UNK_0019e691;
              if (unaff_R13 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_005d7193;
              }
              unaff_R13[2] = _DAT_0019e689;
              unaff_R13[3] = uVar3;
              uVar6 = _UNK_0019e685;
              uVar5 = _UNK_0019e681;
              uVar20 = _UNK_0019e67d;
              *(undefined4 *)unaff_R13 = _DAT_0019e679;
              *(undefined4 *)((longlong)unaff_R13 + 4) = uVar20;
              *(undefined4 *)(unaff_R13 + 1) = uVar5;
              *(undefined4 *)((longlong)unaff_R13 + 0xc) = uVar6;
              *(undefined8 *)((longlong)unaff_R13 + 0x1d) = 0x7463656a626f204e;
              uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_248,1);
              puVar14 = (undefined8 *)&DAT_00000004;
              unaff_RBX = (undefined8 *)0x25;
              puVar19 = (undefined8 *)0x0;
              goto LAB_005d7026;
            }
            decode(&local_1c8,&local_248);
            unaff_R13 = uStack_1b0;
            unaff_RBX = local_1b8;
            lVar18 = CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
            puVar14 = (undefined8 *)
                      CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
            local_1e8 = local_1a8;
            local_e8 = (undefined8 **)CONCAT44(uStack_19c,local_1a0);
            uStack_e0 = (undefined8 *)CONCAT44(uStack_194,uStack_198);
            local_d8 = CONCAT44(uStack_18c,local_190);
            uStack_d0 = (undefined8 *)CONCAT44(uStack_184,uStack_188);
            local_c8 = CONCAT44(uStack_17c,local_180);
            uStack_c0 = CONCAT44(uStack_174,uStack_178);
            local_b8 = local_170;
            uStack_b4 = uStack_16c;
            uStack_b0 = uStack_168;
            uStack_ac = uStack_164;
            uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(&local_248);
            puVar19 = (undefined8 *)((ulonglong)unaff_RBX >> 0x20);
            if (local_228 != (undefined8 *)0x0) goto LAB_005d703c;
          }
          puVar17 = local_f0;
        }
      }
    }
    else {
      puVar14 = (undefined8 *)0x1;
    }
  }
LAB_005d568f:
  local_f0 = puVar17;
  if (local_208 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
  }
  if (lVar18 == -1) {
    if (puVar14 == (undefined8 *)0x0) {
      local_208 = (undefined8 *)0x0;
      local_1f8 = (undefined8 *)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar19 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar19 + 3) = 0x746e6573;
        *(undefined4 *)puVar19 = 0x73657270;
        local_228 = (undefined8 *)&DAT_00000007;
        local_218 = (undefined8 *)&DAT_00000007;
        local_a0 = 1;
        local_1b8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
        uStack_1b0 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
        local_1c8 = '\x01';
        uStack_1c7 = 0;
        uStack_1c6 = uStack_9e;
        uStack_1c4 = uStack_9c;
        uStack_1c0 = uStack_98;
        uStack_1be = uStack_96;
        uStack_1bc = uStack_94;
        uStack_1ba = uStack_92;
        puStack_220 = puVar19;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_248,&local_208,&local_228,&local_1c8);
        if ((char)local_248 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_248);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar19 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar19 + 4) = 0x65;
          *(undefined4 *)puVar19 = 0x74617473;
          local_228 = (undefined8 *)&DAT_00000005;
          local_218 = (undefined8 *)&DAT_00000005;
          puStack_220 = puVar19;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar19 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005d7193;
          }
          *(undefined4 *)((longlong)puVar19 + 3) = 0x676e6973;
          *(undefined4 *)puVar19 = 0x7373696d;
          local_1c8 = '\x03';
          uStack_1c0 = 7;
          uStack_1be = 0;
          uStack_1bc = 0;
          uStack_1ba = 0;
          uStack_1b0 = (undefined8 *)&DAT_00000007;
          local_1b8 = puVar19;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_248,&local_208,&local_228,&local_1c8);
          if ((char)local_248 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_248);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = 0x656363615f736168;
            *(undefined2 *)(puVar19 + 1) = 0x7373;
            local_228 = (undefined8 *)0xa;
            local_218 = (undefined8 *)0xa;
            local_1b8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
            uStack_1b0 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
            local_1c8 = (char)local_a0;
            uStack_1c7 = (undefined1)((ushort)local_a0 >> 8);
            uStack_1c6 = uStack_9e;
            uStack_1c4 = uStack_9c;
            uStack_1c0 = uStack_98;
            uStack_1be = uStack_96;
            uStack_1bc = uStack_94;
            uStack_1ba = uStack_92;
            puStack_220 = puVar19;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_248,&local_208,&local_228,&local_1c8);
            if ((char)local_248 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_248);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar19 != (undefined8 *)0x0) {
              *puVar19 = 0x726665725f736168;
              *(undefined4 *)((longlong)puVar19 + 7) = 0x68736572;
              local_228 = (undefined8 *)0xb;
              local_218 = (undefined8 *)0xb;
              local_1b8 = (undefined8 *)CONCAT44(uStack_8c,local_90);
              uStack_1b0 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
              local_1c8 = (char)local_a0;
              uStack_1c7 = (undefined1)((ushort)local_a0 >> 8);
              uStack_1c6 = uStack_9e;
              uStack_1c4 = uStack_9c;
              uStack_1c0 = uStack_98;
              uStack_1be = uStack_96;
              uStack_1bc = uStack_94;
              uStack_1ba = uStack_92;
              puStack_220 = puVar19;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_248,&local_208,&local_228,&local_1c8);
              if ((char)local_248 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_248);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar19 != (undefined8 *)0x0) {
                *(undefined8 *)((longlong)puVar19 + 6) = 0x64695f7463656a6f;
                *puVar19 = 0x6a6f72705f736168;
                local_248 = (undefined8 **)&DAT_0000000e;
                local_238 = 0xe;
                puStack_240 = puVar19;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_1c8,&local_208,&local_248,&local_a0);
                if (local_1c8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_1c8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar19 != (undefined8 *)0x0) {
                  *(undefined8 *)((longlong)puVar19 + 5) = 0x687365726665725f;
                  *puVar19 = 0x65725f736465656e;
                  local_228 = (undefined8 *)&DAT_0000000d;
                  local_218 = (undefined8 *)&DAT_0000000d;
                  local_1c8 = '\x01';
                  uStack_1c7 = 1;
                  puStack_220 = puVar19;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_248,&local_208,&local_228,&local_1c8);
                  if ((char)local_248 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_248);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar19 != (undefined8 *)0x0) {
                    *puVar19 = 0x5f73657269707865;
                    *(undefined2 *)(puVar19 + 1) = 0x7461;
                    local_228 = (undefined8 *)0xa;
                    local_218 = (undefined8 *)0xa;
                    puStack_220 = puVar19;
                    <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                    ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                              (&local_1c8,"");
                    if (local_1c8 != -1) {
                      local_248 = (undefined8 **)
                                  CONCAT44(uStack_1c4,
                                           CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,local_1c8)));
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_1c8,&local_208,&local_228,&local_248);
                      if (local_1c8 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_1c8);
                      }
                      *(undefined8 **)(local_a8 + 0x18) = local_1f8;
                      *(undefined8 **)(local_a8 + 8) = local_208;
                      *(undefined8 **)(local_a8 + 0x10) = puStack_200;
                      *local_a8 = 5;
                      return local_a8;
                    }
                    local_248 = (undefined8 **)
                                CONCAT26(uStack_1ba,
                                         CONCAT24(uStack_1bc,CONCAT22(uStack_1be,uStack_1c0)));
                    (*(code *)PTR_unwrap_failed_00799028)
                              (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                               &local_248,&PTR_s_src_credential_rs_0078e4f0);
                    goto LAB_005d7193;
                  }
                }
              }
            }
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
    }
    else {
      puStack_220 = (undefined8 *)((ulonglong)unaff_RBX & 0xffffffff | (longlong)puVar19 << 0x20);
      uStack_210 = local_1e8;
      local_1e0 = (undefined8 *)0x0;
      local_1d0 = 0;
      local_228 = puVar14;
      local_218 = unaff_R13;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar19 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar19 + 3) = 0x746e6573;
        *(undefined4 *)puVar19 = 0x73657270;
        local_208 = (undefined8 *)&DAT_00000007;
        local_1f8 = (undefined8 *)0x7;
        local_50 = 0x101;
        local_1b8 = (undefined8 *)CONCAT44(uStack_3c,local_40);
        uStack_1b0 = (undefined8 *)CONCAT44(uStack_34,uStack_38);
        local_1c8 = '\x01';
        uStack_1c7 = 1;
        uStack_1c6 = (undefined2)local_4e;
        uStack_1c4 = (uint)((ulonglong)local_4e >> 0x10);
        uStack_1c0 = (ushort)((ulonglong)local_4e >> 0x30);
        uStack_1be = (undefined2)local_46;
        uStack_1bc = (undefined2)((uint)local_46 >> 0x10);
        uStack_1ba = local_42;
        puStack_200 = puVar19;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_248,&local_1e0,&local_208,&local_1c8);
        if ((char)local_248 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_248);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar19 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar19 + 4) = 0x65;
          *(undefined4 *)puVar19 = 0x74617473;
          local_208 = (undefined8 *)&DAT_00000005;
          local_1f8 = (undefined8 *)0x5;
          puVar17 = *(undefined8 **)(&DAT_0019f518 + (longlong)local_228 * 8);
          puStack_200 = puVar19;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar19 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005d7193;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,puVar17);
          local_1c8 = '\x03';
          uStack_1c0 = (ushort)puVar17;
          uStack_1be = (undefined2)((ulonglong)puVar17 >> 0x10);
          uStack_1bc = (undefined2)((ulonglong)puVar17 >> 0x20);
          uStack_1ba = (undefined2)((ulonglong)puVar17 >> 0x30);
          local_1b8 = puVar19;
          uStack_1b0 = puVar17;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_248,&local_1e0,&local_208,&local_1c8);
          if ((char)local_248 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_248);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar12 != (undefined4 *)0x0) {
            *(undefined1 *)(puVar12 + 1) = 0x72;
            *puVar12 = 0x6f727265;
            local_208 = (undefined8 *)0x5;
            local_1f8 = (undefined8 *)0x5;
            puStack_200 = (undefined8 *)puVar12;
                    /* WARNING: Could not recover jumptable at 0x005d59b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar13 = (undefined1 *)
                      (*(code *)(&DAT_0019d8e8 + *(int *)(&DAT_0019d8e8 + (longlong)local_228 * 4)))
                                ();
            return puVar13;
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
    }
    goto LAB_005d7193;
  }
  local_1c8 = (char)lVar18;
  uStack_1c7 = (undefined1)((ulonglong)lVar18 >> 8);
  uStack_1c6 = (undefined2)((ulonglong)lVar18 >> 0x10);
  uStack_1c4 = (uint)((ulonglong)lVar18 >> 0x20);
  uStack_1c0 = (ushort)puVar14;
  uStack_1be = (undefined2)((ulonglong)puVar14 >> 0x10);
  uStack_1bc = (undefined2)((ulonglong)puVar14 >> 0x20);
  uStack_1ba = (undefined2)((ulonglong)puVar14 >> 0x30);
  puVar19 = (undefined8 *)((ulonglong)unaff_RBX & 0xffffffff | (longlong)puVar19 << 0x20);
  local_1a8 = local_1e8;
  local_1a0 = (undefined4)local_e8;
  uStack_19c = local_e8._4_4_;
  uStack_198 = (undefined4)uStack_e0;
  uStack_194 = uStack_e0._4_4_;
  local_190 = (uint)local_d8;
  uStack_18c = local_d8._4_4_;
  uStack_188 = (undefined4)uStack_d0;
  uStack_184 = uStack_d0._4_4_;
  local_180 = (undefined4)local_c8;
  uStack_17c = local_c8._4_4_;
  uStack_178 = (undefined4)uStack_c0;
  uStack_174 = uStack_c0._4_4_;
  local_170 = local_b8;
  uStack_16c = uStack_b4;
  uStack_168 = uStack_b0;
  uStack_164 = uStack_ac;
  local_1b8 = puVar19;
  uStack_1b0 = unaff_R13;
  local_f0 = puVar14;
  local_228 = (undefined8 *)(*(code *)PTR_now_007993f0)();
  puStack_220 = (undefined8 *)CONCAT44(puStack_220._4_4_,(int)puVar14);
  (*(code *)PTR_duration_since_007993f8)(0,0);
  if ((char)local_248 == '\0') {
    local_f8 = (local_238 & 0xffffffff) / 1000000 + (longlong)puStack_240 * 1000;
  }
  else {
    local_f8 = 0;
  }
  uVar3 = CONCAT44(uStack_19c,local_1a0);
  ::<str>::trim_matches::<<char>::is_whitespace>(local_1e8,uVar3);
  local_58 = lVar18;
  if (extraout_RDX == 0) {
    ::<str>::trim_matches::<<char>::is_whitespace>
              (CONCAT44(uStack_18c,local_190),CONCAT44(uStack_184,uStack_188));
    puVar17 = (undefined8 *)((ulonglong)(extraout_RDX_01 != 0) * 4 + 7);
  }
  else {
    lVar18 = CONCAT44(uStack_164,uStack_168);
    if ((lVar18 < 1) || (local_f8 < lVar18)) {
      ::<str>::trim_matches::<<char>::is_whitespace>(local_1e8,uVar3);
      if (extraout_RDX_05 == 0) {
        puVar17 = (undefined8 *)&DAT_0000000e;
      }
      else if (lVar18 < 1) {
        puVar17 = (undefined8 *)&DAT_00000005;
      }
      else {
        puVar17 = (undefined8 *)((ulonglong)(lVar18 + -300000 <= local_f8) * 9 + 5);
      }
    }
    else {
      ::<str>::trim_matches::<<char>::is_whitespace>
                (CONCAT44(uStack_18c,local_190),CONCAT44(uStack_184,uStack_188));
      puVar17 = (undefined8 *)0x13;
      if (extraout_RDX_00 == 0) {
        puVar17 = (undefined8 *)&DAT_00000007;
      }
    }
  }
  local_110 = 0;
  local_100 = 0;
  local_60 = unaff_R13;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar14 + 3) = 0x746e6573;
    *(undefined4 *)puVar14 = 0x73657270;
    local_208 = (undefined8 *)&DAT_00000007;
    local_1f8 = (undefined8 *)0x7;
    local_248 = (undefined8 **)CONCAT62(local_248._2_6_,0x101);
    puStack_200 = puVar14;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_228,&local_110,&local_208,&local_248);
    if ((char)local_228 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_228);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined1 *)((longlong)puVar14 + 4) = 0x65;
      *(undefined4 *)puVar14 = 0x74617473;
      local_208 = (undefined8 *)&DAT_00000005;
      local_1f8 = (undefined8 *)0x5;
      puStack_200 = puVar14;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar15 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar15 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005d7193;
      }
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,puVar17);
      local_248 = (undefined8 **)CONCAT71(local_248._1_7_,3);
      puStack_240 = puVar17;
      local_238 = uVar15;
      puStack_230 = puVar17;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_228,&local_110,&local_208,&local_248);
      if ((char)local_228 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_228);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar17 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = 0x74656d5f68747561;
        *(undefined4 *)((longlong)puVar17 + 7) = 0x646f6874;
        local_208 = (undefined8 *)0xb;
        local_1f8 = (undefined8 *)0xb;
        puVar14 = (undefined8 *)&DAT_00000005;
        if (puVar19 != (undefined8 *)0x0) {
          puVar14 = puVar19;
        }
        puStack_200 = puVar17;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar15 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar15 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005d7193;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,puVar14);
        local_248 = (undefined8 **)CONCAT71(local_248._1_7_,3);
        puStack_240 = puVar14;
        local_238 = uVar15;
        puStack_230 = puVar14;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_228,&local_110,&local_208,&local_248);
        if ((char)local_228 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_228);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar19 != (undefined8 *)0x0) {
          *puVar19 = 0x656363615f736168;
          *(undefined2 *)(puVar19 + 1) = 0x7373;
          local_208 = (undefined8 *)0xa;
          local_1f8 = (undefined8 *)0xa;
          puStack_200 = puVar19;
          ::<str>::trim_matches::<<char>::is_whitespace>(local_1e8,uVar3);
          local_248._0_2_ = CONCAT11(extraout_RDX_02 != 0,1);
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_228,&local_110,&local_208,&local_248);
          if ((char)local_228 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_228);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar19 != (undefined8 *)0x0) {
            *puVar19 = 0x726665725f736168;
            *(undefined4 *)((longlong)puVar19 + 7) = 0x68736572;
            local_208 = (undefined8 *)0xb;
            local_1f8 = (undefined8 *)0xb;
            puStack_200 = puVar19;
            ::<str>::trim_matches::<<char>::is_whitespace>
                      (CONCAT44(uStack_18c,local_190),CONCAT44(uStack_184,uStack_188));
            local_248._0_2_ = CONCAT11(extraout_RDX_03 != 0,1);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_228,&local_110,&local_208,&local_248);
            if ((char)local_228 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_228);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar19 != (undefined8 *)0x0) {
              *(undefined8 *)((longlong)puVar19 + 6) = 0x64695f7463656a6f;
              *puVar19 = 0x6a6f72705f736168;
              local_208 = (undefined8 *)&DAT_0000000e;
              local_1f8 = (undefined8 *)0xe;
              lVar18 = CONCAT44(uStack_17c,local_180);
              local_248._0_2_ = CONCAT11(lVar18 != -1,1);
              puStack_200 = puVar19;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_228,&local_110,&local_208,&local_248);
              if ((char)local_228 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_228);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar19 != (undefined8 *)0x0) {
                *(undefined8 *)((longlong)puVar19 + 5) = 0x687365726665725f;
                *puVar19 = 0x65725f736465656e;
                local_208 = (undefined8 *)&DAT_0000000d;
                local_1f8 = (undefined8 *)0xd;
                puStack_200 = puVar19;
                ::<str>::trim_matches::<<char>::is_whitespace>(local_1e8,uVar3);
                if (extraout_RDX_04 == 0) {
                  bVar9 = true;
                }
                else if (CONCAT44(uStack_164,uStack_168) < 1) {
                  bVar9 = false;
                }
                else {
                  bVar9 = CONCAT44(uStack_164,uStack_168) + -300000 <= local_f8;
                }
                local_248._0_2_ = CONCAT11(bVar9,1);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_228,&local_110,&local_208,&local_248);
                if ((char)local_228 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_228);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar19 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar19 != (undefined8 *)0x0) {
                  *puVar19 = 0x5f73657269707865;
                  *(undefined2 *)(puVar19 + 1) = 0x7461;
                  local_1e0 = (undefined8 *)0xa;
                  local_1d0 = 10;
                  if ((longlong)CONCAT44(uStack_164,uStack_168) < 1) {
                    uVar10 = 0;
                  }
                  else {
                    puStack_240 = (undefined8 *)0x0;
                    uVar10 = 2;
                    local_238 = CONCAT44(uStack_164,uStack_168);
                  }
                  local_248 = (undefined8 **)CONCAT71(local_248._1_7_,uVar10);
                  local_1d8 = puVar19;
                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                  ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                            (&local_228,&local_248);
                  if ((char)local_228 != -1) {
                    local_1f8 = local_218;
                    uStack_1f0 = (undefined4)uStack_210;
                    uStack_1ec = uStack_210._4_4_;
                    local_208 = local_228;
                    puStack_200 = puStack_220;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_228,&local_110,&local_1e0,&local_208);
                    if ((char)local_228 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_228);
                    }
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_248);
                    puVar13 = local_a8;
                    *(undefined8 *)(local_a8 + 0x18) = local_100;
                    *(undefined4 *)(local_a8 + 8) = (undefined4)local_110;
                    *(undefined4 *)(local_a8 + 0xc) = local_110._4_4_;
                    *(undefined4 *)(local_a8 + 0x10) = uStack_108;
                    *(undefined4 *)(local_a8 + 0x14) = uStack_104;
                    *local_a8 = 5;
                    uVar20 = (undefined4)local_110;
                    if (local_58 != 0) {
                      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_110,1);
                    }
                    if (local_60 != (undefined8 *)0x0) {
                      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
                    }
                    if (CONCAT44(uStack_194,uStack_198) != 0) {
                      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
                    }
                    if (lVar18 == -1) {
                      return puVar13;
                    }
                    if (lVar18 == 0) {
                      return puVar13;
                    }
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
                    return puVar13;
                  }
                  local_208 = puStack_220;
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                             &local_208,&PTR_s_src_credential_rs_0078e4d8);
                  goto LAB_005d7193;
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005d7193:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


