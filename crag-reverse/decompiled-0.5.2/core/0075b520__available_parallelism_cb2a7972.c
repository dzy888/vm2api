// 0075b520 available_parallelism

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std[6c98fd8553dbae28]::thread::functions::available_parallelism */

undefined1  [16] __rustcall std[6c98fd8553dbae28]::thread::functions::available_parallelism(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong extraout_RDX;
  ulonglong extraout_RDX_00;
  char *extraout_RDX_01;
  char *extraout_RDX_02;
  undefined **ppuVar20;
  char *pcVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  char *pcVar25;
  undefined8 uVar26;
  char *pcVar27;
  ulonglong *puVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar33;
  ushort uVar34;
  undefined4 uVar35;
  undefined6 uVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  char cVar45;
  char cVar47;
  char cVar49;
  byte bVar50;
  char cVar51;
  byte bVar52;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar44;
  byte bVar46;
  byte bVar48;
  undefined1 auVar43 [16];
  undefined1 auVar53 [12];
  undefined1 auVar55 [14];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar54 [12];
  undefined1 auVar56 [14];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [12];
  undefined1 auVar65 [14];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar64 [12];
  undefined1 auVar66 [14];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [12];
  undefined1 auVar78 [14];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar79 [14];
  undefined1 auVar80 [14];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar77 [12];
  undefined1 auVar81 [14];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [12];
  undefined1 auVar101 [12];
  undefined1 auVar102 [14];
  undefined1 auVar105 [14];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar99 [12];
  undefined1 auVar100 [12];
  undefined1 auVar103 [14];
  undefined1 auVar104 [14];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [12];
  undefined1 auVar118 [12];
  undefined1 auVar119 [14];
  undefined1 auVar120 [14];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined8 *local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  char *local_c0;
  int local_b8;
  undefined4 local_b4;
  char *local_b0;
  ulonglong local_a8;
  char *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  longlong local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int *local_48;
  char *local_40;
  byte local_31;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar7 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar7 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0075cc61;
  }
  local_d8 = 0x80;
  local_c8 = 0;
  local_78 = (char *)0x1b600000000;
  uVar19 = (ulonglong)local_70 >> 8;
  local_70 = (undefined8 *)CONCAT71((uint7)uVar19 & 0xffff0000000000,1);
  local_268[8] = s__proc_self_cgroup_001c0b34[8];
  local_268[9] = s__proc_self_cgroup_001c0b34[9];
  local_268[10] = s__proc_self_cgroup_001c0b34[10];
  local_268[0xb] = s__proc_self_cgroup_001c0b34[0xb];
  local_268[0xc] = s__proc_self_cgroup_001c0b34[0xc];
  local_268[0xd] = s__proc_self_cgroup_001c0b34[0xd];
  local_268[0xe] = s__proc_self_cgroup_001c0b34[0xe];
  local_268[0xf] = s__proc_self_cgroup_001c0b34[0xf];
  local_268[0] = s__proc_self_cgroup_001c0b34[0];
  local_268[1] = s__proc_self_cgroup_001c0b34[1];
  local_268[2] = s__proc_self_cgroup_001c0b34[2];
  local_268[3] = s__proc_self_cgroup_001c0b34[3];
  local_268[4] = s__proc_self_cgroup_001c0b34[4];
  local_268[5] = s__proc_self_cgroup_001c0b34[5];
  local_268[6] = s__proc_self_cgroup_001c0b34[6];
  local_268[7] = s__proc_self_cgroup_001c0b34[7];
  local_258._0_2_ = 0x70;
  puVar28 = &local_98;
  local_d0 = lVar7;
  uVar30 = (*(code *)PTR_from_bytes_with_nul_0079abd0)(s__proc_self_cgroup_001c0b34._0_8_,0x12);
  if ((int)local_98 == 1) {
    puVar12 = &DAT_00796450;
LAB_0075b5fa:
    if ((1 < ((uint)puVar12 & 3) - 2) && (((ulonglong)puVar12 & 3) != 0)) {
      local_268._8_8_ = puVar12 + -1;
      local_268[0] = 3;
      uVar30 = (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    uVar30 = <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_58,local_90,&local_78);
    if ((int)local_58 == 1) {
      puVar12 = local_50;
      goto LAB_0075b5fa;
    }
    local_b8 = local_58._4_4_;
    local_58 = &local_b8;
    auVar91 = fs::buffer_capacity_required();
    uVar19 = 0;
    if ((auVar91._0_8_ & 1) != 0) {
      uVar19 = auVar91._8_8_;
    }
    if (uVar19 < 0x81) {
LAB_0075b6b5:
      auVar91 = io::default_read_to_end::<&std[6c98fd8553dbae28]::fs::File>
                          (&local_58,&local_d8,auVar91._0_8_);
      uVar19 = auVar91._8_8_;
      if (auVar91._0_8_ != 1) {
        uVar30 = (*(code *)PTR_close_00799030)();
        lVar7 = local_d0;
        uVar19 = local_c8;
        pcVar21 = (char *)0xffffffffffffffff;
LAB_0075b6fa:
        if (uVar19 != 0) {
          lVar22 = lVar7 + uVar19;
          lVar8 = lVar7;
          local_60 = pcVar21;
LAB_0075b714:
          uVar17 = 0;
          do {
            cVar33 = *(char *)(lVar8 + uVar17);
            if (cVar33 == '\n') {
              uVar19 = uVar19 + ~uVar17;
              lVar7 = lVar8 + uVar17 + 1;
              uVar18 = uVar17;
              break;
            }
            lVar1 = lVar8 + uVar17;
            uVar17 = uVar17 + 1;
            lVar7 = lVar8;
            uVar18 = uVar19;
          } while (lVar1 + 1 != lVar22);
          if (uVar18 != 0) {
            lVar22 = uVar18 - 2;
            uVar17 = 0;
            do {
              if (*(char *)(lVar8 + uVar17) == ':') {
                if (uVar18 - 1 == uVar17) {
                  if (pcVar21 == (char *)0xffffffffffffffff) goto LAB_0075ba4b;
                  goto LAB_0075b819;
                }
                local_40 = (char *)(~uVar17 + uVar18);
                local_a0 = (char *)(lVar8 + uVar17 + 1);
                pcVar21 = (char *)0x0;
                goto LAB_0075b7e0;
              }
              uVar17 = uVar17 + 1;
              lVar22 = lVar22 + -1;
            } while (uVar18 != uVar17);
          }
          if ((cVar33 == '\n') && (uVar19 != 0)) goto LAB_0075b710;
        }
        goto LAB_0075c2d0;
      }
    }
    else {
      uVar17 = 0x100;
      if (0x100 < uVar19) {
        uVar17 = uVar19;
      }
      if ((longlong)uVar17 < 0) {
        uVar17 = 0;
        puVar28 = (ulonglong *)local_268;
      }
      else {
        lVar7 = (*(code *)PTR___rust_realloc_007997f0)(uVar17,1);
        if (lVar7 != 0) {
          local_d8 = uVar17;
          local_d0 = lVar7;
          goto LAB_0075b6b5;
        }
        local_268._0_8_ = 1;
      }
      *puVar28 = uVar17;
      uVar19 = 0x2600000003;
    }
    if ((1 < ((uint)uVar19 & 3) - 2) && ((uVar19 & 3) != 0)) {
      local_268._8_8_ = uVar19 - 1;
      local_268[0] = 3;
      (*(code *)PTR_drop_00799040)();
    }
    uVar30 = (*(code *)PTR_close_00799030)();
  }
LAB_0075bb3e:
  local_40 = (char *)0xffffffffffffffff;
  goto joined_r0x0075cb92;
  while( true ) {
    pcVar21 = pcVar21 + 1;
    pcVar27 = local_40;
    if (pcVar21 + (uVar17 - uVar18) + 1 == (char *)0x0) break;
LAB_0075b7e0:
    cVar45 = pcVar21[lVar8 + uVar17 + 1];
    if (cVar45 == ':') {
      local_40 = (char *)(lVar22 - (longlong)pcVar21);
      local_a0 = pcVar21 + lVar8 + uVar17 + 2;
      pcVar27 = pcVar21;
      break;
    }
  }
  local_a8 = CONCAT71(local_a8._1_7_,pcVar27 == (char *)0x0);
  if (pcVar27 == (char *)0x0) {
    if (local_60 == (char *)0xffffffffffffffff) {
      if (cVar45 != ':') goto LAB_0075ba4b;
LAB_0075b9f5:
      pcVar21 = local_60;
      if (local_40 == (char *)0x0) {
        (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00796678,0)
        ;
        goto LAB_0075ccb7;
      }
      pcVar27 = local_40 + -1;
      local_40 = pcVar27;
      if (pcVar27 == (char *)0x0) {
        local_a0 = (char *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar25 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar25 == (char *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0075ccb7;
        }
        local_a0 = pcVar25;
        uVar30 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,pcVar27);
      }
      if ((longlong)pcVar21 < 1) {
        local_31 = (byte)local_a8;
        local_c0 = local_40;
        local_80 = local_a0;
        pcVar21 = local_40;
        goto joined_r0x0075badc;
      }
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
      local_80 = local_a0;
      local_c0 = local_40;
      uVar17 = local_a8 & 0xff;
      local_31 = (byte)local_a8;
      pcVar21 = local_40;
      if (cVar33 == '\n') goto LAB_0075b6fa;
LAB_0075bed9:
      if ((uVar17 & 1) != 0) goto LAB_0075c2e4;
      goto LAB_0075bee6;
    }
LAB_0075b819:
    pcVar21 = local_60;
    if (cVar33 != '\n') {
      uVar17 = (ulonglong)local_31;
      goto LAB_0075bed9;
    }
    if (uVar19 == 0) goto LAB_0075c2da;
  }
  else {
    uVar30 = (*(code *)PTR_from_utf8_00799468)();
    if ((char)local_58 == '\0') {
      auVar91._8_8_ = 0;
      auVar91._0_8_ = local_48;
      local_268 = auVar91 << 0x40;
      local_258._8_8_ = local_48;
      local_258._0_8_ = local_50;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = local_48;
      local_248 = auVar62 << 0x40;
      local_238[8] = 1;
      local_238._0_8_ = 0x2c0000002c;
      local_228._0_2_ = 1;
      do {
        lVar22 = local_258._0_8_;
        uVar30 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                 ::next_match(&local_98,local_258);
        uVar26 = local_268._0_8_;
        if ((int)local_98 == 1) {
          lVar8 = local_90 - local_268._0_8_;
          local_268._0_8_ = local_88;
        }
        else {
          if (local_228[1] != '\0') break;
          local_228[1] = 1;
          lVar8 = local_268._8_8_ - local_268._0_8_;
          if ((local_268._8_8_ != local_268._0_8_ | local_228[0]) != 1) break;
          lVar22 = local_258._0_8_;
        }
        if ((lVar8 == 3) &&
           ((char)((short *)(lVar22 + uVar26))[1] == 'u' && *(short *)(lVar22 + uVar26) == 0x7063))
        {
          if (cVar45 == ':') goto LAB_0075b9f5;
          if ((longlong)local_60 < 1) goto LAB_0075ba4b;
          uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
          pcVar21 = (char *)0xffffffffffffffff;
          if (cVar33 != '\n') goto LAB_0075bb3e;
          goto LAB_0075b6fa;
        }
      } while (local_228[1] != '\x01');
    }
    pcVar21 = local_60;
    if ((cVar33 != '\n') || (uVar19 == 0)) goto LAB_0075c2d0;
  }
LAB_0075b710:
  lVar22 = lVar7 + uVar19;
  lVar8 = lVar7;
  goto LAB_0075b714;
LAB_0075bf60:
  lVar7 = lVar7 + 8;
  if (lVar7 == 0x18) goto LAB_0075c199;
  goto LAB_0075bf6e;
LAB_0075c2e4:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  pcVar27 = local_c0;
  local_60 = pcVar21;
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0075ccb7;
  }
  local_78 = &DAT_00000080;
  local_70 = puVar11;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar12 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar12 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0075ccb7;
  }
  local_58 = (int *)0x14;
  local_48 = (int *)0x0;
  *(undefined8 *)((longlong)puVar11 + 6) = 0x70756f7267632f73;
  *puVar11 = 0x2f73662f7379732f;
  local_50 = puVar12;
  if (pcVar27 == (char *)0x0) {
    *(undefined1 *)((longlong)puVar11 + 0xe) = 0x2f;
    pcVar25 = (char *)0xf;
  }
  else {
    uVar30 = extraout_XMM0_Qa_02;
    if (*local_80 == '/') {
      local_68 = (char *)0x0;
      uVar26 = 0;
      if (&DAT_00000080 < pcVar27) goto LAB_0075cbde;
    }
    else {
      *(undefined1 *)((longlong)puVar11 + 0xe) = 0x2f;
      local_68 = (char *)0xf;
      uVar26 = 0xf;
      if ((char *)0x71 < pcVar27) {
LAB_0075cbde:
        uVar30 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_78,uVar26,pcVar27,1,1);
        puVar11 = local_70;
        pcVar27 = local_c0;
      }
    }
    pcVar25 = local_68;
    (*(code *)PTR_memcpy_00799008)(uVar30,pcVar27);
  }
  local_68 = pcVar27 + (longlong)pcVar25;
  if (local_68 == (char *)0x0) {
    pcVar27 = (char *)0x0;
  }
  else {
    pcVar27 = local_68;
    if (local_68[(longlong)puVar11 + -1] != '/') {
      if (local_78 == local_68) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_78,local_68,1,1,1);
        puVar11 = local_70;
      }
      *(char *)((longlong)puVar11 + (longlong)local_68) = '/';
      pcVar27 = local_68 + 1;
      local_68 = pcVar27;
    }
  }
  if ((ulonglong)((longlong)local_78 - (longlong)pcVar27) < 0x12) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_78,pcVar27,0x12,1,1);
    puVar11 = local_70;
    pcVar27 = local_68;
  }
  uVar26 = s_cgroup_controllers_001c0b64._8_8_;
  uVar30 = s_cgroup_controllers_001c0b64._0_8_;
  *(undefined8 *)((longlong)puVar11 + (longlong)pcVar27) = s_cgroup_controllers_001c0b64._0_8_;
  *(undefined8 *)((char *)((longlong)puVar11 + (longlong)pcVar27) + 8) = uVar26;
  ((char *)((longlong)(puVar11 + 2) + (longlong)pcVar27))[0] = 'r';
  ((char *)((longlong)(puVar11 + 2) + (longlong)pcVar27))[1] = 's';
  local_68 = pcVar27 + 0x12;
  uVar30 = (*(code *)PTR_exists_0079b058)(uVar30,local_68);
  if (((char)local_98 == '\0') && (local_98._1_1_ != '\0')) {
    (*(code *)PTR_pop_0079ada8)();
    local_40 = (char *)0xffffffffffffffff;
    while( true ) {
      pcVar21 = local_68;
      puVar11 = local_70;
      cVar33 = (*(code *)PTR__starts_with_0079af08)(0xe,"/sys/fs/cgroup");
      uVar30 = extraout_XMM0_Qa_03;
      if (cVar33 == '\0') break;
      if (pcVar21 == (char *)0x0) {
        pcVar21 = (char *)0x0;
      }
      else if (pcVar21[(longlong)puVar11 + -1] != '/') {
        if (local_78 == pcVar21) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_78,pcVar21,1,1,1);
          pcVar21 = local_68;
          puVar11 = local_70;
        }
        *(char *)((longlong)puVar11 + (longlong)pcVar21) = '/';
        pcVar21 = pcVar21 + 1;
        local_68 = pcVar21;
      }
      if ((ulonglong)((longlong)local_78 - (longlong)pcVar21) < 7) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_78,pcVar21,7,1,1);
        pcVar21 = local_68;
        puVar11 = local_70;
      }
      builtin_strncpy(pcVar21 + (longlong)puVar11 + 3,".max",4);
      builtin_strncpy((char *)((longlong)puVar11 + (longlong)pcVar21),"cpu.",4);
      local_68 = pcVar21 + 7;
      local_48 = (int *)0x0;
      local_e8 = 0x1b600000000;
      local_dc = 0;
      local_e0 = 1;
      local_270 = &local_e8;
      if (&DAT_00000178 < pcVar21) {
        sys::helpers::small_c_string::run_with_cstr_allocating::
        <std[6c98fd8553dbae28]::sys::fs::unix::File>
                  (&local_b8,puVar11,local_68,&local_270,
                   <std[6c98fd8553dbae28]::sys::fs::unix::File>::open::_closure_0_);
        pcVar21 = extraout_RDX_02;
      }
      else {
        (*(code *)PTR_memcpy_00799008)();
        (local_268 + 7)[(longlong)pcVar21] = 0;
        pcVar21 = pcVar21 + 8;
        (*(code *)PTR_from_bytes_with_nul_0079abd0)();
        if ((int)local_98 == 1) {
          local_b0 = &DAT_00796450;
          local_b8 = 1;
        }
        else {
          <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_b8,local_90,&local_e8);
          pcVar21 = extraout_RDX_01;
        }
      }
      if (local_b8 == 1) {
        pcVar21 = local_b0;
LAB_0075c5fd:
        if ((1 < ((uint)pcVar21 & 3) - 2) && (((ulonglong)pcVar21 & 3) != 0)) {
          local_268._8_8_ = pcVar21 + -1;
          local_268[0] = 3;
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,local_b4);
        local_268._0_8_ = &local_98;
        lVar7 = (*(code *)PTR_read_to_string_0079abd8)();
        (*(code *)PTR_close_00799030)();
        puVar12 = local_50;
        if (lVar7 != 0) goto LAB_0075c5fd;
        auVar90._8_8_ = 0;
        auVar90._0_8_ = local_48;
        local_268 = auVar90 << 0x40;
        local_258._8_8_ = local_48;
        local_258._0_8_ = local_50;
        auVar94._8_8_ = 0;
        auVar94._0_8_ = local_48;
        local_248 = auVar94 << 0x40;
        local_238[8] = 1;
        local_238._0_8_ = 0xa0000000a;
        auVar72._14_2_ = 0;
        auVar72._0_14_ = local_228._2_14_;
        local_228 = auVar72 << 0x10;
        uVar30 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                 ::next_match(&local_98,local_258);
        if ((int)local_98 == 1) {
          uVar17 = local_88 - local_268._0_8_;
          local_258._0_8_ = puVar12;
        }
        else {
          if (local_228[1] != '\0') break;
          uVar17 = local_268._8_8_ - local_268._0_8_;
          if ((uVar17 != 0 | local_228[0]) != 1) break;
        }
        local_258._0_8_ = local_258._0_8_ + local_268._0_8_;
        uVar18 = uVar17 - 1;
        puVar12 = (undefined1 *)local_258._0_8_;
        if ((uVar17 != 0) && (*(char *)(local_258._0_8_ + uVar18) == '\n')) {
          uVar17 = uVar17 - 2;
          if (uVar18 == 0) {
            puVar12 = (undefined1 *)0x0;
          }
          else if (*(char *)(local_258._0_8_ + uVar17) != '\r') {
            puVar12 = (undefined1 *)0x0;
          }
          if (puVar12 == (undefined1 *)0x0) {
            uVar17 = uVar18;
            puVar12 = (undefined1 *)local_258._0_8_;
          }
        }
        auVar97._8_8_ = 0;
        auVar97._0_8_ = uVar17;
        local_268 = auVar97 << 0x40;
        local_258._8_8_ = uVar17;
        local_258._0_8_ = puVar12;
        auVar107._8_8_ = 0;
        auVar107._0_8_ = uVar17;
        local_248 = auVar107 << 0x40;
        local_238[8] = 1;
        local_238._0_8_ = 0x2000000020;
        local_228._0_2_ = 1;
        uVar30 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                 ::next_match(&local_98,local_258);
        uVar17 = local_90;
        if ((char)local_98 == '\0') break;
        uVar26 = local_268._0_8_;
        local_268._0_8_ = local_88;
        if ((puVar12 == (undefined1 *)0x0) || (local_228[1] != '\0')) break;
        lVar7 = local_258._0_8_;
        uVar30 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                 ::next_match(&local_98,local_258);
        uVar5 = local_268._0_8_;
        if ((int)local_98 == 1) {
          uVar18 = local_90 - local_268._0_8_;
          local_268._0_8_ = local_88;
        }
        else {
          if (local_228[1] != '\0') break;
          uVar18 = local_268._8_8_ - local_268._0_8_;
          if ((uVar18 != 0 | local_228[0]) != 1) break;
          lVar7 = local_258._0_8_;
        }
        pcVar21 = (char *)(lVar7 + uVar5);
        bVar29 = true;
        uVar17 = uVar17 - uVar26;
        uVar15 = uVar19;
        if (uVar17 != 0) {
          pcVar27 = puVar12 + uVar26;
          if (uVar17 == 1) {
            cVar33 = *pcVar27;
            if ((cVar33 == '+') || (cVar33 == '-')) goto joined_r0x0075c90d;
          }
          else {
            cVar33 = *pcVar27;
          }
          uVar16 = (ulonglong)(cVar33 == '+');
          uVar24 = uVar17 - uVar16;
          if (uVar24 < 0x11) {
            if (uVar17 == uVar16) {
              bVar29 = false;
              uVar15 = 0;
            }
            else {
              uVar13 = 0;
              uVar17 = 0;
              do {
                bVar29 = 9 < (byte)pcVar27[uVar13 + uVar16] - 0x30;
                uVar15 = uVar19;
                if (bVar29) break;
                uVar17 = (ulonglong)((byte)pcVar27[uVar13 + uVar16] - 0x30) + uVar17 * 10;
                uVar13 = uVar13 + 1;
                uVar15 = uVar17;
              } while (uVar24 != uVar13);
            }
          }
          else {
            uVar13 = 0;
            uVar17 = 0;
            do {
              bVar29 = uVar24 != uVar13;
              uVar15 = uVar17;
              if (!bVar29) break;
              auVar116._8_8_ = 0;
              auVar116._0_8_ = uVar17;
              uVar14 = SUB168(auVar116 * ZEXT816(10),0);
              uVar15 = uVar19;
              if (SUB168(auVar116 * ZEXT816(10),8) != 0) break;
              uVar23 = (byte)pcVar27[uVar13 + uVar16] - 0x30;
              uVar17 = uVar14 + uVar23;
              if (9 < uVar23) break;
              uVar13 = uVar13 + 1;
            } while (!CARRY8(uVar14,(ulonglong)uVar23));
          }
        }
joined_r0x0075c90d:
        uVar19 = uVar15;
        if (uVar18 != 0) {
          if (uVar18 == 1) {
            cVar33 = *pcVar21;
            if ((cVar33 == '+') || (cVar33 == '-')) goto LAB_0075c630;
          }
          else {
            cVar33 = *pcVar21;
          }
          uVar17 = (ulonglong)(cVar33 == '+');
          if (uVar18 - uVar17 < 0x11) {
            if (uVar18 != uVar17) {
              lVar7 = 0;
              uVar15 = 0;
              do {
                if (9 < (byte)pcVar21[lVar7 + uVar17] - 0x30) goto LAB_0075c630;
                uVar15 = (ulonglong)((byte)pcVar21[lVar7 + uVar17] - 0x30) + uVar15 * 10;
                lVar7 = lVar7 + 1;
              } while (lVar7 != uVar18 + -uVar17);
LAB_0075c9a6:
              if (!(bool)(bVar29 | uVar15 == 0)) {
                if ((uVar19 | uVar15) >> 0x20 == 0) {
                  uVar15 = (uVar19 & 0xffffffff) / (uVar15 & 0xffffffff);
                }
                else {
                  uVar15 = uVar19 / uVar15;
                }
                if (uVar15 < local_40) {
                  local_40 = (char *)uVar15;
                }
              }
            }
          }
          else {
            lVar7 = 0;
            uVar15 = 0;
            while( true ) {
              if (lVar7 == uVar18 + -uVar17) goto LAB_0075c9a6;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar15;
              uVar16 = SUB168(auVar2 * ZEXT816(10),0);
              if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
              uVar23 = (byte)pcVar21[lVar7 + uVar17] - 0x30;
              uVar15 = uVar16 + uVar23;
              if ((9 < uVar23) || (lVar7 = lVar7 + 1, CARRY8(uVar16,(ulonglong)uVar23))) break;
            }
          }
        }
      }
