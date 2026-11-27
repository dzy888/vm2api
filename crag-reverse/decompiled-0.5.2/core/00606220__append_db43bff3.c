// 00606220 append

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::journal::Journal>::append */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::journal::Journal>::append
          (longlong param_1,ulonglong param_2,char *param_3,longlong *param_4,char *param_5,
          char *param_6,char param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  byte bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong extraout_XMM0_Qa_03;
  undefined8 uVar11;
  longlong extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  longlong extraout_XMM0_Qa_06;
  longlong extraout_XMM0_Qa_07;
  ulonglong local_138;
  char *pcStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  char *local_118;
  longlong local_110;
  undefined8 *local_108;
  longlong local_100;
  ulonglong local_f0;
  char *local_e8;
  ulonglong local_e0;
  char *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  char *local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  char *local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  char *local_78;
  char local_70 [8];
  ulonglong local_68;
  char *pcStack_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_118 = param_6;
  local_80 = param_2;
  local_78 = param_5;
  if ((param_5 == &DAT_00000008) && (*param_4 == 0x6465747065636361)) {
    param_2 = 0x16;
    pcVar8 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_6);
    if ((pcVar8 != (char *)0x0) &&
       ((*pcVar8 == '\x03' &&
        (lVar5 = *(longlong *)(pcVar8 + 0x18), 0xffffffffffffff7f < lVar5 - 0x81U)))) {
      bVar2 = **(byte **)(pcVar8 + 0x10);
      if (((byte)(bVar2 - 0x30) < 10) || ((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a)) {
        lVar9 = 0;
        do {
          bVar2 = (*(byte **)(pcVar8 + 0x10))[lVar9];
          if (9 < (byte)(bVar2 - 0x30)) {
            bVar10 = (bVar2 & 0xdf) + 0xbf;
            param_2 = (ulonglong)bVar10;
            if ((0x19 < bVar10) &&
               ((0x32 < bVar2 - 0x2d ||
                ((0x4000000000003U >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) == 0))))
            goto LAB_0060626f;
          }
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        if (lVar5 == 0) {
          lVar9 = 1;
          uVar11 = extraout_XMM0_Qa_00;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar9 == 0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00606d72;
          }
          uVar11 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,lVar5);
        }
        param_2 = *(ulonglong *)(param_1 + 0x18);
        if ((param_2 != 0xffffffffffffffff) && (param_2 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        }
        *(longlong *)(param_1 + 0x18) = lVar5;
        *(longlong *)(param_1 + 0x20) = lVar9;
        *(longlong *)(param_1 + 0x28) = lVar5;
      }
    }
  }
LAB_0060626f:
  uVar7 = 0xffffffffffffffff;
  if (*(ulonglong *)(param_1 + 0x50) < 0xffffffffffffff60) {
    uVar7 = *(ulonglong *)(param_1 + 0x50) + 0xa0;
  }
  if ((*(ulonglong *)(param_1 + 0x58) < uVar7) &&
     (lVar5 = rotate_in_place(param_1,param_2), lVar5 != 0)) {
    *(undefined1 *)(param_1 + 0x66) = 1;
    pcVar8 = local_118;
    goto LAB_006062a2;
  }
  local_138 = 0;
  local_128 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar6 + 2) = 0x71;
    *(undefined2 *)puVar6 = 0x6573;
    local_110 = 3;
    local_100 = 3;
    local_e0 = *(longlong *)(param_1 + 0x48) + 1;
    local_f0 = CONCAT71(local_f0._1_7_,2);
    local_e8 = (char *)0x0;
    local_108 = puVar6;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_a8,&local_138,&local_110,&local_f0);
    if ((char)local_a8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_a8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0x5f6e6f6973736573;
      *(undefined2 *)(puVar6 + 1) = 0x6469;
      local_110 = 10;
      local_100 = 10;
      pcVar8 = *(char **)(param_1 + 0x10);
      local_108 = puVar6;
      if ((longlong)pcVar8 < 0) {
LAB_006063bf:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00606d72;
      }
      if (pcVar8 == (char *)0x0) {
        uVar7 = 1;
      }
      else {
        local_50 = param_1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar7 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar7 == 0) goto LAB_006063bf;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,pcVar8);
        param_1 = local_50;
      }
      local_f0 = CONCAT71(local_f0._1_7_,3);
      local_e8 = pcVar8;
      local_e0 = uVar7;
      local_d8 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_a8,&local_138,&local_110,&local_f0);
      if ((char)local_a8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_a8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0x5f74736575716572;
        *(undefined2 *)(puVar6 + 1) = 0x6469;
        local_110 = 10;
        local_100 = 10;
        local_108 = puVar6;
        if ((longlong)param_3 < 0) {
LAB_00606589:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00606d72;
        }
        if (param_3 == (char *)0x0) {
          uVar7 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar7 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar7 == 0) goto LAB_00606589;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,param_3);
        }
        local_f0 = CONCAT71(local_f0._1_7_,3);
        local_e8 = param_3;
        local_e0 = uVar7;
        local_d8 = param_3;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_a8,&local_138,&local_110,&local_f0);
        if ((char)local_a8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_a8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        pcVar8 = local_78;
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined4 *)puVar6 = 0x65707974;
          local_110 = 4;
          local_100 = 4;
          local_108 = puVar6;
          if ((longlong)local_78 < 0) {
LAB_00606676:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00606d72;
          }
          if (local_78 == (char *)0x0) {
            uVar7 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar7 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar7 == 0) goto LAB_00606676;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,pcVar8);
          }
          local_f0 = CONCAT71(local_f0._1_7_,3);
          local_e8 = pcVar8;
          local_d8 = pcVar8;
          local_e0 = uVar7;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_a8,&local_138,&local_110,&local_f0);
          if ((char)local_a8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_a8);
          }
          local_a8 = &local_68;
          local_68 = local_138;
          pcStack_60 = pcStack_130;
          local_58 = local_128;
          local_70[0] = '\x05';
          local_a0 = *(undefined8 *)local_118;
          uStack_98 = *(ulonglong *)(local_118 + 8);
          local_90 = *(char **)(local_118 + 0x10);
          uStack_88 = *(undefined8 *)(local_118 + 0x18);
          if ((char)local_a0 == '\x05') {
            local_b0 = 0;
            if (uStack_98 != 0) {
              local_b0 = uStack_88;
            }
            local_f0 = (ulonglong)(uStack_98 != 0);
            local_e8 = (char *)0x0;
            local_c8 = 0;
            local_118 = param_3;
            local_e0 = uStack_98;
            local_d8 = local_90;
            local_d0 = local_f0;
            local_c0 = uStack_98;
            local_b8 = local_90;
            while ((<alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::dying_next(&local_110,&local_f0), local_110 != 0 &&
                   (lVar5 = *(longlong *)(local_110 + 0x168 + local_100 * 0x18), lVar5 != -1))) {
              lVar9 = local_110 + local_100 * 0x18;
              local_40 = *(undefined8 *)(lVar9 + 0x170);
              uStack_38 = *(undefined8 *)(lVar9 + 0x178);
              puVar1 = (ulonglong *)(local_110 + local_100 * 0x20);
              local_138 = *puVar1;
              pcStack_130 = (char *)puVar1[1];
              puVar1 = (ulonglong *)(local_110 + 0x10 + local_100 * 0x20);
              local_128 = *puVar1;
              uStack_120 = puVar1[1];
              local_48 = lVar5;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_110,&local_68,&local_48,&local_138);
              if ((char)local_110 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_110);
              }
            }
            <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_f0);
            param_3 = local_118;
          }
          else {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_a0);
          }
          serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>
                    (&local_f0,local_70);
          uVar7 = local_e0;
          if (local_f0 == 0xffffffffffffffff) {
            lVar5 = (*(code *)PTR_from_007993d8)();
            pcVar8 = local_70;
            goto LAB_006062a2;
          }
          local_138 = local_f0;
          pcStack_130 = local_e8;
          local_128 = local_e0;
          if (local_e0 == local_f0) {
            (*(code *)PTR_grow_one_007993d0)();
          }
          pcStack_130[uVar7] = '\n';
          local_128 = uVar7 + 1;
          uVar7 = 0xffffffffffffffff;
          if (!CARRY8(*(ulonglong *)(param_1 + 0x50),local_128)) {
            uVar7 = *(ulonglong *)(param_1 + 0x50) + local_128;
          }
          if ((*(ulonglong *)(param_1 + 0x58) < uVar7) && (1 < *(ulonglong *)(param_1 + 0x48))) {
            lVar5 = rotate_in_place(param_1);
            lVar9 = extraout_XMM0_Qa_03;
            if (lVar5 != 0) goto LAB_00606a78;
            if (local_70[0] == '\x05') {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar6 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00606d72;
              }
              *(undefined1 *)((longlong)puVar6 + 2) = 0x71;
              *(undefined2 *)puVar6 = 0x6573;
              local_110 = 3;
              local_100 = 3;
              local_e0 = *(longlong *)(param_1 + 0x48) + 1;
              local_f0 = CONCAT71(local_f0._1_7_,2);
              local_e8 = (char *)0x0;
              local_108 = puVar6;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_a8,&local_68,&local_110,&local_f0);
              if ((char)local_a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_a8);
              }
            }
            uVar11 = serde_json[dc3825464c436029]::ser::to_vec::
                     <serde_json[dc3825464c436029]::value::Value>(&local_f0,local_70);
            uVar4 = local_e0;
            pcVar8 = local_e8;
            uVar7 = local_f0;
            if (local_f0 != 0xffffffffffffffff) {
              if (local_138 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
              }
              local_138 = uVar7;
              pcStack_130 = pcVar8;
              local_128 = uVar4;
              if (uVar4 == uVar7) {
                (*(code *)PTR_grow_one_007993d0)();
              }
              pcStack_130[uVar4] = '\n';
              local_128 = uVar4 + 1;
              goto LAB_00606a5c;
            }
            lVar5 = (*(code *)PTR_from_007993d8)();
            lVar9 = extraout_XMM0_Qa_07;
          }
          else {
LAB_00606a5c:
            uVar7 = local_128;
            lVar5 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                              (param_1 + 0x60,pcStack_130,local_128);
            lVar9 = extraout_XMM0_Qa_04;
            if ((lVar5 == 0) &&
               ((param_7 == '\0' ||
                (lVar5 = (*(code *)PTR_sync_data_00799770)(), lVar9 = extraout_XMM0_Qa_06,
                lVar5 == 0)))) {
              lVar9 = *(longlong *)(param_1 + 0x48);
              *(longlong *)(param_1 + 0x48) = _DAT_00183840 + lVar9;
              *(ulonglong *)(param_1 + 0x50) = uVar7 + *(longlong *)(param_1 + 0x50);
              lVar5 = 0;
              switch(local_78) {
              case (char *)0x6:
                if (*(short *)((longlong)param_4 + 4) == 0x7469 && (int)*param_4 == 0x6d627573) {
                  lVar9 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                    (&local_f0,param_3,0,1,1);
                  uVar7 = local_e0;
                  pcVar8 = local_e8;
                  if ((char)local_f0 != '\0') {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_00606d72;
                  }
                  if (param_3 != (char *)0x0) {
                    lVar9 = (*(code *)PTR_memcpy_00799008)(lVar9,param_3);
                  }
                  if ((*(longlong *)(param_1 + 0x30) != -1) && (*(longlong *)(param_1 + 0x30) != 0))
                  {
                    lVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar9,1);
                  }
                  *(char **)(param_1 + 0x30) = pcVar8;
                  *(ulonglong *)(param_1 + 0x38) = uVar7;
                  *(char **)(param_1 + 0x40) = param_3;
                  *(undefined2 *)(param_1 + 100) = 0;
                }
                break;
              default:
                goto switchD_00606b5b_caseD_7;
              case (char *)0x8:
                if (*param_4 == 0x646e655f6e727574) {
LAB_00606cac:
                  if ((*(longlong *)(param_1 + 0x30) != -1) && (*(longlong *)(param_1 + 0x30) != 0))
                  {
                    lVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar9,1);
                  }
                  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
                  *(undefined2 *)(param_1 + 100) = 0;
                }
                break;
              case (char *)0xa:
                if ((short)param_4[1] == 0x6465 && *param_4 == 0x6c69636e6f636572)
                goto LAB_00606cac;
                break;
              case (char *)0xc:
                if ((int)param_4[1] == 0x646e655f && *param_4 == 0x72656469766f7270) {
                  *(undefined1 *)(param_1 + 100) = 1;
                }
                break;
              case (char *)0xd:
                if (*(longlong *)((longlong)param_4 + 5) == 0x6c6c61635f6c6f6f &&
                    *param_4 == 0x6c6f6f745f70636d) {
                  *(undefined1 *)(param_1 + 0x65) = 1;
                }
                break;
              case (char *)0xe:
                if (*(longlong *)((longlong)param_4 + 6) == 0x74726174735f7265 &&
                    *param_4 == 0x72656469766f7270) {
                  *(undefined1 *)(param_1 + 100) = 0;
                }
              }
              lVar5 = 0;
            }
            else {
LAB_00606a78:
              *(undefined1 *)(param_1 + 0x66) = 1;
            }
          }
switchD_00606b5b_caseD_7:
          if (local_138 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(lVar9,1);
          }
          pcVar8 = local_70;
LAB_006062a2:
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (pcVar8);
          return lVar5;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00606d72:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


