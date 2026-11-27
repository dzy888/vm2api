// 0066dd80 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},()>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>
          (undefined4 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined3 uVar11;
  undefined1 uVar12;
  byte bVar13;
  char cVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  code *pcVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_158;
  undefined4 uStack_157;
  undefined4 uStack_153;
  undefined4 uStack_14f;
  undefined4 uStack_14b;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined3 uStack_108;
  undefined4 uStack_105;
  uint uStack_101;
  undefined4 uStack_fd;
  ushort local_f0;
  undefined6 uStack_ee;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  undefined *local_a8;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar18 = *(longlong *)(param_2 + 0x10);
  piVar1 = (int *)(lVar18 + 0x10);
  LOCK();
  bVar21 = *(int *)(lVar18 + 0x10) == 0;
  if (bVar21) {
    *(int *)(lVar18 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar21) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  uVar6 = uStack_153;
  uVar22 = uStack_157;
  uVar12 = local_158;
  local_158 = SUB81(piVar1,0);
  uVar10 = local_158;
  uStack_153._0_3_ = (undefined3)((ulonglong)piVar1 >> 0x28);
  uVar11 = (undefined3)uStack_153;
  uStack_157 = (undefined4)((ulonglong)piVar1 >> 8);
  uVar7 = uStack_157;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar13 = 0;
    cVar14 = *(char *)(lVar18 + 0x14);
    pcVar20 = (code *)PTR_wait_timeout_007995e0;
  }
  else {
    local_158 = uVar12;
    uStack_157 = uVar22;
    uStack_153 = uVar6;
    bVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar13 = bVar13 ^ 1;
    cVar14 = *(char *)(lVar18 + 0x14);
    param_1 = extraout_XMM0_Da_00;
    pcVar20 = (code *)PTR_wait_timeout_007995e0;
    uVar12 = local_158;
    uVar22 = uStack_157;
    uVar6 = uStack_153;
  }
  PTR_wait_timeout_007995e0 = pcVar20;
  if (cVar14 != '\0') {
    uStack_153 = CONCAT13(bVar13,uVar11);
    local_158 = uVar10;
    uStack_157 = uVar7;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<bool>>>_00791338
               ,&local_158,&PTR_s_src_mcp_stdio_rs_00790cc8);
LAB_0066e475:
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  cVar14 = *(char *)(lVar18 + 0x15);
  local_158 = uVar12;
  uStack_157 = uVar22;
  uStack_153 = uVar6;
  while ((cVar14 == '\0' && (*(char *)(*(longlong *)(param_2 + 0x18) + 0x10) == '\0'))) {
    uVar12 = (*pcVar20)(200000000,0);
    if (*(char *)(lVar18 + 0x14) != '\0') {
      uStack_153 = CONCAT13(bVar13,uVar11);
      uStack_14b = CONCAT13(uVar12,(undefined3)uStack_14b) ^ 0x1000000;
      local_158 = uVar10;
      uStack_157 = uVar7;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<(std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<bool>,std[6c98fd8553dbae28]::sync::WaitTimeoutResult)>>_00791398
                 ,&local_158,&PTR_s_src_mcp_stdio_rs_00790ce0);
      goto LAB_0066e475;
    }
    cVar14 = *(char *)(lVar18 + 0x15);
    param_1 = extraout_XMM0_Da;
  }
  if (((bVar13 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da_01,
        cVar14 == '\0')) {
    *(undefined1 *)(lVar18 + 0x14) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    param_1 = (*(code *)PTR_wake_00799010)();
  }
  lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
  local_120 = lVar18 + (ulonglong)(lVar18 == 0);
  if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x10) == '\0') {
    pcVar20 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    do {
      local_b0 = &local_120;
      local_a8 = PTR_fmt_007991f8;
      (*(code *)PTR_format_inner_00799048)(param_1,&local_b0);
      lVar18 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(lVar18 + 0x10) == -1) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)(lVar18 + 0x18);
        lVar18 = *(longlong *)(lVar18 + 0x20);
      }
      lVar5 = CONCAT35((undefined3)uStack_153,CONCAT41(uStack_157,local_158));
      lVar3 = *(longlong *)(param_2 + 0x28);
      craggemini_core[66f3c71560d70857]::mcp_stdio::unix_http_json_sync
                (&local_f0,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),
                 *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38),uVar19,lVar18,"GET",3,
                 CONCAT35((undefined3)uStack_14b,CONCAT41(uStack_14f,uStack_153._3_1_)),
                 CONCAT71(uStack_147,uStack_14b._3_1_),0,0x19,0);
      cVar14 = (char)local_e8;
      if ((char)local_e8 == -1) {
LAB_0066df63:
        param_1 = (*(code *)PTR_sleep_00799f58)();
        pcVar20 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        if (cVar14 == -1) {
LAB_0066e2ae:
          pcVar20 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
          if ((1 < ((uint)CONCAT62(uStack_ee,local_f0) & 3) - 2) && ((local_f0 & 3) != 0)) {
            lVar18 = CONCAT62(uStack_ee,local_f0) + -1;
            uStack_153._3_1_ = (undefined1)lVar18;
            uStack_14f = (undefined4)((ulonglong)lVar18 >> 8);
            uStack_14b._0_3_ = (undefined3)((ulonglong)lVar18 >> 0x28);
            local_158 = 3;
            param_1 = (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          param_1 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_e8,250000000);
        }
      }
      else {
        if (local_f0 != 200) {
          if ((local_f0 != 0x194) && (local_f0 != 0x19a)) goto LAB_0066df63;
          uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(&local_e8);
LAB_0066e309:
          if (lVar5 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
          }
          break;
        }
        local_68 = local_d8;
        uStack_64 = uStack_d4;
        uStack_60 = uStack_d0;
        uStack_5c = uStack_cc;
        local_78 = local_e8;
        uStack_74 = uStack_e4;
        uStack_70 = uStack_e0;
        uStack_6c = uStack_dc;
        pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(local_e8,&local_78);
        if (((pcVar15 != (char *)0x0) && (*pcVar15 == '\x02')) &&
           ((*(longlong *)(pcVar15 + 8) == 0 &&
            ((uVar4 = *(ulonglong *)(pcVar15 + 0x10), local_120 < uVar4 &&
             (local_120 = uVar4, *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x10) < uVar4))))))
        {
          local_c8 = 0;
          local_b8 = 0;
          (*pcVar20)();
          puVar8 = PTR___rust_alloc_00799000;
          puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar16 != (undefined4 *)0x0) {
            *(undefined4 *)((longlong)puVar16 + 3) = 0x6370726e;
            *puVar16 = 0x6e6f736a;
            local_118 = 7;
            uStack_110 = SUB84(puVar16,0);
            uStack_10c = (uint)((ulonglong)puVar16 >> 0x20);
            uStack_108 = 7;
            uStack_105 = 0;
            uStack_101 = uStack_101 & 0xffffff00;
            (*pcVar20)();
            puVar17 = (undefined2 *)(*(code *)puVar8)();
            if (puVar17 == (undefined2 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0066e475;
            }
            *(undefined1 *)(puVar17 + 1) = 0x30;
            *puVar17 = 0x2e32;
            local_158 = 3;
            uStack_153 = CONCAT13(3,(undefined3)uStack_153);
            uStack_14f = 0;
            uStack_14b._3_1_ = (byte)puVar17;
            uStack_14b = (uint)uStack_14b._3_1_ << 0x18;
            uStack_147 = (undefined7)((ulonglong)puVar17 >> 8);
            uStack_140 = 3;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_b0,&local_c8,&local_118,&local_158);
            puVar8 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
            if ((char)local_b0 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_b0);
            }
            (*(code *)puVar8)();
            puVar9 = PTR___rust_alloc_00799000;
            puVar16 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar16 != (undefined4 *)0x0) {
              *(undefined2 *)(puVar16 + 1) = 0x646f;
              *puVar16 = 0x6874656d;
              local_118 = 6;
              uStack_110 = SUB84(puVar16,0);
              uStack_10c = (uint)((ulonglong)puVar16 >> 0x20);
              uStack_108 = 6;
              uStack_105 = 0;
              uStack_101 = uStack_101 & 0xffffff00;
              (*(code *)puVar8)();
              puVar16 = (undefined4 *)(*(code *)puVar9)();
              uVar19 = _UNK_0018d358;
              if (puVar16 != (undefined4 *)0x0) {
                *(undefined8 *)(puVar16 + 4) = _DAT_0018d350;
                *(undefined8 *)(puVar16 + 6) = uVar19;
                uVar7 = _UNK_0018d34c;
                uVar6 = _UNK_0018d348;
                uVar22 = _UNK_0018d344;
                *puVar16 = _DAT_0018d340;
                puVar16[1] = uVar22;
                puVar16[2] = uVar6;
                puVar16[3] = uVar7;
                local_158 = 3;
                uStack_153 = CONCAT13(0x20,(undefined3)uStack_153);
                uStack_14f = 0;
                uStack_14b._3_1_ = (byte)puVar16;
                uStack_14b = (uint)uStack_14b._3_1_ << 0x18;
                uStack_147 = (undefined7)((ulonglong)puVar16 >> 8);
                uStack_140 = 0x20;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_b0,&local_c8,&local_118,&local_158);
                if ((char)local_b0 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_b0);
                }
                local_38 = local_b8;
                uVar19 = local_38;
                local_48 = (undefined1)local_c8;
                uStack_47 = (undefined7)((ulonglong)local_c8 >> 8);
                uStack_40 = (undefined4)uStack_c0;
                uVar22 = uStack_40;
                uStack_3c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
                uStack_40._0_1_ = (undefined1)uStack_c0;
                local_38._0_4_ = (uint)local_b8;
                local_38._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
                uStack_108 = (undefined3)((ulonglong)uStack_c0 >> 8);
                uStack_105 = uStack_3c;
                uStack_101 = (uint)local_38;
                uStack_fd = local_38._4_4_;
                uStack_110 = (undefined4)((ulonglong)local_c8 >> 8);
                uStack_10c = (uint)(CONCAT17((undefined1)uStack_40,uStack_47) >> 0x20);
                local_138 = *(char *)(*(longlong *)(param_2 + 0x38) + 0x10) != '\0';
                local_158 = 5;
                uStack_147 = (undefined7)((ulonglong)uStack_c0 >> 8);
                uStack_140 = local_b8;
                local_118._0_4_ = (undefined4)uStack_4f;
                local_118._4_4_ = (undefined4)(CONCAT17(local_48,uStack_4f) >> 0x20);
                uStack_157 = (undefined4)local_118;
                uStack_153 = local_118._4_4_;
                uStack_14f = uStack_110;
                uStack_14b = uStack_10c;
                local_130 = 0xffffffffffffffff;
                local_118 = CONCAT17(local_48,uStack_4f);
                uStack_40 = uVar22;
                local_38 = uVar19;
                <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
                ::send(&local_b0,param_2,&local_158);
                if (local_88[0] != -2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_b0);
                  if ((int)local_88[0] != -1) {
                    <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                    ::drop(local_88);
                  }
                  uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <serde_json[dc3825464c436029]::value::Value>(&local_78);
                  if ((char)local_e8 == -1) {
                    if ((1 < ((uint)CONCAT62(uStack_ee,local_f0) & 3) - 2) && ((local_f0 & 3) != 0))
                    {
                      lVar18 = CONCAT62(uStack_ee,local_f0) + -1;
                      uStack_153._3_1_ = (undefined1)lVar18;
                      uStack_14f = (undefined4)((ulonglong)lVar18 >> 8);
                      uStack_14b._0_3_ = (undefined3)((ulonglong)lVar18 >> 0x28);
                      local_158 = 3;
                      uVar22 = (*(code *)PTR_drop_00799040)();
                    }
                  }
                  goto LAB_0066e309;
                }
                goto LAB_0066e290;
              }
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0066e475;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0066e475;
        }
LAB_0066e290:
        param_1 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_78);
        pcVar20 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        if ((char)local_e8 == -1) goto LAB_0066e2ae;
      }
      if (lVar5 != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    } while (*(char *)(*(longlong *)(param_2 + 0x18) + 0x10) == '\0');
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_>(param_2);
  return;
}


