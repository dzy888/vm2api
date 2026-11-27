// 0066d7f0 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>
          (longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  int local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  byte local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  char *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a8 = param_2;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = (*(code *)PTR_stdout_00799e70)();
  puVar11 = (undefined8 *)(*(code *)PTR_lock_00799e78)();
  local_90 = param_1;
  do {
    if (param_1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv(&local_e0,local_a8);
    }
    else if (param_1 == 1) {
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv(&local_e0,local_a8);
    }
    else {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv(&local_e0,local_a8);
    }
    pcVar9 = local_b0;
    pcVar8 = local_b8;
    bVar7 = local_c0;
    if (local_b8 == (char *)0xfffffffffffffffe) goto LAB_0066dc50;
    local_48 = local_d0;
    uStack_44 = uStack_cc;
    uStack_40 = uStack_c8;
    uStack_3c = uStack_c4;
    local_58 = (undefined4)local_e0;
    uStack_54 = local_e0._4_4_;
    uStack_50 = (undefined4)uStack_d8;
    uStack_4c = uStack_d8._4_4_;
    local_a0 = local_b8;
    local_98 = local_b0;
    uVar15 = serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>
                       (&local_e0,&local_58);
    pcVar13 = uStack_d8;
    pcVar5 = local_e0;
    local_f8 = (int)pcVar8;
    if (local_e0 == (char *)0xffffffffffffffff) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (&uStack_d8);
      if (local_f8 != -1) {
        <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
        drop(&local_a0);
      }
    }
    else {
      uVar4 = CONCAT44(uStack_cc,local_d0);
      if ((bVar7 & 1) != 0) {
        local_68 = local_70;
        local_60 = PTR_fmt_007991f0;
        uVar15 = (*(code *)PTR_format_inner_00799048)(uVar15,&local_68);
        pcVar14 = uStack_d8;
        pcVar6 = local_e0;
        uVar12 = (*(code *)PTR_write_all_00799e80)(uVar15,CONCAT44(uStack_cc,local_d0));
        if (uVar12 == 0) {
          uVar12 = (*(code *)PTR_write_all_00799e80)(extraout_XMM0_Da,uVar4);
          pcVar14 = pcVar13;
          if (uVar12 == 0) {
            uVar12 = (*(code *)PTR_flush_00799e88)();
            if (uVar12 == 0) {
              uVar15 = extraout_XMM0_Da_01;
              if (pcVar6 != (char *)0x0) {
                uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
                pcVar13 = pcVar6;
              }
              goto LAB_0066da5d;
            }
            uVar15 = extraout_XMM0_Da_01;
            if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
              uStack_d8 = (char *)(uVar12 - 1);
              local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
              uVar15 = (*(code *)PTR_drop_00799040)();
            }
          }
          else {
            uVar15 = extraout_XMM0_Da_00;
            if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
              uStack_d8 = (char *)(uVar12 - 1);
              local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
              uVar15 = (*(code *)PTR_drop_00799040)();
            }
          }
        }
        else {
          uVar15 = extraout_XMM0_Da;
          if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
            uStack_d8 = (char *)(uVar12 - 1);
            local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
            uVar15 = (*(code *)PTR_drop_00799040)();
          }
        }
        pcVar13 = pcVar14;
        if (pcVar6 != (char *)0x0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          pcVar13 = pcVar6;
        }
        goto LAB_0066dc1b;
      }
      uVar12 = (*(code *)PTR_write_all_00799e80)(uVar15,uVar4);
      if (uVar12 != 0) {
        uVar15 = extraout_XMM0_Da_02;
        if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
          uStack_d8 = (char *)(uVar12 - 1);
          local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
        goto LAB_0066dc1b;
      }
      pcVar13 = "\n";
      uVar12 = (*(code *)PTR_write_all_00799e80)(extraout_XMM0_Da_02,1);
      if (uVar12 != 0) {
        uVar15 = extraout_XMM0_Da_03;
        if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
          uStack_d8 = (char *)(uVar12 - 1);
          local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
        goto LAB_0066dc1b;
      }
      uVar12 = (*(code *)PTR_flush_00799e88)();
      uVar15 = extraout_XMM0_Da_04;
      if (uVar12 != 0) {
        if ((1 < ((uint)uVar12 & 3) - 2) && ((uVar12 & 3) != 0)) {
          uStack_d8 = (char *)(uVar12 - 1);
          local_e0 = (char *)CONCAT71(local_e0._1_7_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
LAB_0066dc1b:
        if (pcVar5 != (char *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          pcVar13 = pcVar5;
        }
        if (local_f8 != -1) {
          <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(&local_a0,pcVar13);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_58);
LAB_0066dc50:
        piVar1 = (int *)((longlong)puVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *puVar11 = 0;
          LOCK();
          iVar2 = *(int *)(puVar11 + 1);
          *(int *)(puVar11 + 1) = 0;
          UNLOCK();
          if (iVar2 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
        }
        <std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_88);
        return;
      }
LAB_0066da5d:
      param_1 = local_90;
      if (local_f8 != -1) {
        local_e0 = pcVar8;
        uStack_d8 = pcVar9;
        if (pcVar8 == (char *)0x2) {
          cVar10 = <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send
                             (pcVar9,pcVar13,0xffffffff);
          uVar15 = extraout_XMM0_Da_05;
LAB_0066daab:
          if (cVar10 == '\0') {
            (*(code *)PTR_panic_00799338)
                      (uVar15,&anon_92c4c5dab1af02541b6de8b875afdfcf_38_llvm_8405253652347736786);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          if (local_f8 != 1) {
            cVar10 = <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>::send
                               (pcVar9,pcVar13,0xffffffff);
            uVar15 = extraout_XMM0_Da_06;
            goto LAB_0066daab;
          }
          <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::send(pcVar9);
        }
        uVar15 = <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                 ::drop(&local_e0);
      }
      if (pcVar5 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
      }
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_58);
  } while( true );
}