LAB_0075c630:
      (*(code *)PTR_pop_0079ada8)();
      (*(code *)PTR_pop_0079ada8)();
    }
    pcVar21 = local_60;
    if (local_58 != (int *)0x0) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    }
    if (local_78 != (char *)0x0) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    }
  }
  else {
    if ((((char)local_98 != '\0') && (1 < ((uint)local_90 & 3) - 2)) && ((local_90 & 3) != 0)) {
      local_268._8_8_ = local_90 - 1;
      local_268[0] = 3;
      uVar30 = (*(code *)PTR_drop_00799040)();
    }
    if (local_58 != (int *)0x0) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    }
    if (local_78 != (char *)0x0) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    }
    local_40 = (char *)0xffffffffffffffff;
  }
  goto joined_r0x0075c2b8;
LAB_0075ba4b:
  pcVar21 = (char *)0xffffffffffffffff;
joined_r0x0075badc:
  if (cVar33 == '\n') goto LAB_0075b6fa;
LAB_0075c2d0:
  if (pcVar21 == (char *)0xffffffffffffffff) goto LAB_0075bb3e;
LAB_0075c2da:
  if ((local_31 & 1) != 0) goto LAB_0075c2e4;
LAB_0075bee6:
  local_60 = pcVar21;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar12 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar12 != (undefined1 *)0x0) {
    local_58 = (int *)&DAT_00000080;
    local_48 = (int *)0x0;
    local_50 = puVar12;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_90 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_90 != 0) {
      local_98 = 0x14;
      local_88 = 0;
      lVar7 = 0;
      uVar30 = extraout_XMM0_Qa_00;
LAB_0075bf6e:
      uVar30 = (**(code **)((longlong)&PTR_call_once_007970a0 + lVar7))(uVar30,local_c0);
      local_a0 = (char *)local_268._0_8_;
      if ((char *)local_268._0_8_ == (char *)0xfffffffffffffffe) goto LAB_0075bf60;
      local_a8 = local_268._8_8_;
      uVar26 = local_258._0_8_;
      local_40 = (char *)local_258._8_8_;
      uVar5 = local_248._0_8_;
      local_48 = (int *)0x0;
      if ((int *)local_258._0_8_ == (int *)0x0) {
        local_48 = (int *)local_258._0_8_;
LAB_0075c03e:
        bVar29 = false;
        if ((int *)uVar5 == (int *)0x0) goto LAB_0075c049;
LAB_0075c00f:
        if (*local_40 != '/') goto LAB_0075c049;
        local_48 = (int *)0x0;
        if ((ulonglong)uVar5 <= local_58) goto LAB_0075c076;
LAB_0075c127:
        uVar30 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_58,local_48,uVar5,1,1);
LAB_0075c076:
        piVar10 = local_48;
        uVar30 = (*(code *)PTR_memcpy_00799008)(uVar30,uVar5);
        local_48 = piVar10;
      }
      else {
        if (local_58 < (ulonglong)local_258._0_8_) {
          uVar30 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(&local_58,0,local_258._0_8_,1,1);
        }
        piVar10 = local_48;
        uVar30 = (*(code *)PTR_memcpy_00799008)(uVar30,uVar26);
        local_48 = (int *)((longlong)piVar10 + uVar26);
        if (local_48 == (int *)0x0) goto LAB_0075c03e;
        bVar29 = (local_50 + -1)[(longlong)local_48] != '/';
        if ((int *)uVar5 != (int *)0x0) goto LAB_0075c00f;
LAB_0075c049:
        if (bVar29) {
          if (local_58 == local_48) {
            uVar30 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_58,local_48,1,1,1);
          }
          local_50[(longlong)local_48] = 0x2f;
          local_48 = (int *)((longlong)local_48 + 1);
        }
        if ((int *)((longlong)local_58 - (longlong)local_48) < (ulonglong)uVar5) goto LAB_0075c127;
        if ((int *)uVar5 != (int *)0x0) goto LAB_0075c076;
      }
      local_48 = (int *)((longlong)local_48 + uVar5);
      uVar30 = (*(code *)PTR_exists_0079b058)(uVar30,local_48);
      puVar4 = PTR_pop_0079ada8;
      if (((char)local_78 != '\0') || (local_78._1_1_ == '\0')) {
        if (((char)local_78 != '\0') &&
           ((1 < ((uint)local_70 & 3) - 2 && (((ulonglong)local_70 & 3) != 0)))) {
          local_268._8_8_ = (longlong)local_70 + -1;
          local_268[0] = 3;
          uVar30 = (*(code *)PTR_drop_00799040)();
        }
        if (0 < (longlong)local_a0) {
          uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
        }
        goto LAB_0075bf60;
      }
      local_40 = (char *)0xffffffffffffffff;
      while (cVar33 = (*(code *)PTR__starts_with_0079af08)(uVar26,local_a8), cVar33 != '\0') {
        bVar44 = sys::thread::unix::cgroups::quota_v1::_closure_2_
                           (&local_58,&local_98,&DAT_00183610,0x10);
        bVar46 = sys::thread::unix::cgroups::quota_v1::_closure_2_
                           (&local_58,&local_98,"cpu.cfs_period_us",0x11);
        pcVar21 = (char *)extraout_RDX_00;
        uVar19 = extraout_RDX_00;
        if ((bVar44 & bVar46 & extraout_RDX_00 != 0) != 0) {
          if ((extraout_RDX_00 | extraout_RDX) >> 0x20 == 0) {
            uVar17 = (extraout_RDX & 0xffffffff) / (extraout_RDX_00 & 0xffffffff);
            uVar19 = (extraout_RDX & 0xffffffff) % (extraout_RDX_00 & 0xffffffff);
          }
          else {
            uVar17 = extraout_RDX / extraout_RDX_00;
            uVar19 = extraout_RDX % extraout_RDX_00;
          }
          pcVar21 = local_40;
          if (uVar17 < local_40) {
            pcVar21 = (char *)uVar17;
          }
          local_40 = pcVar21;
        }
        (*(code *)puVar4)(pcVar21,uVar19);
      }
      uVar30 = extraout_XMM0_Qa_01;
      if (0 < (longlong)local_a0) {
        uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_01,1);
      }
      goto LAB_0075c27c;
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0075ccb7;
  }
