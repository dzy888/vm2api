// 005466d0 unix_http_json_sync

/* WARNING: Type propagation algorithm not settling */
/* craggemini_core[66f3c71560d70857]::mcp_stdio::unix_http_json_sync */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::mcp_stdio::unix_http_json_sync
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6,longlong param_7,undefined4 param_8,undefined4 param_9
          ,undefined4 param_10,undefined4 param_11,longlong param_12,undefined8 param_13,
          undefined4 param_14)

{
  longlong lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  int iVar16;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar17;
  int extraout_XMM0_Da_05;
  int extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  int extraout_XMM0_Da_10;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  int local_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined2 uStack_da;
  undefined6 local_d8;
  undefined2 uStack_d2;
  code *local_d0;
  undefined8 *local_c8;
  code *local_c0;
  longlong *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_84;
  longlong *local_80;
  code *pcStack_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined4 uStack_48;
  undefined4 local_40 [2];
  undefined4 uStack_38;
  
  local_50[0] = param_8;
  uStack_48 = param_9;
  local_40[0] = param_10;
  uStack_38 = param_11;
  local_60 = param_4;
  local_58 = param_5;
  uVar15 = <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::connect::
           <&std[6c98fd8553dbae28]::path::Path>(&local_f8);
  if (local_f8 == 1) {
    *param_1 = CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
    *(undefined1 *)(param_1 + 1) = 0xff;
    return param_1;
  }
  local_11c = CONCAT22(uStack_f2,uStack_f4);
  lVar9 = (*(code *)PTR_set_write_timeout_00799d50)(uVar15,0);
  if ((lVar9 == 0) &&
     (lVar9 = (*(code *)PTR_set_read_timeout_00799d58)(extraout_XMM0_Da,param_14), lVar9 == 0)) {
    if (param_12 == 0) {
      uVar13 = 1;
      lVar9 = 0;
      lVar11 = 0;
      uVar15 = extraout_XMM0_Da_00;
joined_r0x005468a0:
      if (param_6 == 0) {
        local_a8 = 0;
        uStack_a0 = 1;
        local_98 = 0;
      }
      else {
        local_108 = param_7;
        local_80 = &local_110;
        pcStack_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_110 = param_6;
        (*(code *)PTR_format_inner_00799048)(uVar15,&local_80);
        local_a8 = CONCAT44(CONCAT22(uStack_f2,uStack_f4),local_f8);
        uStack_a0 = CONCAT44(CONCAT22(uStack_ea,uStack_ec),uStack_f0);
        local_98 = CONCAT26(uStack_e2,CONCAT24(uStack_e4,uStack_e8));
      }
      local_f8 = (int)local_50;
      uStack_f4 = (undefined2)((ulonglong)local_50 >> 0x20);
      uStack_f2 = (undefined2)((ulonglong)local_50 >> 0x30);
      uStack_f0 = 0x635460;
      uStack_ec = 0;
      uStack_ea = 0;
      uStack_e8 = SUB84(local_40,0);
      uStack_e4 = (undefined2)((ulonglong)local_40 >> 0x20);
      uStack_e2 = (undefined2)((ulonglong)local_40 >> 0x30);
      uStack_e0 = 0x635460;
      uStack_da = 0;
      local_d8 = SUB86(&local_60,0);
      uStack_d2 = (undefined2)((ulonglong)&local_60 >> 0x30);
      local_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_c8 = &local_a8;
      local_c0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      local_b8 = &local_110;
      local_b0 = PTR_fmt_007991f0;
      local_110 = lVar11;
      (*(code *)PTR_format_inner_00799048)(&local_60,&local_f8);
      plVar7 = local_80;
      lVar10 = <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Write>
               ::write_all(&local_11c,pcStack_78,local_70);
      uVar15 = extraout_XMM0_Da_02;
      if (lVar10 != 0) {
LAB_00546983:
        *param_1 = lVar10;
        *(undefined1 *)(param_1 + 1) = 0xff;
        if (plVar7 != (longlong *)0x0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        if (local_a8 != 0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        if (lVar9 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        goto LAB_005469ef;
      }
      if (lVar11 != 0) {
        lVar10 = <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Write>
                 ::write_all(&local_11c,uVar13,lVar11);
        uVar15 = extraout_XMM0_Da_03;
        if (lVar10 != 0) goto LAB_00546983;
      }
      local_110 = 0;
      local_108 = 1;
      local_100 = 0;
      uStack_e8 = local_11c;
      local_f8 = 0x802000;
      uStack_f4 = 0;
      uStack_f2 = 0;
      uStack_f0 = 0x802000;
      uStack_ec = 0;
      uStack_ea = 0;
      auVar18 = std[6c98fd8553dbae28]::io::default_read_to_end::
                <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>>
                          (&local_f8,&local_110,0);
      if ((auVar18._0_8_ & 1) != 0) {
        *param_1 = auVar18._8_8_;
        *(undefined1 *)(param_1 + 1) = 0xff;
        iVar16 = (*(code *)PTR_close_00799030)();
        goto joined_r0x00546c76;
      }
      local_118 = lVar9;
      (*(code *)PTR_close_00799030)();
      uVar14 = local_100;
      lVar11 = local_108;
      local_f8 = (int)local_108;
      uStack_f4 = (undefined2)((ulonglong)local_108 >> 0x20);
      uStack_f2 = (undefined2)((ulonglong)local_108 >> 0x30);
      uStack_f0 = (undefined4)local_100;
      uStack_ec = (undefined2)(local_100 >> 0x20);
      uStack_ea = (undefined2)(local_100 >> 0x30);
      uStack_e8 = 4;
      uStack_e4 = 0;
      uStack_e2 = 0;
      local_80 = (longlong *)0x0;
      auVar18 = <core[c0acaeba6ab4c2e0]::slice::iter::Windows<u8>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                ::try_fold::
                <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&[u8],craggemini_core[66f3c71560d70857]::mcp_stdio::unix_http_json_sync::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>
                          ();
      lVar9 = local_118;
      if (auVar18._0_8_ == 1) {
        if (uVar14 < auVar18._8_8_) {
          ppuVar12 = &PTR_s_src_mcp_stdio_rs_0078d860;
LAB_00546d16:
          (*(code *)PTR_slice_index_fail_007993c8)(ppuVar12,uVar14);
LAB_00546d43:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar17 = (*(code *)PTR_from_utf8_00799468)();
        uVar6 = uStack_e2;
        uVar5 = uStack_ea;
        uVar4 = uStack_ec;
        uVar15 = uStack_f0;
        if (local_f8 == 1) {
          lVar11 = (*(code *)PTR_<&str>_007991e8)(uVar17,0x14);
          iVar16 = extraout_XMM0_Da_05;
        }
        else {
          uStack_e0 = CONCAT24(uStack_e4,uStack_e8);
          local_d0 = (code *)CONCAT26(uStack_e2,uStack_e0);
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f2 = 0;
          uStack_f0 = uStack_e8;
          uStack_ec = uStack_e4;
          uStack_ea = uStack_e2;
          uStack_e8 = uVar15;
          uStack_e4 = uVar4;
          uStack_e2 = uVar5;
          uStack_da = uVar6;
          local_d8 = 0;
          uStack_d2 = 0;
          local_c8 = (undefined8 *)0xa0000000a;
          local_c0 = (code *)CONCAT71(local_c0._1_7_,1);
          local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffff0000);
          auVar19 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_inclusive
                              (&local_f8,lVar11);
          lVar11 = auVar19._8_8_;
          lVar10 = auVar19._0_8_;
          uVar15 = extraout_XMM0_Da_07;
          if (lVar10 != 0) {
            if (lVar11 == 0) {
LAB_00546c2e:
              lVar11 = 0;
            }
            else if (*(char *)(lVar10 + -1 + lVar11) == '\n') {
              if (lVar11 + -1 == 0) goto LAB_00546c2e;
              pcVar2 = (char *)(lVar10 + -2 + lVar11);
              lVar1 = lVar11 + -2;
              lVar11 = lVar11 + -1;
              if (*pcVar2 == '\r') {
                lVar11 = lVar1;
              }
            }
            auVar19 = unix_http_json_sync::_closure_3_(lVar10,lVar11);
            uVar15 = extraout_XMM0_Da_08;
            if (auVar19._0_8_ != 0) {
              uVar8 = <u16>::from_ascii_radix(auVar19._0_8_,auVar19._8_8_);
              uVar15 = extraout_XMM0_Da_09;
              if ((uVar8 & 1) == 0) {
                uVar14 = auVar18._8_8_ + 4;
                local_84 = uVar8;
                if (uVar14 <= local_100) {
                  parse_http_body_value(&local_80,uVar14 + local_108,local_100 - uVar14);
                  uStack_e2 = (undefined2)local_70;
                  uStack_e0 = (undefined6)((ulonglong)local_70 >> 0x10);
                  uStack_da = (undefined2)lStack_68;
                  local_d8 = (undefined6)((ulonglong)lStack_68 >> 0x10);
                  uStack_f2 = SUB82(local_80,0);
                  uStack_f0 = (undefined4)((ulonglong)local_80 >> 0x10);
                  uStack_ec = (undefined2)((ulonglong)local_80 >> 0x30);
                  uStack_ea = SUB82(pcStack_78,0);
                  uStack_e8 = (undefined4)((ulonglong)pcStack_78 >> 0x10);
                  uStack_e4 = (undefined2)((ulonglong)pcStack_78 >> 0x30);
                  *(short *)param_1 = (short)(local_84 >> 0x10);
                  param_1[4] = lStack_68;
                  *(ulonglong *)((longlong)param_1 + 0x12) =
                       CONCAT26(uStack_e2,(int6)((ulonglong)pcStack_78 >> 0x10));
                  *(ulonglong *)((longlong)param_1 + 0x1a) = CONCAT26(uStack_da,uStack_e0);
                  *(int *)((longlong)param_1 + 2) = local_f8;
                  *(uint *)((longlong)param_1 + 6) = CONCAT22(uStack_f2,uStack_f4);
                  *(undefined4 *)((longlong)param_1 + 10) = uStack_f0;
                  *(uint *)((longlong)param_1 + 0xe) = CONCAT22(uStack_ea,uStack_ec);
                  iVar16 = local_f8;
                  goto joined_r0x00546c76;
                }
                ppuVar12 = &PTR_s_src_mcp_stdio_rs_0078d848;
                uVar14 = local_100;
                goto LAB_00546d16;
              }
            }
          }
          lVar11 = (*(code *)PTR_<&str>_007991e8)(uVar15,0x13);
          iVar16 = extraout_XMM0_Da_10;
        }
      }
      else {
        lVar11 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da_04,0x17);
        iVar16 = extraout_XMM0_Da_06;
      }
      *param_1 = lVar11;
      *(undefined1 *)(param_1 + 1) = 0xff;
joined_r0x00546c76:
      if (local_110 != 0) {
        iVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(iVar16,1);
      }
      if (plVar7 != (longlong *)0x0) {
        iVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(iVar16,1);
      }
      if (local_a8 != 0) {
        iVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(iVar16,1);
      }
      if (lVar9 == 0) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(iVar16,1);
      return param_1;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00546d43;
    }
    local_f8 = 0x80;
    uStack_f4 = 0;
    uStack_f2 = 0;
    uStack_f0 = (undefined4)lVar9;
    uStack_ec = (undefined2)((ulonglong)lVar9 >> 0x20);
    uStack_ea = (undefined2)((ulonglong)lVar9 >> 0x30);
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e2 = 0;
    local_80 = (longlong *)&local_f8;
    lVar9 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::
            <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                      (param_12,&local_80);
    if (lVar9 == 0) {
      lVar9 = CONCAT26(uStack_f2,CONCAT24(uStack_f4,local_f8));
      uVar13 = CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
      if (lVar9 != -1) {
        lVar11 = CONCAT26(uStack_e2,CONCAT24(uStack_e4,uStack_e8));
        uVar15 = extraout_XMM0_Da_01;
        goto joined_r0x005468a0;
      }
    }
    else if (CONCAT26(uStack_f2,CONCAT24(uStack_f4,local_f8)) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
    }
    lVar9 = (*(code *)PTR_<serde_json[dc3825464c436029]::error::Error>_00799ba0)();
  }
  *param_1 = lVar9;
  *(undefined1 *)(param_1 + 1) = 0xff;
LAB_005469ef:
  (*(code *)PTR_close_00799030)();
  return param_1;
}


