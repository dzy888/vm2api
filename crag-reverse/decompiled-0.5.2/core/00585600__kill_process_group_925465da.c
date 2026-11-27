// 00585600 kill_process_group

/* craggemini_core[66f3c71560d70857]::guard_exec::kill_process_group */

void __rustcall craggemini_core[66f3c71560d70857]::guard_exec::kill_process_group(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_kill_00799120;
  if (param_1 < 2) {
    return;
  }
  (*(code *)PTR_kill_00799120)();
  (*(code *)puVar1)();
  return;
}


