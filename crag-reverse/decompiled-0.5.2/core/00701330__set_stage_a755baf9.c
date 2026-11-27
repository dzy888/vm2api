// 00701330 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::set_stage(longlong param_1,code *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  longlong *in_FS_OFFSET;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *in_FS_OFFSET;
  pcVar18 = param_2;
  if (*(char *)(lVar2 + -0xf0) != '\0') {
    if (*(char *)(lVar2 + -0xf0) != '\x01') {
      uVar19 = 0;
      goto LAB_00701366;
    }
    pcVar18 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  uVar19 = *(undefined8 *)(lVar2 + -0x108);
  *(undefined8 *)(lVar2 + -0x108) = uVar1;
LAB_00701366:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>>>
            ((undefined4 *)(param_1 + 0x18),pcVar18);
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar9 = *(undefined4 *)(param_2 + 0x18);
  uVar10 = *(undefined4 *)(param_2 + 0x1c);
  uVar11 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)(param_2 + 0x24);
  uVar13 = *(undefined4 *)(param_2 + 0x28);
  uVar14 = *(undefined4 *)(param_2 + 0x2c);
  uVar15 = *(undefined4 *)(param_2 + 0x34);
  uVar16 = *(undefined4 *)(param_2 + 0x38);
  uVar17 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x4c) = uVar15;
  *(undefined4 *)(param_1 + 0x50) = uVar16;
  *(undefined4 *)(param_1 + 0x54) = uVar17;
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  *(undefined4 *)(param_1 + 0x3c) = uVar12;
  *(undefined4 *)(param_1 + 0x40) = uVar13;
  *(undefined4 *)(param_1 + 0x44) = uVar14;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  if (*(char *)(lVar2 + -0xf0) != '\0') {
    if (*(char *)(lVar2 + -0xf0) == '\x02') {
      return;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  *(undefined8 *)(lVar2 + -0x108) = uVar19;
  return;
}