LAB_0075cc61:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0075ccb7:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_0075c199:
  local_40 = (char *)0xffffffffffffffff;
LAB_0075c27c:
  if (local_98 != 0) {
    uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
  }
  pcVar21 = local_60;
  if (local_58 != (int *)0x0) {
    uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    pcVar21 = local_60;
  }
joined_r0x0075c2b8:
  if (pcVar21 != (char *)0x0) {
    uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
  }
joined_r0x0075cb92:
  if (local_d8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
  }
  ppuVar20 = (undefined **)((longlong)local_40 + (ulonglong)(local_40 == (char *)0x0));
  local_1f8 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  local_218 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_248 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  iVar6 = (*(code *)PTR_sched_getaffinity_0079b080)(0,local_268);
  if (iVar6 == 0) {
    auVar31._0_2_ = local_268._0_2_ >> 1;
    auVar31._2_2_ = local_268._2_2_ >> 1;
    auVar31._4_2_ = local_268._4_2_ >> 1;
    auVar31._6_2_ = local_268._6_2_ >> 1;
    auVar31._8_2_ = local_268._8_2_ >> 1;
    auVar31._10_2_ = local_268._10_2_ >> 1;
    auVar31._12_2_ = local_268._12_2_ >> 1;
    auVar31._14_2_ = local_268._14_2_ >> 1;
    auVar31 = auVar31 & _DAT_001829c0;
    uVar34 = CONCAT11(local_268[1] - auVar31[1],local_268[0] - auVar31[0]);
    uVar35 = CONCAT13(local_268[3] - auVar31[3],CONCAT12(local_268[2] - auVar31[2],uVar34));
    uVar36 = CONCAT15(local_268[5] - auVar31[5],CONCAT14(local_268[4] - auVar31[4],uVar35));
    uVar30 = CONCAT17(local_268[7] - auVar31[7],CONCAT16(local_268[6] - auVar31[6],uVar36));
    auVar37._0_10_ = CONCAT19(local_268[9] - auVar31[9],CONCAT18(local_268[8] - auVar31[8],uVar30));
    auVar37[10] = local_268[10] - auVar31[10];
    auVar37[0xb] = local_268[0xb] - auVar31[0xb];
    auVar39[0xc] = local_268[0xc] - auVar31[0xc];
    auVar39._0_12_ = auVar37;
    auVar39[0xd] = local_268[0xd] - auVar31[0xd];
    auVar41[0xe] = local_268[0xe] - auVar31[0xe];
    auVar41._0_14_ = auVar39;
    auVar41[0xf] = local_268[0xf] - auVar31[0xf];
    auVar91 = auVar41 & _DAT_001837f0;
    auVar42._0_2_ = uVar34 >> 2;
    auVar42._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar42._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar42._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar42._8_2_ = (ushort)((unkuint10)auVar37._0_10_ >> 0x42);
    auVar42._10_2_ = auVar37._10_2_ >> 2;
    auVar42._12_2_ = auVar39._12_2_ >> 2;
    auVar42._14_2_ = auVar41._14_2_ >> 2;
    auVar42 = auVar42 & _DAT_001837f0;
    cVar33 = auVar42[0] + auVar91[0];
    bVar44 = auVar42[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar42[2] + auVar91[2];
    bVar46 = auVar42[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar42[4] + auVar91[4];
    bVar48 = auVar42[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar42[6] + auVar91[6];
    bVar50 = auVar42[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar42[8] + auVar91[8];
    bVar52 = auVar42[9] + auVar91[9];
    auVar38._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar38[10] = auVar42[10] + auVar91[10];
    auVar38[0xb] = auVar42[0xb] + auVar91[0xb];
    auVar40[0xc] = auVar42[0xc] + auVar91[0xc];
    auVar40._0_12_ = auVar38;
    auVar40[0xd] = auVar42[0xd] + auVar91[0xd];
    auVar43[0xe] = auVar42[0xe] + auVar91[0xe];
    auVar43._0_14_ = auVar40;
    auVar43[0xf] = auVar42[0xf] + auVar91[0xf];
    auVar106[0] = (char)(uVar34 >> 4) + cVar33;
    auVar106[1] = (bVar44 >> 4) + bVar44;
    auVar106[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar106[3] = (bVar46 >> 4) + bVar46;
    auVar106[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar106[5] = (bVar48 >> 4) + bVar48;
    auVar106[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar106[7] = (bVar50 >> 4) + bVar50;
    auVar106[8] = (char)((unkuint10)auVar38._0_10_ >> 0x44) + cVar51;
    auVar106[9] = (bVar52 >> 4) + bVar52;
    auVar106[10] = (char)(auVar38._10_2_ >> 4) + auVar38[10];
    auVar106[0xb] = (auVar38[0xb] >> 4) + auVar38[0xb];
    auVar106[0xc] = (char)(auVar40._12_2_ >> 4) + auVar40[0xc];
    auVar106[0xd] = (auVar40[0xd] >> 4) + auVar40[0xd];
    auVar106[0xe] = (char)(auVar43._14_2_ >> 4) + auVar43[0xe];
    auVar106[0xf] = (auVar43[0xf] >> 4) + auVar43[0xf];
    auVar107 = psadbw(auVar106 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar92._0_2_ = local_258._0_2_ >> 1;
    auVar92._2_2_ = local_258._2_2_ >> 1;
    auVar92._4_2_ = local_258._4_2_ >> 1;
    auVar92._6_2_ = local_258._6_2_ >> 1;
    auVar92._8_2_ = local_258._8_2_ >> 1;
    auVar92._10_2_ = local_258._10_2_ >> 1;
    auVar92._12_2_ = local_258._12_2_ >> 1;
    auVar92._14_2_ = local_258._14_2_ >> 1;
    auVar92 = auVar92 & _DAT_001829c0;
    uVar34 = CONCAT11(local_258[1] - auVar92[1],local_258[0] - auVar92[0]);
    uVar35 = CONCAT13(local_258[3] - auVar92[3],CONCAT12(local_258[2] - auVar92[2],uVar34));
    uVar36 = CONCAT15(local_258[5] - auVar92[5],CONCAT14(local_258[4] - auVar92[4],uVar35));
    uVar30 = CONCAT17(local_258[7] - auVar92[7],CONCAT16(local_258[6] - auVar92[6],uVar36));
    auVar63._0_10_ = CONCAT19(local_258[9] - auVar92[9],CONCAT18(local_258[8] - auVar92[8],uVar30));
    auVar63[10] = local_258[10] - auVar92[10];
    auVar63[0xb] = local_258[0xb] - auVar92[0xb];
    auVar65[0xc] = local_258[0xc] - auVar92[0xc];
    auVar65._0_12_ = auVar63;
    auVar65[0xd] = local_258[0xd] - auVar92[0xd];
    auVar67[0xe] = local_258[0xe] - auVar92[0xe];
    auVar67._0_14_ = auVar65;
    auVar67[0xf] = local_258[0xf] - auVar92[0xf];
    auVar91 = auVar67 & _DAT_001837f0;
    auVar68._0_2_ = uVar34 >> 2;
    auVar68._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar68._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar68._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar68._8_2_ = (ushort)((unkuint10)auVar63._0_10_ >> 0x42);
    auVar68._10_2_ = auVar63._10_2_ >> 2;
    auVar68._12_2_ = auVar65._12_2_ >> 2;
    auVar68._14_2_ = auVar67._14_2_ >> 2;
    auVar68 = auVar68 & _DAT_001837f0;
    cVar33 = auVar68[0] + auVar91[0];
    bVar44 = auVar68[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar68[2] + auVar91[2];
    bVar46 = auVar68[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar68[4] + auVar91[4];
    bVar48 = auVar68[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar68[6] + auVar91[6];
    bVar50 = auVar68[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar68[8] + auVar91[8];
    bVar52 = auVar68[9] + auVar91[9];
    auVar64._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar64[10] = auVar68[10] + auVar91[10];
    auVar64[0xb] = auVar68[0xb] + auVar91[0xb];
    auVar66[0xc] = auVar68[0xc] + auVar91[0xc];
    auVar66._0_12_ = auVar64;
    auVar66[0xd] = auVar68[0xd] + auVar91[0xd];
    auVar69[0xe] = auVar68[0xe] + auVar91[0xe];
    auVar69._0_14_ = auVar66;
    auVar69[0xf] = auVar68[0xf] + auVar91[0xf];
    auVar93[0] = (char)(uVar34 >> 4) + cVar33;
    auVar93[1] = (bVar44 >> 4) + bVar44;
    auVar93[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar93[3] = (bVar46 >> 4) + bVar46;
    auVar93[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar93[5] = (bVar48 >> 4) + bVar48;
    auVar93[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar93[7] = (bVar50 >> 4) + bVar50;
    auVar93[8] = (char)((unkuint10)auVar64._0_10_ >> 0x44) + cVar51;
    auVar93[9] = (bVar52 >> 4) + bVar52;
    auVar93[10] = (char)(auVar64._10_2_ >> 4) + auVar64[10];
    auVar93[0xb] = (auVar64[0xb] >> 4) + auVar64[0xb];
    auVar93[0xc] = (char)(auVar66._12_2_ >> 4) + auVar66[0xc];
    auVar93[0xd] = (auVar66[0xd] >> 4) + auVar66[0xd];
    auVar93[0xe] = (char)(auVar69._14_2_ >> 4) + auVar69[0xe];
    auVar93[0xf] = (auVar69[0xf] >> 4) + auVar69[0xf];
    auVar94 = psadbw(auVar93 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar70._0_2_ = local_248._0_2_ >> 1;
    auVar70._2_2_ = local_248._2_2_ >> 1;
    auVar70._4_2_ = local_248._4_2_ >> 1;
    auVar70._6_2_ = local_248._6_2_ >> 1;
    auVar70._8_2_ = local_248._8_2_ >> 1;
    auVar70._10_2_ = local_248._10_2_ >> 1;
    auVar70._12_2_ = local_248._12_2_ >> 1;
    auVar70._14_2_ = local_248._14_2_ >> 1;
    auVar70 = auVar70 & _DAT_001829c0;
    uVar34 = CONCAT11(local_248[1] - auVar70[1],local_248[0] - auVar70[0]);
    uVar35 = CONCAT13(local_248[3] - auVar70[3],CONCAT12(local_248[2] - auVar70[2],uVar34));
    uVar36 = CONCAT15(local_248[5] - auVar70[5],CONCAT14(local_248[4] - auVar70[4],uVar35));
    uVar30 = CONCAT17(local_248[7] - auVar70[7],CONCAT16(local_248[6] - auVar70[6],uVar36));
    auVar53._0_10_ = CONCAT19(local_248[9] - auVar70[9],CONCAT18(local_248[8] - auVar70[8],uVar30));
    auVar53[10] = local_248[10] - auVar70[10];
    auVar53[0xb] = local_248[0xb] - auVar70[0xb];
    auVar55[0xc] = local_248[0xc] - auVar70[0xc];
    auVar55._0_12_ = auVar53;
    auVar55[0xd] = local_248[0xd] - auVar70[0xd];
    auVar57[0xe] = local_248[0xe] - auVar70[0xe];
    auVar57._0_14_ = auVar55;
    auVar57[0xf] = local_248[0xf] - auVar70[0xf];
    auVar91 = auVar57 & _DAT_001837f0;
    auVar58._0_2_ = uVar34 >> 2;
    auVar58._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar58._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar58._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar58._8_2_ = (ushort)((unkuint10)auVar53._0_10_ >> 0x42);
    auVar58._10_2_ = auVar53._10_2_ >> 2;
    auVar58._12_2_ = auVar55._12_2_ >> 2;
    auVar58._14_2_ = auVar57._14_2_ >> 2;
    auVar58 = auVar58 & _DAT_001837f0;
    cVar33 = auVar58[0] + auVar91[0];
    bVar44 = auVar58[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar58[2] + auVar91[2];
    bVar46 = auVar58[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar58[4] + auVar91[4];
    bVar48 = auVar58[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar58[6] + auVar91[6];
    bVar50 = auVar58[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar58[8] + auVar91[8];
    bVar52 = auVar58[9] + auVar91[9];
    auVar54._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar54[10] = auVar58[10] + auVar91[10];
    auVar54[0xb] = auVar58[0xb] + auVar91[0xb];
    auVar56[0xc] = auVar58[0xc] + auVar91[0xc];
    auVar56._0_12_ = auVar54;
    auVar56[0xd] = auVar58[0xd] + auVar91[0xd];
    auVar59[0xe] = auVar58[0xe] + auVar91[0xe];
    auVar59._0_14_ = auVar56;
    auVar59[0xf] = auVar58[0xf] + auVar91[0xf];
    auVar71[0] = (char)(uVar34 >> 4) + cVar33;
    auVar71[1] = (bVar44 >> 4) + bVar44;
    auVar71[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar71[3] = (bVar46 >> 4) + bVar46;
    auVar71[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar71[5] = (bVar48 >> 4) + bVar48;
    auVar71[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar71[7] = (bVar50 >> 4) + bVar50;
    auVar71[8] = (char)((unkuint10)auVar54._0_10_ >> 0x44) + cVar51;
    auVar71[9] = (bVar52 >> 4) + bVar52;
    auVar71[10] = (char)(auVar54._10_2_ >> 4) + auVar54[10];
    auVar71[0xb] = (auVar54[0xb] >> 4) + auVar54[0xb];
    auVar71[0xc] = (char)(auVar56._12_2_ >> 4) + auVar56[0xc];
    auVar71[0xd] = (auVar56[0xd] >> 4) + auVar56[0xd];
    auVar71[0xe] = (char)(auVar59._14_2_ >> 4) + auVar59[0xe];
    auVar71[0xf] = (auVar59[0xf] >> 4) + auVar59[0xf];
    auVar72 = psadbw(auVar71 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar60._0_2_ = local_238._0_2_ >> 1;
    auVar60._2_2_ = local_238._2_2_ >> 1;
    auVar60._4_2_ = local_238._4_2_ >> 1;
    auVar60._6_2_ = local_238._6_2_ >> 1;
    auVar60._8_2_ = local_238._8_2_ >> 1;
    auVar60._10_2_ = local_238._10_2_ >> 1;
    auVar60._12_2_ = local_238._12_2_ >> 1;
    auVar60._14_2_ = local_238._14_2_ >> 1;
    auVar60 = auVar60 & _DAT_001829c0;
    uVar34 = CONCAT11(local_238[1] - auVar60[1],local_238[0] - auVar60[0]);
    uVar35 = CONCAT13(local_238[3] - auVar60[3],CONCAT12(local_238[2] - auVar60[2],uVar34));
    uVar36 = CONCAT15(local_238[5] - auVar60[5],CONCAT14(local_238[4] - auVar60[4],uVar35));
    uVar30 = CONCAT17(local_238[7] - auVar60[7],CONCAT16(local_238[6] - auVar60[6],uVar36));
    auVar74._0_10_ = CONCAT19(local_238[9] - auVar60[9],CONCAT18(local_238[8] - auVar60[8],uVar30));
    auVar74[10] = local_238[10] - auVar60[10];
    auVar74[0xb] = local_238[0xb] - auVar60[0xb];
    auVar78[0xc] = local_238[0xc] - auVar60[0xc];
    auVar78._0_12_ = auVar74;
    auVar78[0xd] = local_238[0xd] - auVar60[0xd];
    auVar82[0xe] = local_238[0xe] - auVar60[0xe];
    auVar82._0_14_ = auVar78;
    auVar82[0xf] = local_238[0xf] - auVar60[0xf];
    auVar91 = auVar82 & _DAT_001837f0;
    auVar83._0_2_ = uVar34 >> 2;
    auVar83._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar83._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar83._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar83._8_2_ = (ushort)((unkuint10)auVar74._0_10_ >> 0x42);
    auVar83._10_2_ = auVar74._10_2_ >> 2;
    auVar83._12_2_ = auVar78._12_2_ >> 2;
    auVar83._14_2_ = auVar82._14_2_ >> 2;
    auVar83 = auVar83 & _DAT_001837f0;
    cVar33 = auVar83[0] + auVar91[0];
    bVar44 = auVar83[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar83[2] + auVar91[2];
    bVar46 = auVar83[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar83[4] + auVar91[4];
    bVar48 = auVar83[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar83[6] + auVar91[6];
    bVar50 = auVar83[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar83[8] + auVar91[8];
    bVar52 = auVar83[9] + auVar91[9];
    auVar75._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar75[10] = auVar83[10] + auVar91[10];
    auVar75[0xb] = auVar83[0xb] + auVar91[0xb];
    auVar79[0xc] = auVar83[0xc] + auVar91[0xc];
    auVar79._0_12_ = auVar75;
    auVar79[0xd] = auVar83[0xd] + auVar91[0xd];
    auVar84[0xe] = auVar83[0xe] + auVar91[0xe];
    auVar84._0_14_ = auVar79;
    auVar84[0xf] = auVar83[0xf] + auVar91[0xf];
    auVar61[0] = (char)(uVar34 >> 4) + cVar33;
    auVar61[1] = (bVar44 >> 4) + bVar44;
    auVar61[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar61[3] = (bVar46 >> 4) + bVar46;
    auVar61[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar61[5] = (bVar48 >> 4) + bVar48;
    auVar61[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar61[7] = (bVar50 >> 4) + bVar50;
    auVar61[8] = (char)((unkuint10)auVar75._0_10_ >> 0x44) + cVar51;
    auVar61[9] = (bVar52 >> 4) + bVar52;
    auVar61[10] = (char)(auVar75._10_2_ >> 4) + auVar75[10];
    auVar61[0xb] = (auVar75[0xb] >> 4) + auVar75[0xb];
    auVar61[0xc] = (char)(auVar79._12_2_ >> 4) + auVar79[0xc];
    auVar61[0xd] = (auVar79[0xd] >> 4) + auVar79[0xd];
    auVar61[0xe] = (char)(auVar84._14_2_ >> 4) + auVar84[0xe];
    auVar61[0xf] = (auVar84[0xf] >> 4) + auVar84[0xf];
    auVar62 = psadbw(auVar61 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar95._0_2_ = local_228._0_2_ >> 1;
    auVar95._2_2_ = local_228._2_2_ >> 1;
    auVar95._4_2_ = local_228._4_2_ >> 1;
    auVar95._6_2_ = local_228._6_2_ >> 1;
    auVar95._8_2_ = local_228._8_2_ >> 1;
    auVar95._10_2_ = local_228._10_2_ >> 1;
    auVar95._12_2_ = local_228._12_2_ >> 1;
    auVar95._14_2_ = local_228._14_2_ >> 1;
    auVar95 = auVar95 & _DAT_001829c0;
    uVar34 = CONCAT11(local_228[1] - auVar95[1],local_228[0] - auVar95[0]);
    uVar35 = CONCAT13(local_228[3] - auVar95[3],CONCAT12(local_228[2] - auVar95[2],uVar34));
    uVar36 = CONCAT15(local_228[5] - auVar95[5],CONCAT14(local_228[4] - auVar95[4],uVar35));
    uVar30 = CONCAT17(local_228[7] - auVar95[7],CONCAT16(local_228[6] - auVar95[6],uVar36));
    auVar76._0_10_ = CONCAT19(local_228[9] - auVar95[9],CONCAT18(local_228[8] - auVar95[8],uVar30));
    auVar76[10] = local_228[10] - auVar95[10];
    auVar76[0xb] = local_228[0xb] - auVar95[0xb];
    auVar80[0xc] = local_228[0xc] - auVar95[0xc];
    auVar80._0_12_ = auVar76;
    auVar80[0xd] = local_228[0xd] - auVar95[0xd];
    auVar85[0xe] = local_228[0xe] - auVar95[0xe];
    auVar85._0_14_ = auVar80;
    auVar85[0xf] = local_228[0xf] - auVar95[0xf];
    auVar91 = auVar85 & _DAT_001837f0;
    auVar86._0_2_ = uVar34 >> 2;
    auVar86._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar86._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar86._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar86._8_2_ = (ushort)((unkuint10)auVar76._0_10_ >> 0x42);
    auVar86._10_2_ = auVar76._10_2_ >> 2;
    auVar86._12_2_ = auVar80._12_2_ >> 2;
    auVar86._14_2_ = auVar85._14_2_ >> 2;
    auVar86 = auVar86 & _DAT_001837f0;
    cVar33 = auVar86[0] + auVar91[0];
    bVar44 = auVar86[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar86[2] + auVar91[2];
    bVar46 = auVar86[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar86[4] + auVar91[4];
    bVar48 = auVar86[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar86[6] + auVar91[6];
    bVar50 = auVar86[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar86[8] + auVar91[8];
    bVar52 = auVar86[9] + auVar91[9];
    auVar77._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar77[10] = auVar86[10] + auVar91[10];
    auVar77[0xb] = auVar86[0xb] + auVar91[0xb];
    auVar81[0xc] = auVar86[0xc] + auVar91[0xc];
    auVar81._0_12_ = auVar77;
    auVar81[0xd] = auVar86[0xd] + auVar91[0xd];
    auVar87[0xe] = auVar86[0xe] + auVar91[0xe];
    auVar87._0_14_ = auVar81;
    auVar87[0xf] = auVar86[0xf] + auVar91[0xf];
    auVar96[0] = (char)(uVar34 >> 4) + cVar33;
    auVar96[1] = (bVar44 >> 4) + bVar44;
    auVar96[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar96[3] = (bVar46 >> 4) + bVar46;
    auVar96[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar96[5] = (bVar48 >> 4) + bVar48;
    auVar96[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar96[7] = (bVar50 >> 4) + bVar50;
    auVar96[8] = (char)((unkuint10)auVar77._0_10_ >> 0x44) + cVar51;
    auVar96[9] = (bVar52 >> 4) + bVar52;
    auVar96[10] = (char)(auVar77._10_2_ >> 4) + auVar77[10];
    auVar96[0xb] = (auVar77[0xb] >> 4) + auVar77[0xb];
    auVar96[0xc] = (char)(auVar81._12_2_ >> 4) + auVar81[0xc];
    auVar96[0xd] = (auVar81[0xd] >> 4) + auVar81[0xd];
    auVar96[0xe] = (char)(auVar87._14_2_ >> 4) + auVar87[0xe];
    auVar96[0xf] = (auVar87[0xf] >> 4) + auVar87[0xf];
    auVar97 = psadbw(auVar96 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar88._0_2_ = local_218._0_2_ >> 1;
    auVar88._2_2_ = local_218._2_2_ >> 1;
    auVar88._4_2_ = local_218._4_2_ >> 1;
    auVar88._6_2_ = local_218._6_2_ >> 1;
    auVar88._8_2_ = local_218._8_2_ >> 1;
    auVar88._10_2_ = local_218._10_2_ >> 1;
    auVar88._12_2_ = local_218._12_2_ >> 1;
    auVar88._14_2_ = local_218._14_2_ >> 1;
    auVar88 = auVar88 & _DAT_001829c0;
    uVar34 = CONCAT11(local_218[1] - auVar88[1],local_218[0] - auVar88[0]);
    uVar35 = CONCAT13(local_218[3] - auVar88[3],CONCAT12(local_218[2] - auVar88[2],uVar34));
    uVar36 = CONCAT15(local_218[5] - auVar88[5],CONCAT14(local_218[4] - auVar88[4],uVar35));
    uVar30 = CONCAT17(local_218[7] - auVar88[7],CONCAT16(local_218[6] - auVar88[6],uVar36));
    auVar98._0_10_ = CONCAT19(local_218[9] - auVar88[9],CONCAT18(local_218[8] - auVar88[8],uVar30));
    auVar98[10] = local_218[10] - auVar88[10];
    auVar98[0xb] = local_218[0xb] - auVar88[0xb];
    auVar102[0xc] = local_218[0xc] - auVar88[0xc];
    auVar102._0_12_ = auVar98;
    auVar102[0xd] = local_218[0xd] - auVar88[0xd];
    auVar108[0xe] = local_218[0xe] - auVar88[0xe];
    auVar108._0_14_ = auVar102;
    auVar108[0xf] = local_218[0xf] - auVar88[0xf];
    auVar91 = auVar108 & _DAT_001837f0;
    auVar109._0_2_ = uVar34 >> 2;
    auVar109._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar109._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar109._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar109._8_2_ = (ushort)((unkuint10)auVar98._0_10_ >> 0x42);
    auVar109._10_2_ = auVar98._10_2_ >> 2;
    auVar109._12_2_ = auVar102._12_2_ >> 2;
    auVar109._14_2_ = auVar108._14_2_ >> 2;
    auVar109 = auVar109 & _DAT_001837f0;
    cVar33 = auVar109[0] + auVar91[0];
    bVar44 = auVar109[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar109[2] + auVar91[2];
    bVar46 = auVar109[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar109[4] + auVar91[4];
    bVar48 = auVar109[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar109[6] + auVar91[6];
    bVar50 = auVar109[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar109[8] + auVar91[8];
    bVar52 = auVar109[9] + auVar91[9];
    auVar99._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar99[10] = auVar109[10] + auVar91[10];
    auVar99[0xb] = auVar109[0xb] + auVar91[0xb];
    auVar103[0xc] = auVar109[0xc] + auVar91[0xc];
    auVar103._0_12_ = auVar99;
    auVar103[0xd] = auVar109[0xd] + auVar91[0xd];
    auVar110[0xe] = auVar109[0xe] + auVar91[0xe];
    auVar110._0_14_ = auVar103;
    auVar110[0xf] = auVar109[0xf] + auVar91[0xf];
    auVar89[0] = (char)(uVar34 >> 4) + cVar33;
    auVar89[1] = (bVar44 >> 4) + bVar44;
    auVar89[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar89[3] = (bVar46 >> 4) + bVar46;
    auVar89[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar89[5] = (bVar48 >> 4) + bVar48;
    auVar89[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar89[7] = (bVar50 >> 4) + bVar50;
    auVar89[8] = (char)((unkuint10)auVar99._0_10_ >> 0x44) + cVar51;
    auVar89[9] = (bVar52 >> 4) + bVar52;
    auVar89[10] = (char)(auVar99._10_2_ >> 4) + auVar99[10];
    auVar89[0xb] = (auVar99[0xb] >> 4) + auVar99[0xb];
    auVar89[0xc] = (char)(auVar103._12_2_ >> 4) + auVar103[0xc];
    auVar89[0xd] = (auVar103[0xd] >> 4) + auVar103[0xd];
    auVar89[0xe] = (char)(auVar110._14_2_ >> 4) + auVar110[0xe];
    auVar89[0xf] = (auVar110[0xf] >> 4) + auVar110[0xf];
    auVar90 = psadbw(auVar89 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar114._0_2_ = local_208._0_2_ >> 1;
    auVar114._2_2_ = local_208._2_2_ >> 1;
    auVar114._4_2_ = local_208._4_2_ >> 1;
    auVar114._6_2_ = local_208._6_2_ >> 1;
    auVar114._8_2_ = local_208._8_2_ >> 1;
    auVar114._10_2_ = local_208._10_2_ >> 1;
    auVar114._12_2_ = local_208._12_2_ >> 1;
    auVar114._14_2_ = local_208._14_2_ >> 1;
    auVar114 = auVar114 & _DAT_001829c0;
    uVar34 = CONCAT11(local_208[1] - auVar114[1],local_208[0] - auVar114[0]);
    uVar35 = CONCAT13(local_208[3] - auVar114[3],CONCAT12(local_208[2] - auVar114[2],uVar34));
    uVar36 = CONCAT15(local_208[5] - auVar114[5],CONCAT14(local_208[4] - auVar114[4],uVar35));
    uVar30 = CONCAT17(local_208[7] - auVar114[7],CONCAT16(local_208[6] - auVar114[6],uVar36));
    auVar117._0_10_ =
         CONCAT19(local_208[9] - auVar114[9],CONCAT18(local_208[8] - auVar114[8],uVar30));
    auVar117[10] = local_208[10] - auVar114[10];
    auVar117[0xb] = local_208[0xb] - auVar114[0xb];
    auVar119[0xc] = local_208[0xc] - auVar114[0xc];
    auVar119._0_12_ = auVar117;
    auVar119[0xd] = local_208[0xd] - auVar114[0xd];
    auVar121[0xe] = local_208[0xe] - auVar114[0xe];
    auVar121._0_14_ = auVar119;
    auVar121[0xf] = local_208[0xf] - auVar114[0xf];
    auVar91 = auVar121 & _DAT_001837f0;
    auVar122._0_2_ = uVar34 >> 2;
    auVar122._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar122._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar122._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar122._8_2_ = (ushort)((unkuint10)auVar117._0_10_ >> 0x42);
    auVar122._10_2_ = auVar117._10_2_ >> 2;
    auVar122._12_2_ = auVar119._12_2_ >> 2;
    auVar122._14_2_ = auVar121._14_2_ >> 2;
    auVar122 = auVar122 & _DAT_001837f0;
    cVar33 = auVar122[0] + auVar91[0];
    bVar44 = auVar122[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar122[2] + auVar91[2];
    bVar46 = auVar122[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar122[4] + auVar91[4];
    bVar48 = auVar122[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar122[6] + auVar91[6];
    bVar50 = auVar122[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar122[8] + auVar91[8];
    bVar52 = auVar122[9] + auVar91[9];
    auVar118._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar118[10] = auVar122[10] + auVar91[10];
    auVar118[0xb] = auVar122[0xb] + auVar91[0xb];
    auVar120[0xc] = auVar122[0xc] + auVar91[0xc];
    auVar120._0_12_ = auVar118;
    auVar120[0xd] = auVar122[0xd] + auVar91[0xd];
    auVar123[0xe] = auVar122[0xe] + auVar91[0xe];
    auVar123._0_14_ = auVar120;
    auVar123[0xf] = auVar122[0xf] + auVar91[0xf];
    auVar115[0] = (char)(uVar34 >> 4) + cVar33;
    auVar115[1] = (bVar44 >> 4) + bVar44;
    auVar115[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar115[3] = (bVar46 >> 4) + bVar46;
    auVar115[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar115[5] = (bVar48 >> 4) + bVar48;
    auVar115[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar115[7] = (bVar50 >> 4) + bVar50;
    auVar115[8] = (char)((unkuint10)auVar118._0_10_ >> 0x44) + cVar51;
    auVar115[9] = (bVar52 >> 4) + bVar52;
    auVar115[10] = (char)(auVar118._10_2_ >> 4) + auVar118[10];
    auVar115[0xb] = (auVar118[0xb] >> 4) + auVar118[0xb];
    auVar115[0xc] = (char)(auVar120._12_2_ >> 4) + auVar120[0xc];
    auVar115[0xd] = (auVar120[0xd] >> 4) + auVar120[0xd];
    auVar115[0xe] = (char)(auVar123._14_2_ >> 4) + auVar123[0xe];
    auVar115[0xf] = (auVar123[0xf] >> 4) + auVar123[0xf];
    auVar116 = psadbw(auVar115 & _DAT_001827d0,(undefined1  [16])0x0);
    auVar73._0_2_ = local_1f8._0_2_ >> 1;
    auVar73._2_2_ = local_1f8._2_2_ >> 1;
    auVar73._4_2_ = local_1f8._4_2_ >> 1;
    auVar73._6_2_ = local_1f8._6_2_ >> 1;
    auVar73._8_2_ = local_1f8._8_2_ >> 1;
    auVar73._10_2_ = local_1f8._10_2_ >> 1;
    auVar73._12_2_ = local_1f8._12_2_ >> 1;
    auVar73._14_2_ = local_1f8._14_2_ >> 1;
    auVar73 = auVar73 & _DAT_001829c0;
    uVar34 = CONCAT11(local_1f8[1] - auVar73[1],local_1f8[0] - auVar73[0]);
    uVar35 = CONCAT13(local_1f8[3] - auVar73[3],CONCAT12(local_1f8[2] - auVar73[2],uVar34));
    uVar36 = CONCAT15(local_1f8[5] - auVar73[5],CONCAT14(local_1f8[4] - auVar73[4],uVar35));
    uVar30 = CONCAT17(local_1f8[7] - auVar73[7],CONCAT16(local_1f8[6] - auVar73[6],uVar36));
    auVar100._0_10_ = CONCAT19(local_1f8[9] - auVar73[9],CONCAT18(local_1f8[8] - auVar73[8],uVar30))
    ;
    auVar100[10] = local_1f8[10] - auVar73[10];
    auVar100[0xb] = local_1f8[0xb] - auVar73[0xb];
    auVar104[0xc] = local_1f8[0xc] - auVar73[0xc];
    auVar104._0_12_ = auVar100;
    auVar104[0xd] = local_1f8[0xd] - auVar73[0xd];
    auVar111[0xe] = local_1f8[0xe] - auVar73[0xe];
    auVar111._0_14_ = auVar104;
    auVar111[0xf] = local_1f8[0xf] - auVar73[0xf];
    auVar91 = auVar111 & _DAT_001837f0;
    auVar112._0_2_ = uVar34 >> 2;
    auVar112._2_2_ = (ushort)((uint)uVar35 >> 0x12);
    auVar112._4_2_ = (ushort)((uint6)uVar36 >> 0x22);
    auVar112._6_2_ = (ushort)((ulonglong)uVar30 >> 0x32);
    auVar112._8_2_ = (ushort)((unkuint10)auVar100._0_10_ >> 0x42);
    auVar112._10_2_ = auVar100._10_2_ >> 2;
    auVar112._12_2_ = auVar104._12_2_ >> 2;
    auVar112._14_2_ = auVar111._14_2_ >> 2;
    auVar112 = auVar112 & _DAT_001837f0;
    cVar33 = auVar112[0] + auVar91[0];
    bVar44 = auVar112[1] + auVar91[1];
    uVar34 = CONCAT11(bVar44,cVar33);
    cVar45 = auVar112[2] + auVar91[2];
    bVar46 = auVar112[3] + auVar91[3];
    uVar35 = CONCAT13(bVar46,CONCAT12(cVar45,uVar34));
    cVar47 = auVar112[4] + auVar91[4];
    bVar48 = auVar112[5] + auVar91[5];
    uVar36 = CONCAT15(bVar48,CONCAT14(cVar47,uVar35));
    cVar49 = auVar112[6] + auVar91[6];
    bVar50 = auVar112[7] + auVar91[7];
    uVar30 = CONCAT17(bVar50,CONCAT16(cVar49,uVar36));
    cVar51 = auVar112[8] + auVar91[8];
    bVar52 = auVar112[9] + auVar91[9];
    auVar101._0_10_ = CONCAT19(bVar52,CONCAT18(cVar51,uVar30));
    auVar101[10] = auVar112[10] + auVar91[10];
    auVar101[0xb] = auVar112[0xb] + auVar91[0xb];
    auVar105[0xc] = auVar112[0xc] + auVar91[0xc];
    auVar105._0_12_ = auVar101;
    auVar105[0xd] = auVar112[0xd] + auVar91[0xd];
    auVar113[0xe] = auVar112[0xe] + auVar91[0xe];
    auVar113._0_14_ = auVar105;
    auVar113[0xf] = auVar112[0xf] + auVar91[0xf];
    auVar32[0] = (char)(uVar34 >> 4) + cVar33;
    auVar32[1] = (bVar44 >> 4) + bVar44;
    auVar32[2] = (char)((uint)uVar35 >> 0x14) + cVar45;
    auVar32[3] = (bVar46 >> 4) + bVar46;
    auVar32[4] = (char)((uint6)uVar36 >> 0x24) + cVar47;
    auVar32[5] = (bVar48 >> 4) + bVar48;
    auVar32[6] = (char)((ulonglong)uVar30 >> 0x34) + cVar49;
    auVar32[7] = (bVar50 >> 4) + bVar50;
    auVar32[8] = (char)((unkuint10)auVar101._0_10_ >> 0x44) + cVar51;
    auVar32[9] = (bVar52 >> 4) + bVar52;
    auVar32[10] = (char)(auVar101._10_2_ >> 4) + auVar101[10];
    auVar32[0xb] = (auVar101[0xb] >> 4) + auVar101[0xb];
    auVar32[0xc] = (char)(auVar105._12_2_ >> 4) + auVar105[0xc];
    auVar32[0xd] = (auVar105[0xd] >> 4) + auVar105[0xd];
    auVar32[0xe] = (char)(auVar113._14_2_ >> 4) + auVar113[0xe];
    auVar32[0xf] = (auVar113[0xf] >> 4) + auVar113[0xf];
    auVar91 = psadbw(auVar32 & _DAT_001827d0,(undefined1  [16])0x0);
    iVar6 = auVar91._8_4_ + auVar90._8_4_ + auVar62._8_4_ + auVar94._8_4_ +
            auVar116._8_4_ + auVar97._8_4_ + auVar72._8_4_ + auVar107._8_4_ +
            auVar91._0_4_ + auVar90._0_4_ + auVar62._0_4_ + auVar94._0_4_ +
            auVar116._0_4_ + auVar97._0_4_ + auVar72._0_4_ + auVar107._0_4_;
    if (iVar6 == 0) goto LAB_0075bbcc;
    ppuVar9 = (undefined **)(longlong)iVar6;
  }
  else {
LAB_0075bbcc:
    ppuVar9 = (undefined **)(*(code *)PTR_sysconf_0079aee8)();
    uVar30 = 1;
    if (ppuVar9 == (undefined **)0xffffffffffffffff) {
      piVar10 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar6 = *piVar10;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      ppuVar9 = (undefined **)((longlong)iVar6 << 0x20 | 2);
      uVar30 = 1;
      goto LAB_0075bebb;
    }
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar9 = &PTR_s_the_number_of_hardware_threads_i_00796fb0;
      goto LAB_0075bebb;
    }
  }
  if (ppuVar20 < ppuVar9) {
    ppuVar9 = ppuVar20;
  }
  uVar30 = 0;
LAB_0075bebb:
  auVar124._8_8_ = ppuVar9;
  auVar124._0_8_ = uVar30;
  return auVar124;
}


